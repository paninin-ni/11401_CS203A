/*
   ========================================
   hash_fn.cpp — implement your hash functions
   ========================================

   Description:
    This file contains the hash functions for integer and string keys.

   Development History:
    - 2025/11/11: Initial implementation
    - 2025/11/17: Refactored to use hash_fn.hpp

   Developer: PIN-CEN JOU <s1131527@mail.yzu.edu.tw>
 */
#include "hash_fn.hpp"

int myHashInt(int key, int m) {
    if (key < 0) {
        key = -key;
    }
    return key % m;  // basic division method
}

int myHashString(const std::string& str, int m) {
    unsigned long hash = 0;
    const unsigned int p = 31;
    for (char c : str) {
        hash = hash * p + static_cast<unsigned char>(c);
    }
    return static_cast<int>(hash % m);  // basic division method
}
