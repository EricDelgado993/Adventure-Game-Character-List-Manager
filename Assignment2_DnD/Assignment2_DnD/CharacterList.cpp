//=====================================================
// File: CharacterList.cpp
// Author: Eric Delgado
// Date: 03-02-2022
// Course: CS 221 - Computer Science II Data Structures
// Programming Assignment 2: Linked lists
//=====================================================

#include "CharacterList.h"

// Constructor: Default
// Initializes an empty CharacterList by setting the head pointer to NULL.
CharacterList::CharacterList()
{
    m_pHead = NULL;
}

// Destructor
// Cleans up the CharacterList object. No dynamic memory management is performed here.
CharacterList::~CharacterList()
{
    // Implementation assumes that character deletion is handled elsewhere.
}

// Method: addCharacter
// Adds a new Character to the list in sorted order based on the character's name.
// If the list is empty, the character becomes the head. Otherwise, the character is
// inserted in a sorted position (before the head, in the middle, or at the end).
bool CharacterList::addCharacter(Character* newCharacter)
{
    Character* temp = m_pHead;
    Character* prev = nullptr;

    // Insert character into an empty list
    if (m_pHead == NULL)
    {
        m_pHead = newCharacter;
        return true;
    }

    // Insert at the head position of the list
    if (strcmp(m_pHead->getName(), newCharacter->getName()) > 0)
    {
        newCharacter->m_pNext = m_pHead;
        m_pHead = newCharacter;
        return true;
    }

    // Iterate through the list to find the correct insertion point
    while (temp != NULL && strcmp(newCharacter->getName(), temp->getName()) > 0)
    {
        prev = temp;
        temp = temp->m_pNext;
    }

    // Insert in the middle or at the end
    newCharacter->m_pNext = temp;
    if (prev != NULL)
    {
        prev->m_pNext = newCharacter;
    }

    return true;
}

// Method: deleteCharacter
// Removes a Character from the list by its name. If the character is found, it is removed
// from the list and a pointer to it is returned. If not found, returns NULL.
// Handles the case of removing the head node or nodes in the middle/end of the list.
Character* CharacterList::deleteCharacter(char* characterName)
{
    // Handle empty list
    if (m_pHead == NULL)
    {
        return NULL;
    }

    Character* temp = m_pHead;
    Character* prev = NULL;

    // Traverse the list to find the character
    while (temp != NULL && strcmp(temp->getName(), characterName) != 0)
    {
        prev = temp;
        temp = temp->m_pNext;
    }

    // Character not found
    if (temp == NULL)
    {
        return NULL;
    }

    // Remove the character
    if (prev == NULL)
    {
        // Removing the head node
        m_pHead = temp->m_pNext;
    }
    else
    {
        // Removing a node in the middle or at the end
        prev->m_pNext = temp->m_pNext;
    }

    temp->m_pNext = NULL; // Detach the node

    return temp;
}

// Method: addItem
// Adds an item to the specified character's inventory by name. 
// Returns true if the item is successfully added; otherwise, false.
bool CharacterList::addItem(char* characterName, Item* newItem)
{
    Character* temp = m_pHead;

    // Handle empty list
    if (temp == NULL)
    {
        return false;
    }

    // Search for the character in the list
    while (strcmp(temp->getName(), characterName) != 0 && temp->m_pNext != NULL)
    {
        temp = temp->m_pNext;
    }

    // Attempt to add the item
    if (temp->addItem(newItem))
    {
        return true;
    }

    std::cout << "Items full" << std::endl;
    return false;
}

// Method: getItem
// Retrieves a specific item from a character's inventory by name. 
// Returns a pointer to the item if found; otherwise, NULL.
Item* CharacterList::getItem(char* characterName, char* itemName)
{
    Character* temp = m_pHead;

    // Handle empty list
    if (temp == NULL)
    {
        return NULL;
    }

    // Search for the character in the list
    while (strcmp(temp->getName(), characterName) != 0 && temp->m_pNext != NULL)
    {
        temp = temp->m_pNext;
    }

    // Attempt to retrieve the item
    if (temp->getItem(itemName) != NULL)
    {
        return temp->getItem(itemName);
    }

    std::cout << "Item not found" << std::endl;
    return NULL;
}

// Method: dropItem
// Removes an item from a character's inventory by name and returns it.
// If the item is not found, returns NULL.
Item* CharacterList::dropItem(char* characterName, char* itemName)
{
    Character* temp = m_pHead;

    // Handle empty list
    if (temp == NULL)
    {
        return NULL;
    }

    // Search for the character in the list
    while (strcmp(temp->getName(), characterName) != 0 && temp->m_pNext != NULL)
    {
        temp = temp->m_pNext;
    }

    // Attempt to drop the item
    if (temp->dropItem(itemName) != NULL)
    {
        return temp->dropItem(itemName);
    }

    return NULL;
}

// Method: printCharacters
// Outputs the details of all characters in the list to the console.
void CharacterList::printCharacters()
{
    Character* temp = m_pHead;

    if (temp == NULL)
    {
        return;
    }

    // Traverse and print each character's details
    while (temp != NULL)
    {
        temp->printAll();
        temp = temp->m_pNext;
    }
}