#include "../headers/header.h"

double** make_array(int rows, int cols){
    double** arr = new double*[rows];
    for (int i = 0; i < rows; i++){
        arr[i] = new double [cols]{};
    }
    return arr;
}

void delete_array(double** arr, int rows){
    for ( int i = 0; i < rows; i++){
        delete[] arr[i];
    }
    delete[] arr;
}

void print_array(double** arr, int rows, int cols){
    for(int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            std::cout<<arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void enter_data(double** arr, int rows, int cols){
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            std::cin >> arr[i][j];
        }
    }
}

double ** select_sort_by_row_char_two_dim_array(double** arr, int rows, int cols, double* row_char){
    double** sorted_arr = make_array(rows, cols);
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++)sorted_arr[i][j] = arr[i][j];
    }

    for (int i = 0; i < rows; i++){
        int min = i;
        for ( int j = i + 1; j < rows; j++)if (row_char[min]> row_char[j])min = j;
        // swap(sorted_arr[i], sorted_arr[min]);
        double* tmp = sorted_arr[i];
        sorted_arr[i] = sorted_arr[min];
        sorted_arr[min] = tmp;
    }
    return sorted_arr;
    
}
