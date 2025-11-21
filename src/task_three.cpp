#include "../headers/header.h"

void print_sentence_with_word(const char word[]){
    char filename[30];
    std::cout << "Enter filename" << std::endl;
    std::cin >> filename;
    char* buff;

    std::fstream file;
    if (!open_file(file, filename)){
        std::cout << "Cannot open file" << std::endl;
        return;
    }else{
        std::cout << "File opened correctly" << std::endl;
    }
    while(!file.eof()){
        buff = read_sentence(file);
        if (find_substring(buff, word)){
            std::cout << buff  << std::endl;
            // std::cout << buff << std::endl;
        }else{
       //     std::cout << buff << " " << "not found" << std::endl;
        }
        delete[] buff;
    }

    close_file(file);
}