
#pragma once
#include "iostream"

// Utils
template <typename T>void swap(T& first, T& second);

//One Dimention
double* make_array(int n);
void delete_array(double* arr);
double* select_sort_one_dim_array(double* arr, int n);
void print_array(double*arr, int n);
void enter_data(double* arr, int n);

//Two Dimention
double** make_array(int rows, int cols);
void delete_array(double** arr, int rows);
void print_array(double** arr, int rows, int cols);
void enter_data(double** arr, int rows, int cols);
double ** select_sort_by_row_char_two_dim_array(double** arr, int rows, int cols, double* row_char);
//Char Array



//Task One


//Task Two
void columns_without_zeros(double** arr, int rows, int cols);
double** sort_rows(double** arr, int rows, int cols);