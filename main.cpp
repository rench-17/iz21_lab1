//#include "mainMenu.cpp"
#include "headers/header.h"
// #include <iostream>

// #include ""
//  using namespace std;
int main (){
    int n;
    std::cin >> n;
    
    double* aboba = make_array(n);
    for (int i = 0; i < n; i++) std::cin >> aboba[i];

    double* sorted_aboba = select_sort_one_dim_array(aboba, n);
    for (int i = 0; i < n; i++) std::cout << sorted_aboba[i] << " ";
    std::cout << std::endl;

    delete_array(aboba);
    delete_array(sorted_aboba);

    return 0;
}