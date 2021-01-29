#include <iostream>

class Base{
    public:
       void Display(){  std::cout<<"This is function that belong to Base class!"<<std::endl; }
}; class Derived_A: public Base{
    public:
        void Display(){  std::cout<<"This is function that belong to Derived_A class!"<<std::endl; }
};class Derived_B : public Base{
    public:
        void Display(){  std::cout<<"This is function that belong to Derived_B class!"<<std::endl; }
};class Derived_C: public Derived_B,Derived_A{
    public:
        
        void Display(){  std::cout<<"This is function that belong to Derived_C class!"<<std::endl; }
};
int main(){
    Derived_C obj1; obj1.Display();
    return 0;
}