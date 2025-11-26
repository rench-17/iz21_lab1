#include "../headers/header.h"


double* make_array(int n)
{
    double* tmp = new double[n]{};
    return tmp;
}

void delete_array(double* arr)
{
    delete [] arr;
}

double* select_sort_one_dim_array(double* arr, int n)
{
    double* sorted_arr = new double[n];
    for (int i = 0; i < n; i++)sorted_arr[i] = arr[i];

    for (int i = 0; i < n; i++){
        int min = i;
        for ( int j = i + 1; j < n; j++)if (sorted_arr[min]> sorted_arr[j])min = j;
        double tmp = sorted_arr[i];
        sorted_arr[i] = sorted_arr[min];
        sorted_arr[min] = tmp;
    }
    return sorted_arr;
}

void print_array(double *arr, int n){
    for ( int i = 0; i < n; i ++) std::cout << arr[i] << " " ;
    std::cout << '\n';
}

void enter_data(double* arr, int n){
    for (int i = 0; i < n; i++){
        std::cin >> arr[i];
    }
    clear_cin();
}