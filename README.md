# CustomIntVector
Implementing a Custom Vector Class
📖## Problem Description

The purpose of this assignment was to create a custom container class, intVector, that mimics the behavior of the C++ Standard Library’s std::vector<int>. The class implements dynamic memory management, element access, and resizing through push operations.

This assignment emphasizes:

Constructors, destructors, and memory management

Dynamic arrays using raw pointers

Class encapsulation and method design

## Files

main.cpp – Contains the intVector class definition, implementation, and driver code

## Implemented Functions

### 1.Constructors

intVector() – Default constructor, initializes an empty vector

intVector(int val, int n) – Overloaded constructor, initializes a vector with n copies of val

### 2.Destructor

~intVector() – Releases dynamically allocated memory

### 3.Mutators

void push_back(int) – Adds a new element to the end of the vector, resizing the array

### 3.Accessors

int& at(int& pos) const – Returns a reference to the element at index pos

int size() const – Returns the number of elements currently in the vector

Example Tests

Demonstrated in main.cpp:

Creating an empty vector

Using push_back() to insert new elements

Checking size before and after insertions

Accessing elements using at()


💡 Key Learnings

Reinforced understanding of dynamic memory allocation with new and delete[].

Practiced writing constructors and destructors for proper resource management.

Gained insight into how standard containers like std::vector work under the hood.
