#include <iostream>
#include <string>

void display(char*);
void Display(std::string);

int main (){
    std::string str; char str2[100];
    std::cout<<"Enter the char array:"<<std::endl; std::cin.get(str2,100);
    std::cout<<"Enter the string :"<<std::endl; std::getline(std::cin,str);
    display(str2); Display(str);

    return 0;
}

void display(char s[]){ std::cout<<"You entered char array is:"<<s<<std::endl;  }
void Display(std::string s){  std::cout<<"You entered the string :"<<s<<std::endl;}