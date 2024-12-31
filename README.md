# Adventure Game Character List Manager

## Project Overview
This project implements a linked list system for managing characters in a role-playing adventure game. Each node in the list represents a player character, storing their attributes and an inventory of items they carry. The program allows for efficient management of characters and their possessions, enabling future expansions for more complex game mechanics.

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

## Implementation Details
- **Classes and Files**:
  - `CharacterList`: Manages the linked list of characters.
  - `Character`: Represents individual game characters and their attributes.
  - `Item`: Structure to define an item’s properties.
- **Headers and Code**:
  - `CharacterList.h` and `CharacterList.cpp`: Linked list implementation.
  - `Character.h` and `Character.cpp`: Character attributes and inventory functions.
  - `Item.h`: Item data structure.
