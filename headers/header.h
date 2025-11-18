
#pragma once
#include "iostream"

// Utils
template <typename T>void swap(T& first, T& second);

//One Dimention
double* make_array(int n);
void delete_array(double* arr);
double* select_sort_one_dim_array(double* arr, int n);
void print_one_dim_array(double*arr, int n);

//Two Dimention
double** make_array_two_dim(int rows, int cols);
void delete_array_two_dim(double** arr);


//Char Array
