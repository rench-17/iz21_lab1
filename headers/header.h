
#pragma once
#include "iostream"

// Utils
template <typename T>void swap(T& first, T& second);

//One Dimention
double* make_array(int n);
void delete_array(double* arr);
double* select_sort_one_dim_array(double* arr, int n);
void print_array(double*arr, int n);

//Two Dimention
double** make_array(int rows, int cols);
void delete_array(double** arr, int rows);
void print_array(double** arr, int rows, int cols);

//Char Array
