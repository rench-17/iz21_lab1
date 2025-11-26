#include "../headers/header.h"

void subtask_2_1(){
    int rows, cols;
    std::cout << "Enter matrix dimensions" << std::endl;
    std::cin >> rows >> cols;

    double** arr = make_array(rows, cols);
    std::cout << "Enter matrix values" << std::endl;
    enter_data(arr, rows, cols);

    columns_without_zeros(arr, rows, cols);
    delete_array(arr, rows);
}

void subtask_2_2(){
    int rows, cols;
    std::cin >> rows >> cols;

    double **arr = make_array(rows, cols);
    enter_data(arr, rows, cols);

    double** sorted_arr = sort_rows(arr, rows, cols);
    print_array(sorted_arr, rows, cols);

    delete_array(arr, rows);
    delete_array(sorted_arr, rows);
}