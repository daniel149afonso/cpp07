# CPP07 — 42

CPP07 project from the 42 curriculum: templates, iterators and generic programming in C++.

---

## Objectives

- Understand and use **function and class templates**
- Work with **arrays and iteration**
- Write **generic and reusable code**
- Follow best practices (const-correctness, clean compilation, no leaks)

---

## Project Structure

This module contains 3 exercises:

### ex00 — `whatever`

Implement the following **function templates**:

- `swap(T& a, T& b)`
- `min(const T& a, const T& b)`
- `max(const T& a, const T& b)`

Requirements:
- Must work with standard types (`int`, `float`, `std::string`, etc.)
- Must not use STL swap
- Should behave exactly like the subject expects

---

### ex01 — `iter`

Create a function template:

```cpp
template <typename T>
void iter(T* array, size_t length, void (*f)(T&));
```

### ex02 — Array

Create a class template Array<T> that behaves like a simplified dynamic array.

Required features:

Default constructor (empty array)

Constructor with size parameter

Copy constructor

Copy assignment operator

Destructor

operator[] with bounds checking (throw exception if out of range)

size() member function