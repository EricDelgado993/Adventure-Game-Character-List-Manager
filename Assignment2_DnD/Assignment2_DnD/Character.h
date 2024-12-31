//=====================================================
// File: Character.h
// Author: Eric Delgado
// Date: 03-02-2022
// Course: CS 221 - Computer Science II Data Structures
// Programming Assignment 2: Linked lists
//=====================================================

#pragma once

#include <iostream>
#include <iomanip>
#include "Item.h"

class Character
{
private:
	char m_sName[64];
	int m_iClass, m_iAlignment, m_iHitPoints;
	int m_iCharTraits[6];
	Item m_Items[10];

public:
	Character* m_pNext;

	Character();
	Character(char* name, int cl, int al, int hp, int str, int dex, int con, int itl, int wis, int chr);
	~Character();

	char* getName();
	void setName(char* name);

	int getClass();
	void setClass(int cl);

	int getAlignment();
	void setAlignment(int al);

	int getHitPoints();
	void setHitPoints(int hp);

	int getStrength();
	void setStrength(int str);

	int getDexterity();
	void setDexterity(int dex);

	int getConstitution();
	void setConstitution(int cn);

	int getIntelligence();
	void setIntelligence(int itl);

	int getWisdom();
	void setWisdom(int wis);

	int getCharisma();
	void setCharisma(int chr);

	bool addItem(Item* item);

	Item* getItem(char* itemName);

	Item* dropItem(char* itemName);

	void printAll();
};