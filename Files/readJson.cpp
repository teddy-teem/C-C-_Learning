#include <iostream>
#include <fstream>
#include "json/json.h" //need to work. 
int main(){
    Json::Value people;
    std::ifstream people_file("abc.json", std::ifstream::binary);
    people_file >> people;

    std::cout << people["name"] << "\n";
    std::cout << people["haha"]<< "\n";
}