//=====================================================
// File: TestDriver.cpp
// Author: Eric Delgado
// Date: 03-02-2022
// Course: CS 221 - Computer Science II Data Structures
// Programming Assignment 2: Linked lists
//=====================================================

#include <iostream>
#include "CharacterList.h"

using namespace std;

int main()
{
    CharacterList* myList = new CharacterList();

    Character* myChar1 = new Character();
    Character* myChar2 = new Character();
    Character* myChar3 = new Character();
    Character* myChar4 = new Character();
    Character* myChar5 = new Character();
    Character* myChar6 = new Character();
    
    Item* axe = new Item();
    strcpy_s(axe->m_sItemName, sizeof(axe->m_sItemName), "Axe");

    char axeLabel[65] = "Axe";

    char name1[64];
    strcpy_s(name1, sizeof(name1), "B");

    char name2[64];
    strcpy_s(name2, sizeof(name2), "D");

    char name3[64];
    strcpy_s(name3, sizeof(name3), "F");

    char name4[64];
    strcpy_s(name4, sizeof(name4), "C");

    char name5[64];
    strcpy_s(name5, sizeof(name5), "E");

    char name6[64];
    strcpy_s(name6, sizeof(name6), "A");


    myChar1->setName(name1);
    myChar2->setName(name2);
    myChar3->setName(name3);
    myChar4->setName(name4);
    myChar5->setName(name5);
    myChar6->setName(name6);

    myList->getItem(myChar1->getName(), axeLabel);
    myList->dropItem(myChar1->getName(), axeLabel);

    myList->addCharacter(myChar1);
    myList->addCharacter(myChar2);
    myList->addCharacter(myChar3);
    myList->addCharacter(myChar4);
    myList->addCharacter(myChar5);
    myList->addCharacter(myChar6);

    //myList->deleteCharacter(name1);
    //myList->deleteCharacter(name1);
    //myList->deleteCharacter(name2);
    //myList->deleteCharacter(name4);
    //myList->deleteCharacter(name6);
    // myList->deleteCharacter(name5);
    //myList->deleteCharacter(name3);
    //myList->deleteCharacter(name5);

    myList->getItem(myChar1->getName(), axeLabel);

    myList->addItem(myChar1->getName(), axe);

    myList->getItem(myChar1->getName(), axeLabel);

    myList->dropItem(myChar1->getName(), axeLabel);

    myList->dropItem(myChar1->getName(), axeLabel);

    myList->printCharacters();
}


/*
#include "CharacterList.h"
#include "Character.h"
#include <iostream>
#include <cstring>

void testCharacterList()
{
    CharacterList charList;

    // Create unique characters
    Character* char1 = new Character((char*)"Alice", 1, 1, 100, 10, 12, 8, 14, 10, 16);
    Character* char2 = new Character((char*)"Bob", 2, 2, 120, 12, 15, 9, 13, 11, 14);
    Character* char3 = new Character((char*)"Charlie", 3, 1, 110, 11, 13, 10, 12, 14, 15);

    // Test addCharacter
    std::cout << "Testing addCharacter:" << std::endl;
    std::cout << (charList.addCharacter(char1) ? "Added Alice" : "Failed to add Alice") << std::endl;
    std::cout << (charList.addCharacter(char2) ? "Added Bob" : "Failed to add Bob") << std::endl;
    std::cout << (charList.addCharacter(char3) ? "Added Charlie" : "Failed to add Charlie") << std::endl;

    charList.printCharacters();

    // Test deleteCharacter
    std::cout << "\nTesting deleteCharacter:" << std::endl;
    Character* deletedChar = charList.deleteCharacter((char*)"Bob");
    if (deletedChar)
    {
        std::cout << "Deleted " << deletedChar->getName() << std::endl;
        delete deletedChar;
    }
    else
    {
        std::cout << "Character Bob not found" << std::endl;
    }

    charList.printCharacters();

    // Test addItem
    std::cout << "\nTesting addItem:" << std::endl;
    Item sword = {"Sword", 1, 150.0, 5.0};
    Item shield = {"Shield", 2, 100.0, 8.0};
    Item potion = {"Potion", 3, 50.0, 1.0};

    std::cout << (charList.addItem((char*)"Alice", &sword) ? "Sword added to Alice" : "Failed to add Sword to Alice") << std::endl;
    std::cout << (charList.addItem((char*)"Charlie", &shield) ? "Shield added to Charlie" : "Failed to add Shield to Charlie") << std::endl;
    std::cout << (charList.addItem((char*)"NonExistent", &potion) ? "Potion added to NonExistent" : "Failed to add Potion to NonExistent") << std::endl;

    charList.printCharacters();

    // Test getItem
    std::cout << "\nTesting getItem:" << std::endl;
    Item* retrievedItem = charList.getItem((char*)"Alice", (char*)"Sword");
    if (retrievedItem)
    {
        std::cout << "Retrieved item: " << retrievedItem->m_sItemName << std::endl;
    }
    else
    {
        std::cout << "Item not found in Alice's inventory" << std::endl;
    }

    // Test dropItem
    std::cout << "\nTesting dropItem:" << std::endl;
    Item* droppedItem = charList.dropItem((char*)"Alice", (char*)"Sword");
    if (droppedItem)
    {
        std::cout << "Dropped item: " << droppedItem->m_sItemName << std::endl;
        delete droppedItem; // Free memory allocated in dropItem
    }
    else
    {
        std::cout << "Item not found in Alice's inventory" << std::endl;
    }

    charList.printCharacters();

    // Clean up remaining characters
    std::cout << "\nCleaning up remaining characters:" << std::endl;
    while (charList.hasCharacters()) // Replace direct access with a public method
    {
        Character* character = charList.deleteFirstCharacter(); // Use a proper accessor method
        if (character)
        {
            std::cout << "Deleted " << character->getName() << std::endl;
            delete character;
        }
    }
}

int main()
{
    testCharacterList();
    return 0;
}
*/