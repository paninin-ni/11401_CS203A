/*
   ========================================
   hash_fn.c — implement your hash functions
   ========================================

   Description:
    This file contains the hash functions for integer and string keys.

   Development History:
    - 2025/11/11: Initial implementation
    - 2025/11/17: Refactored to use hash_fn.h

   Developer: PIN-CEN JOU <s1131527@mail.yzu.edu.tw>
 */

#include "hash_fn.h"

int myHashInt(int key, int m) {
    if (key < 0) {
        key = -key; 
    }
    return key % m;  // division method example
}

int myHashString(const char* str, int m) {
    unsigned long hash = 0;
    int p = 31; 
    for (int i = 0; str[i] != '\0'; i++) {
        hash = (hash * p + (unsigned char)str[i]) % m;
    }
    return (int)(hash % m); // basic division method
}
