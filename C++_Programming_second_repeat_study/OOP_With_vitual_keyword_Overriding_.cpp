#include <iostream>

class Base{
    public:
    virtual void print(){ std::cout<<"This is function of Base class!"<<std::endl; }
};class Derived_A : public Base{
    public:
      void print(){ std::cout<<"This is function of Derived_A class!"<<std::endl;}
};class Derived_B: public Base{
    public:
      void print(){ std::cout<<"This is function of Derived_B class!"<<std::endl;}
};

int main(){
    Derived_A obj1; Derived_B obj3; Base* Base1=&obj3;
    Base1->print();
    return 0;
}