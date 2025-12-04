#include "../headers/header.h"

void subtask_2_1(){
    int rows, cols;
    std::cout << "Enter matrix dimensions" << '\n';
    std::cin >> rows >> cols;
    clear_cin();

    double** arr = make_array(rows, cols);
    std::cout << "Enter matrix values" << '\n';
    enter_data(arr, rows, cols);

    columns_without_zeros(arr, rows, cols);
    delete_array(arr, rows);
}

void subtask_2_2(){
    int rows, cols;
    std::cout << "Enter matrix dimensions" << '\n';
    std::cin >> rows >> cols;
    clear_cin();

    double** arr = make_array(rows, cols);
    std::cout << "Enter matrix values" << '\n';
    enter_data(arr, rows, cols);

    double** sorted_arr = sort_rows(arr, rows, cols);
    print_array(sorted_arr, rows, cols);

    delete_array(arr, rows);
    delete_array(sorted_arr, rows);
}