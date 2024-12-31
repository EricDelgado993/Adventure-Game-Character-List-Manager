//=====================================================
// File: CharacterList.hpp
// Author: Eric Delgado
// Date: 03-02-2022
// Course: CS 221 - Computer Science II Data Structures
// Programming Assignment 2: Linked lists
//=====================================================

#pragma once

#include "Character.h"

class CharacterList
{
private:
	Character* m_pHead;

public:
	CharacterList();
	~CharacterList();
	bool addCharacter(Character* newCharacter);
	Character* deleteCharacter(char* characterName);
	bool addItem(char* characterName, Item* newItem);
	Item* getItem(char* characterName, char* itemName);
	Item* dropItem(char* characterName, char* itemName);
	void printCharacters();
};

