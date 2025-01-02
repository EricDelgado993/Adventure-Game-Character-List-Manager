###### [↩️Return to Portfolio](https://github.com/EricDelgado993/Portfolio)
# Adventure Game Character List Manager

## Project Overview
This project implements a linked list system for managing characters in a role-playing adventure game. Each node in the list represents a player character, storing their attributes and an inventory of items they carry. The program allows for efficient management of characters and their possessions, enabling future expansions for more complex game mechanics.

--- 

## 📂 Implementation Files
- [Character.h](https://github.com/EricDelgado993/Adventure-Game-Character-List-Manager/blob/main/Assignment2_DnD/Assignment2_DnD/Character.h)
- [Character.cpp](https://github.com/EricDelgado993/Adventure-Game-Character-List-Manager/blob/main/Assignment2_DnD/Assignment2_DnD/Character.cpp)
- [CharacterList.h](https://github.com/EricDelgado993/Adventure-Game-Character-List-Manager/blob/main/Assignment2_DnD/Assignment2_DnD/CharacterList.h)
- [CharacterList.cpp](https://github.com/EricDelgado993/Adventure-Game-Character-List-Manager/blob/main/Assignment2_DnD/Assignment2_DnD/CharacterList.cpp)
- [TestDriver.cpp](https://github.com/EricDelgado993/Adventure-Game-Character-List-Manager/blob/main/Assignment2_DnD/Assignment2_DnD/TestDriver.cpp)

---

## Features

### Character List Management
- **Add Characters**: Add a new character to the sorted linked list.
- **Delete Characters**: Remove a character by name from the list.
- **Print Characters**: Display all characters and their details.

### Inventory Management
- **Add Items**: Assign an item to a character's inventory.
- **Retrieve Items**: Search for and access a specific item from a character's inventory.
- **Remove Items**: Remove and retrieve an item from a character's inventory.

### Character Functionality
- **Enhanced Attributes**: Each character includes RPG traits like name, class, alignment, hit points, and ability scores (strength, dexterity, etc.).
- **Comprehensive Print**: Display a character's details, including their carried items with weights and values.

### Data Structures
- **Linked List**: Used for managing the character list with pointers for efficient traversal.
- **Array-based Inventory**: Temporary array implementation for items, supporting up to 10 items per character.

### Item System
- **Item Structure**:
  - Name: A string of up to 64 characters.
  - Type: Integer representing the category (e.g., treasure, weapon).
  - Weight: Double indicating weight in pounds.
  - Value: Double indicating value in gold pieces.

---

## Implementation Details
- **Classes and Files**:
  - `CharacterList`: Manages the linked list of characters.
  - `Character`: Represents individual game characters and their attributes.
  - `Item`: Structure to define an item’s properties.
- **Headers and Code**:
  - `CharacterList.h` and `CharacterList.cpp`: Linked list implementation.
  - `Character.h` and `Character.cpp`: Character attributes and inventory functions.
  - `Item.h`: Item data structure.

---

## TestDriver Output
<details>

```
Testing addCharacter:
Added Alice
Added Bob
Added Charlie
======================================
CHARACTER INFORMATION
======================================
Name:           Alice
Class:          1
Alignment:      1
Hit Points:     100
Strength:       10
Dexterity:      12
Constitution:   8
Intelligence:   14
Wisdom:         10
Charisma:       16
--------------------------------------
ITEMS
--------------------------------------
[01] --- [Type: 0] [Value: 0] [Weight: 0]
[02] --- [Type: 0] [Value: 0] [Weight: 0]
[03] --- [Type: 0] [Value: 0] [Weight: 0]
[04] --- [Type: 0] [Value: 0] [Weight: 0]
[05] --- [Type: 0] [Value: 0] [Weight: 0]
[06] --- [Type: 0] [Value: 0] [Weight: 0]
[07] --- [Type: 0] [Value: 0] [Weight: 0]
[08] --- [Type: 0] [Value: 0] [Weight: 0]
[09] --- [Type: 0] [Value: 0] [Weight: 0]
[10] --- [Type: 0] [Value: 0] [Weight: 0]
======================================
CHARACTER INFORMATION
======================================
Name:           Bob
Class:          2
Alignment:      2
Hit Points:     120
Strength:       12
Dexterity:      15
Constitution:   9
Intelligence:   13
Wisdom:         11
Charisma:       14
--------------------------------------
ITEMS
--------------------------------------
[01] --- [Type: 0] [Value: 0] [Weight: 0]
[02] --- [Type: 0] [Value: 0] [Weight: 0]
[03] --- [Type: 0] [Value: 0] [Weight: 0]
[04] --- [Type: 0] [Value: 0] [Weight: 0]
[05] --- [Type: 0] [Value: 0] [Weight: 0]
[06] --- [Type: 0] [Value: 0] [Weight: 0]
[07] --- [Type: 0] [Value: 0] [Weight: 0]
[08] --- [Type: 0] [Value: 0] [Weight: 0]
[09] --- [Type: 0] [Value: 0] [Weight: 0]
[10] --- [Type: 0] [Value: 0] [Weight: 0]
======================================
CHARACTER INFORMATION
======================================
Name:           Charlie
Class:          3
Alignment:      1
Hit Points:     110
Strength:       11
Dexterity:      13
Constitution:   10
Intelligence:   12
Wisdom:         14
Charisma:       15
--------------------------------------
ITEMS
--------------------------------------
[01] --- [Type: 0] [Value: 0] [Weight: 0]
[02] --- [Type: 0] [Value: 0] [Weight: 0]
[03] --- [Type: 0] [Value: 0] [Weight: 0]
[04] --- [Type: 0] [Value: 0] [Weight: 0]
[05] --- [Type: 0] [Value: 0] [Weight: 0]
[06] --- [Type: 0] [Value: 0] [Weight: 0]
[07] --- [Type: 0] [Value: 0] [Weight: 0]
[08] --- [Type: 0] [Value: 0] [Weight: 0]
[09] --- [Type: 0] [Value: 0] [Weight: 0]
[10] --- [Type: 0] [Value: 0] [Weight: 0]

Testing deleteCharacter:
Deleted Bob
======================================
CHARACTER INFORMATION
======================================
Name:           Alice
Class:          1
Alignment:      1
Hit Points:     100
Strength:       10
Dexterity:      12
Constitution:   8
Intelligence:   14
Wisdom:         10
Charisma:       16
--------------------------------------
ITEMS
--------------------------------------
[01] --- [Type: 0] [Value: 0] [Weight: 0]
[02] --- [Type: 0] [Value: 0] [Weight: 0]
[03] --- [Type: 0] [Value: 0] [Weight: 0]
[04] --- [Type: 0] [Value: 0] [Weight: 0]
[05] --- [Type: 0] [Value: 0] [Weight: 0]
[06] --- [Type: 0] [Value: 0] [Weight: 0]
[07] --- [Type: 0] [Value: 0] [Weight: 0]
[08] --- [Type: 0] [Value: 0] [Weight: 0]
[09] --- [Type: 0] [Value: 0] [Weight: 0]
[10] --- [Type: 0] [Value: 0] [Weight: 0]
======================================
CHARACTER INFORMATION
======================================
Name:           Charlie
Class:          3
Alignment:      1
Hit Points:     110
Strength:       11
Dexterity:      13
Constitution:   10
Intelligence:   12
Wisdom:         14
Charisma:       15
--------------------------------------
ITEMS
--------------------------------------
[01] --- [Type: 0] [Value: 0] [Weight: 0]
[02] --- [Type: 0] [Value: 0] [Weight: 0]
[03] --- [Type: 0] [Value: 0] [Weight: 0]
[04] --- [Type: 0] [Value: 0] [Weight: 0]
[05] --- [Type: 0] [Value: 0] [Weight: 0]
[06] --- [Type: 0] [Value: 0] [Weight: 0]
[07] --- [Type: 0] [Value: 0] [Weight: 0]
[08] --- [Type: 0] [Value: 0] [Weight: 0]
[09] --- [Type: 0] [Value: 0] [Weight: 0]
[10] --- [Type: 0] [Value: 0] [Weight: 0]

Testing addItem:
Sword added to Alice
Shield added to Charlie
Potion added to NonExistent
======================================
CHARACTER INFORMATION
======================================
Name:           Alice
Class:          1
Alignment:      1
Hit Points:     100
Strength:       10
Dexterity:      12
Constitution:   8
Intelligence:   14
Wisdom:         10
Charisma:       16
--------------------------------------
ITEMS
--------------------------------------
[01] Sword [Type: 1] [Value: 150] [Weight: 5]
[02] --- [Type: 0] [Value: 0] [Weight: 0]
[03] --- [Type: 0] [Value: 0] [Weight: 0]
[04] --- [Type: 0] [Value: 0] [Weight: 0]
[05] --- [Type: 0] [Value: 0] [Weight: 0]
[06] --- [Type: 0] [Value: 0] [Weight: 0]
[07] --- [Type: 0] [Value: 0] [Weight: 0]
[08] --- [Type: 0] [Value: 0] [Weight: 0]
[09] --- [Type: 0] [Value: 0] [Weight: 0]
[10] --- [Type: 0] [Value: 0] [Weight: 0]
======================================
CHARACTER INFORMATION
======================================
Name:           Charlie
Class:          3
Alignment:      1
Hit Points:     110
Strength:       11
Dexterity:      13
Constitution:   10
Intelligence:   12
Wisdom:         14
Charisma:       15
--------------------------------------
ITEMS
--------------------------------------
[01] Shield [Type: 2] [Value: 100] [Weight: 8]
[02] Potion [Type: 3] [Value: 50] [Weight: 1]
[03] --- [Type: 0] [Value: 0] [Weight: 0]
[04] --- [Type: 0] [Value: 0] [Weight: 0]
[05] --- [Type: 0] [Value: 0] [Weight: 0]
[06] --- [Type: 0] [Value: 0] [Weight: 0]
[07] --- [Type: 0] [Value: 0] [Weight: 0]
[08] --- [Type: 0] [Value: 0] [Weight: 0]
[09] --- [Type: 0] [Value: 0] [Weight: 0]
[10] --- [Type: 0] [Value: 0] [Weight: 0]

Testing getItem:
Retrieved item: Sword

Testing dropItem:
Item not found in Alice's inventory
======================================
CHARACTER INFORMATION
======================================
Name:           Alice
Class:          1
Alignment:      1
Hit Points:     100
Strength:       10
Dexterity:      12
Constitution:   8
Intelligence:   14
Wisdom:         10
Charisma:       16
--------------------------------------
ITEMS
--------------------------------------
[01] --- [Type: 0] [Value: 0] [Weight: 0]
[02] --- [Type: 0] [Value: 0] [Weight: 0]
[03] --- [Type: 0] [Value: 0] [Weight: 0]
[04] --- [Type: 0] [Value: 0] [Weight: 0]
[05] --- [Type: 0] [Value: 0] [Weight: 0]
[06] --- [Type: 0] [Value: 0] [Weight: 0]
[07] --- [Type: 0] [Value: 0] [Weight: 0]
[08] --- [Type: 0] [Value: 0] [Weight: 0]
[09] --- [Type: 0] [Value: 0] [Weight: 0]
[10] --- [Type: 0] [Value: 0] [Weight: 0]
======================================
CHARACTER INFORMATION
======================================
Name:           Charlie
Class:          3
Alignment:      1
Hit Points:     110
Strength:       11
Dexterity:      13
Constitution:   10
Intelligence:   12
Wisdom:         14
Charisma:       15
--------------------------------------
ITEMS
--------------------------------------
[01] Shield [Type: 2] [Value: 100] [Weight: 8]
[02] Potion [Type: 3] [Value: 50] [Weight: 1]
[03] --- [Type: 0] [Value: 0] [Weight: 0]
[04] --- [Type: 0] [Value: 0] [Weight: 0]
[05] --- [Type: 0] [Value: 0] [Weight: 0]
[06] --- [Type: 0] [Value: 0] [Weight: 0]
[07] --- [Type: 0] [Value: 0] [Weight: 0]
[08] --- [Type: 0] [Value: 0] [Weight: 0]
[09] --- [Type: 0] [Value: 0] [Weight: 0]
[10] --- [Type: 0] [Value: 0] [Weight: 0]
```
</details>
