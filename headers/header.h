
#pragma once
#include "iostream"
#include "fstream"
#include "cstring"

// Utils
template <typename T>void swap(T& first, T& second);
unsigned char cstr_len(const char* str);
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
// std::fstream init
bool open_file(std::fstream& file, const char* filename);
void close_file(std::fstream& file);
char* read_sentence(std::fstream& file);
bool find_substring(const char str[], const char substr[]);



//Task One


//Task Two
void columns_without_zeros(double** arr, int rows, int cols);
double** sort_rows(double** arr, int rows, int cols);

//Task Three

void print_sentence_with_word(const char word[]);