//=====================================================
// File: Character.cpp
// Author: Eric Delgado
// Date: 03-02-2022
// Course: CS 221 - Computer Science II Data Structures
// Programming Assignment 2: Linked lists
//=====================================================

#include "Character.h"

// Constructor: Default
// Initializes a Character object with default values.
// Sets name to an empty string, class and alignment to 0,
// hit points to 0, character traits to 0, and initializes
// items with default values.
Character::Character()
{
    strcpy_s(m_sName, sizeof(m_sName), "");
    m_iClass = 0;
    m_iAlignment = 0;
    m_iHitPoints = 0;

    m_pNext = NULL;

    for (int index = 0; index < 6; index++)
    {
        m_iCharTraits[index] = 0;
    }

    for (int index = 0; index < 10; index++)
    {
        m_Items[index].m_dValue = 0;
        m_Items[index].m_dWeight = 0;
        m_Items[index].m_iType = 0;
        strcpy_s(m_Items[index].m_sItemName, sizeof(m_Items[index].m_sItemName), "---");
    }
}

// Constructor: Parameterized
// Initializes a Character object with specified attributes.
// Assigns the name, class, alignment, hit points, and character
// traits passed as arguments. Items are initialized with default values.
Character::Character(char* name, int cl, int al, int hp, int str, int dex, int con, int itl, int wis, int chr)
{
    strcpy_s(m_sName, sizeof(m_sName), name);
    m_iClass = cl;
    m_iAlignment = al;
    m_iHitPoints = hp;
    m_iCharTraits[0] = str;
    m_iCharTraits[1] = dex;
    m_iCharTraits[2] = con;
    m_iCharTraits[3] = itl;
    m_iCharTraits[4] = wis;
    m_iCharTraits[5] = chr;

    for (int i = 0; i < 10; i++)
    {
        m_Items[i].m_dValue = 0;
        m_Items[i].m_dWeight = 0;
        m_Items[i].m_iType = 0;
        strcpy_s(m_Items[i].m_sItemName, sizeof(m_Items[i].m_sItemName), "---");
    }

    m_pNext = NULL;
}

// Destructor
// Cleans up resources when a Character object is destroyed.
Character::~Character()
{
    // No dynamic allocations within Character, so no actions are needed.
}

// Getter: Name
// Returns the name of the character.
char* Character::getName()
{
    return m_sName;
}

// Setter: Name
// Updates the name of the character.
void Character::setName(char* name)
{
    strcpy_s(m_sName, sizeof(m_sName), name);
}

// Getter: Class
// Returns the class of the character.
int Character::getClass()
{
    return m_iClass;
}

// Setter: Class
// Updates the class of the character.
void Character::setClass(int cl)
{
    m_iClass = cl;
}

// Getters and Setters for Character Traits

// Alignment
int Character::getAlignment()
{
    return m_iAlignment;
}

void Character::setAlignment(int al)
{
    m_iAlignment = al;
}

// Hit Points
int Character::getHitPoints()
{
    return m_iHitPoints;
}

void Character::setHitPoints(int hp)
{
    m_iHitPoints = hp;
}

// Strength
int Character::getStrength()
{
    return m_iCharTraits[0];
}

void Character::setStrength(int str)
{
    m_iCharTraits[0] = str;
}

// Dexterity
int Character::getDexterity()
{
    return m_iCharTraits[1];
}

void Character::setDexterity(int dex)
{
    m_iCharTraits[1] = dex;
}

// Constitution
int Character::getConstitution()
{
    return m_iCharTraits[2];
}

void Character::setConstitution(int con)
{
    m_iCharTraits[2] = con;
}

// Intelligence
int Character::getIntelligence()
{
    return m_iCharTraits[3];
}

void Character::setIntelligence(int itl)
{
    m_iCharTraits[3] = itl;
}

// Wisdom
int Character::getWisdom()
{
    return m_iCharTraits[4];
}

void Character::setWisdom(int wis)
{
    m_iCharTraits[4] = wis;
}

// Charisma
int Character::getCharisma()
{
    return m_iCharTraits[5];
}

void Character::setCharisma(int chr)
{
    m_iCharTraits[5] = chr;
}

// Method: addItem
// Adds an item to the character's inventory. Returns true if successful.
// If the inventory is full (all slots are occupied), returns false.
bool Character::addItem(Item* item)
{
    for (int i = 0; i < 10; i++)
    {
        if (strcmp(m_Items[i].m_sItemName, "---") == 0)
        {
            m_Items[i] = *item;
            return true;
        }
    }
    return false;
}

// Method: getItem
// Retrieves an item from the inventory by name. Returns a pointer
// to the item if found, or NULL if the item is not present.
Item* Character::getItem(char* itemName)
{
    for (int i = 0; i < 10; i++)
    {
        if (strcmp(m_Items[i].m_sItemName, itemName) == 0)
        {
            return &m_Items[i];
        }
    }
    return NULL;
}

// Method: dropItem
// Removes an item from the inventory by name and returns a copy of it.
// If the item is not found, returns NULL.
Item* Character::dropItem(char* itemName)
{
    Item* itemCopy = new Item();
    for (int i = 0; i < 10; i++)
    {
        if (strcmp(m_Items[i].m_sItemName, itemName) == 0)
        {
            *itemCopy = m_Items[i];
            strcpy_s(m_Items[i].m_sItemName, sizeof(m_Items[i].m_sItemName), "---");
            m_Items[i].m_dValue = 0;
            m_Items[i].m_dWeight = 0;
            m_Items[i].m_iType = 0;
            return itemCopy;
        }
    }
    return NULL;
}

// Method: printAll
// Outputs all character details and inventory to the console in a formatted manner.
void Character::printAll()
{
    std::cout << "======================================" << std::endl;
    std::cout << "CHARACTER INFORMATION" << std::endl;
    std::cout << "======================================" << std::endl;
    std::cout << "Name:\t\t" << m_sName << std::endl;
    std::cout << "Class:\t\t" << m_iClass << std::endl;
    std::cout << "Alignment:\t" << m_iAlignment << std::endl;
    std::cout << "Hit Points:\t" << m_iHitPoints << std::endl;
    std::cout << "Strength:\t" << m_iCharTraits[0] << std::endl;
    std::cout << "Dexterity:\t" << m_iCharTraits[1] << std::endl;
    std::cout << "Constitution:\t" << m_iCharTraits[2] << std::endl;
    std::cout << "Intelligence:\t" << m_iCharTraits[3] << std::endl;
    std::cout << "Wisdom:\t\t" << m_iCharTraits[4] << std::endl;
    std::cout << "Charisma:\t" << m_iCharTraits[5] << std::endl;
    std::cout << "--------------------------------------" << std::endl;
    std::cout << "ITEMS" << std::endl;
    std::cout << "--------------------------------------" << std::endl;

    for (int i = 0; i < 10; i++)
    {
        std::cout << "[" << std::setw(2) << std::setfill('0') << i + 1 << "] " << m_Items[i].m_sItemName;
        std::cout << " [Type: " << m_Items[i].m_iType << "]";
        std::cout << " [Value: " << m_Items[i].m_dValue << "]";
        std::cout << " [Weight: " << m_Items[i].m_dWeight << "]" << std::endl;
    }
}