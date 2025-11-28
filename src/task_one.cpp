#include "../headers/header.h"

void subtask_1_1()
{
    int n;
    std::cin >> n;
    clear_cin();

    double* arr = make_array(n);
    enter_data(arr, n);

    
    double summ = 0;
    int counter = 0;
    int coords[n];
    for (int i = 0; i < n; i ++){
        if (arr[i] > 0){
            counter++;
            summ+= arr[i];
            coords[counter] = i;
        }

        if (counter != 0){
            std::cout << "Coordinats of array members above zero:" << '\n';
            for (int i = 0; i < counter; i++){
                std::cout << coords[i] << " ";
            }
            std::cout << '\n';
            std::cout << "Numder of array members above zero: " << counter << '\n';
            std::cout << "Sum of array members above zero: " << summ << '\n';
        } else {
            std::cout << "No array members above zero" << '\n';
        }
    }   
    delete_array(arr);
} 

void subtask_1_2()
{
    int n;
    std::cin >> n;
    clear_cin();

    double* arr = make_array(n);
    enter_data(arr, n);
    
    double mul = 1;
    int min = 0, max = n;
    int mins[n], maxs[n], num_of_mins = 1, num_of_maxs = 1;

    for (int i = 1; i < n; i++)
    {
        if (fabs(arr[min]) > fabs(arr[i]))
        {
            min = i;
        }
    }
    mins[0] = min;

    for (int i = 0; i < n-1; i++)
    {
        if (fabs(arr[max]) < fabs(arr[i]))
        {
            max = i;
        }
    }
    maxs[0] = max;
    
    if (arr[max] == arr[min])
    {
        std::cout << "All array members are equal" << '\n';
        while (!std::cin);
        // return;
    }
    
    for (int i = 0; i < n; i++)
    {
        if (arr[min] == arr[i] && i != min){
            num_of_mins++;
            mins[num_of_mins] = i;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[max] == arr[i] && i != max)
        {
            num_of_maxs++;
            maxs[num_of_maxs] = i;
        }
    }
    
    if(num_of_mins > 1)
    {
        std::cout << "Curient minimum value: " << arr[min] << '\n';
        print_array(arr,n);
        
        std::cout << "Choose min coordinate" << '\n';
        int buff;
        std::cin >> buff;
        clear_cin();

         if (arr[buff] != arr[min])
        {
            system("clear");
            std::cout << "Please enter valid coordinate" << '\n';
            print_array(arr, n);
            do
            {
                std::cin >> buff;
                clear_cin();
            }
            while (arr[buff] != arr[min]);
        }
        else
        {
            min = buff;
        }
        std:: cout << max <<'\n';        
    }

    system("clear");
    
    if(num_of_maxs > 1){
        std::cout << "Curient maximum value: " << arr[max] << '\n';
        print_array(arr,n);
        
        std::cout << "Choose max coordinate" << '\n';
        int buff;
        std::cin >> buff;
        clear_cin();

        if (arr[buff] != arr[max])
        {
            system("clear");
            std::cout << "Please enter valid coordinate" << '\n';
            print_array(arr, n);
            do
            {
                std::cin >> buff;
                clear_cin();
            }
            while (arr[buff] != arr[max]);
            max = buff;
        }
        else
        {
            max = buff;
        }
        std:: cout << max <<'\n';
        // std::cin;
        // clear_cin();

    }
    
    if (min < max)
    {
        for (int i = min+1; i < max; i++){
            mul *= arr[i];
        }
    }
    std::cout << "Multiplication array members between min and max:" << '\n';
    std::cout << mul << '\n';

    delete_array(arr);
}

void subtask_1_3()
{
    int n;
    std::cin >> n;
    clear_cin();

    double* arr = make_array(n);
    enter_data(arr, n);

    double* sorted_arr = select_sort_one_dim_array(arr, n);

    system("clear");
    std::cout << "Original array:" << '\n';
    print_array(arr, n);

    std::cout << "Array sorted via select sort algoritm:" << '\n';
    print_array(sorted_arr, n);

    delete_array(sorted_arr);
    delete_array(arr);
}

