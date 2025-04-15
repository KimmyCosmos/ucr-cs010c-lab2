# CS010C - Lab 2: Doubly-Linked List

## Files Included
- `main.cpp` – Contains the main program that tests the list
- `IntList.h` – Header file for the `IntNode` struct and `IntList` class
- `IntList.cpp` – Implementation of the `IntList` class

## Features
- Uses a doubly-linked list with dummy head and tail nodes
- O(1) operations for `push_front`, `pop_front`, `push_back`, and `pop_back`
- Forward and reverse printing of list elements
- Clean memory deallocation in destructor
- Const correctness where appropriate

## To Compile
```bash
g++ main.cpp IntList.cpp -std=c++14 -Wall -o a.out
