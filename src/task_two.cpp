#include "../headers/header.h"

void columns_without_zeros(double** arr, int rows, int cols){
    int val = 0;
    int* numbers = new int[cols];

    for (int i = 0; i < cols; i++){
        bool flag = false;
        for (int j = 0; j < rows; j++){
            if (arr[i][j] == 0.){
                flag = true;
                break;
            }
        }
        if (!flag){
            numbers[val] = i;
            val++;
        }
    }

    std::cout << val << std::endl;
    // print_array(numbers, val);
    for (int i = 0; i < val; i++)std::cout << numbers[i] << " ";
    std::cout << std::endl;

    delete[] numbers;
    return;
}

double** sort_rows(double** arr, int rows, int cols){
    

    double* row_char = make_array(rows);
    for (int i = 0; i < rows; i++){
        for (int j = 1; j < cols; j+=2){
            if (arr[i][j] >= 0.)row_char[i]+= arr[i][j];          
        }
    }

    // for (int i = 0; i < rows; i++){
    //     if ()
    // }
    double** sorted_arr = select_sort_by_row_char_two_dim_array(arr, rows, cols, row_char);
    

    delete_array(row_char);
    return sorted_arr;
}