#include "../headers/header.h"

#define MAX_SIZE 500

bool open_file(std::fstream& file,const char* filename){
    // std::fstream file;
    file.open(filename,  std::ios::in);
    return file.is_open();
}

void close_file(std::fstream& file){
    file.close();
}

char* read_sentence(std::fstream& file){
    char* buff = new char[MAX_SIZE+1];
    char ch;
    int i = 0;
    while (file.get(ch) && ch != '.' && ch != '!' && ch != '?' && !file.eof()){
         if (i >= MAX_SIZE-1)break;
         buff[i++] = ch;
    }
    // file.get(ch);
    buff[i++] = ch;
    buff[i] = '\0';
    return buff;
}

bool find_substring(const char *str, const char *substr){
    int str_len = cstrlen(str);
    int substr_len = cstrlen(substr);

    for (int i = 0; i <= str_len - substr_len-1; i++){
        bool found = true;
        for (int j = 0; j < substr_len; j++){
            if (str[i+j] != substr[j]){
                found = false;
                break;
            }
        }
        if (found){
            return true;
        }
    }
    return false;
}

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