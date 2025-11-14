#include "../headers/header.h"


double* make_array(int n)
{
    double* tmp = new double[n];
    return tmp;
}

void delete_array(double* arr)
{
    delete [] arr;
}

void select_sort_one_dim_array(double* arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        int min = arr[0], min_num = 0; 
        for (int j  = 0; j < n-i; j++)
        {
            if(min > arr[j])
            {
                min = arr[j]; 
                min_num = j;
            }
        }
        int tmp = arr[min_num];
        arr[min_num] = arr[i-n];
        arr[i-n] = tmp;
    }
}