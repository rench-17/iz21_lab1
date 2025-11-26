#include "headers/header.h"
#include <cstdlib>

void menu(){
    system("clear");
    int mode = 0;
    int tmp;
    std::cout << "Hello there" << std::endl;
    std::cout << "Choose task:" << std::endl;
    std::cout << "1 One dimension arrays" << std::endl;
    std::cout << "2 Two dimension arrays" << std::endl;
    std::cout << "3 Text from file" << std::endl;
    std::cout << "0 Exit" << std::endl;
    std::cin >> tmp;

    while (true){
        switch (mode){
            case 0:
                switch(tmp){
                    case 0:
                        return;
                        break;
                    case 1:
                        mode = 11;
                        break;
                    case 2:
                        mode=12;
                        break;
                    case 3:
                        mode = 13;
                        break;
                }
                break;
            
            case 11:
                system("clear");
                std::cout << "Curient task - one demension" << std::endl;
                std::cout << "Choose subtask:" << std::endl;
                std::cout << "1 One dimension arrays" << std::endl;
                std::cout << "2 Two dimension arrays" << std::endl;
                std::cout << "0 Back" << std::endl;    
                std::cin >> tmp;   

                switch (tmp) {
                    case 1:

                        break;

                    case 2:

                        break;

                    case 0:
                        mode = 0;
                        system("clear");
                        std::cout << "Choose task:" << std::endl;
                        std::cout << "1 One dimension arrays" << std::endl;
                        std::cout << "2 Two dimension arrays" << std::endl;
                        std::cout << "3 Text from file" << std::endl;
                        std::cout << "0 Exit" << std::endl;
                        std::cin >> tmp;
                        break;
                }
                break;
// Task two
            case 12:
                system("clear");
                std::cout << "Curient task - two demension" << std::endl;
                std::cout << "Choose subtask:" << std::endl;
                std::cout << "1 One" << std::endl;
                std::cout << "2 Two" << std::endl;
                std::cout << "0 Back" << std::endl;   
                std::cin >> tmp;

                switch (tmp) {
                    case 1:
                        subtask_2_1();
                        break;

                    case 2:
                        subtask_2_2();
                        std::cout << "Enter 0 to return" << std::endl;
                        std::cin >> tmp;
                        break;

                    case 0:
                        mode = 0;
                        system("clear");
                        std::cout << "Choose task:" << std::endl;
                        std::cout << "1 One dimension arrays" << std::endl;
                        std::cout << "2 Two dimension arrays" << std::endl;
                        std::cout << "3 Text from file" << std::endl;
                        std::cout << "0 Exit" << std::endl;
                        std::cin >> tmp;
                        break;
                }                
                break;
// 
            case 13:
                system("clear");
                std::cout << "Curient task - three, found sentence with the word" << std::endl;
                std::cout << "Enter word to find" << std::endl;
                subtask3();
                mode = 0;
                tmp = 1000;
            break;
        }
    }
}