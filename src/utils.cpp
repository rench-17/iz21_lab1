#include "../headers/header.h"

template <typename T>void swap(T &first, T &second){
    T tmp = first;
    first = second;
    second = tmp;
}

unsigned char cstrlen(const char *str){
    unsigned char len = 0;
    while(str[len] != '\0'){
        len++;
    }
    return len;
}