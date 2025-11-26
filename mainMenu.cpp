#include "headers/header.h"
#include <cstdlib>

void menu(){
    int mode = 0;
    int tmp;
    
    while (true){
        
        system("clear");
        std::cout << "Hello there" << '\n';
        std::cout << "Choose task:" << '\n';
        std::cout << "1 One dimension arrays" << '\n';
        std::cout << "2 Two dimension arrays" << '\n';
        std::cout << "3 Text from file" << '\n';
        std::cout << "0 Exit" << '\n';
        std::cin >> tmp;
        clear_cin();

        switch(tmp){
            case 0:
                return;
                break;
            case 1:
                system("clear");
                std::cout << "Curient task 1, One dimension arrays" << '\n';
                std::cout << "Please choose subtask:" << '\n';
                std::cout << "1 - Columns withouts zeros" << '\n';
                std::cout << "2 - Sort rows by their chars" << '\n';
                std::cout << "0 - return to previous menu" << '\n'; 
                std::cin >> tmp;
                clear_cin();
                
                switch (tmp){
                    case 0:
                        // return;
                    break;

                    case 1:

                        system("clear");
                        std::cout << "Enter 0 to go back" << '\n';
                        std::cin >> tmp;
                        clear_cin();

                    break;

                    case 2:

                        system("clear");
                        std::cout << "Enter 0 to go back" << '\n';
                        std::cin >> tmp;
                        clear_cin();
                }
                break;
            case 2:
                system("clear");
                std::cout << "Curient task 2, Two dimension arrays" << '\n';
                std::cout << "Please choose subtask:" << '\n';
                std::cout << "1 - Columns withouts zeros" << '\n';
                std::cout << "2 - Sort rows by their chars" << '\n';
                std::cout << "0 - return to previous menu" << '\n'; 
                std::cin >> tmp;
                clear_cin();

                switch (tmp) {
                    case 1:
                        system("clear");
                        subtask_2_1();

                        std::cout <<  "Enter 0 to return" << '\n';
                        std::cin >> tmp;
                        clear_cin();
                    break;

                    case 2:
                        system("clear");
                        subtask_2_2();

                        std::cout << "Enter 0 to return" << '\n';
                        std::cin >> tmp;
                        clear_cin();
                    break;

                    case 0:
                    break;
                }                
            break;
                
            case 3:            
                system("clear");
                std::cout << "Curient task 2, find sentences with target word" << '\n';
                subtask3();
            
                std::cout << "Enter 0 to return" << '\n';
                std::cin >> tmp;
                clear_cin();
            break;
        }     

    }
        // std::cout << mode << '\n';
}
