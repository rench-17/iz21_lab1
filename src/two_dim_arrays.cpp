#include "../headers/header.h"

double** make_array(int rows, int cols){
    double** arr = new double*[rows];
    for (int i = 0; i < rows; i++){
        arr[i] = new double [cols];
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