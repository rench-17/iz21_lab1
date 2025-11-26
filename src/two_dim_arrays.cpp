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
        std::cout << '\n';
    }
}

void enter_data(double** arr, int rows, int cols){
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            std::cin >> arr[i][j];
        }
    }
    clear_cin();
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

    std::cout << val << '\n';
    // print_array(numbers, val);
    for (int i = 0; i < val; i++)std::cout << numbers[i] << " ";
    std::cout << '\n';

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