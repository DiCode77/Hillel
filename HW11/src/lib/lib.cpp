#include "lib.hpp"


void updateRand(){
    srand((unsigned)clock());
}

std::string getRandPassword(int size){
    std::string s = R"(abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()-_=+[]{}|;:'",.<>?/`)";
    std::string str;
    
    updateRand();
    
    for (int i = 0; i < size; i++){
        str += s.at(rand() % s.length());
    }
    
    return str;
}
