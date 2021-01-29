#include <iostream>

class Base{
    public:
       void print(){ std::cout<<"This is Function of Base class!"<<std::endl; }
};class Derived : public Base{
    public:
       void print(){ std::cout<<"This is Function of Derived class!"<<std::endl;
                    Base::print(); }

};

int main(){
    Base base1; base1.print(); Derived derived1;
    derived1.print(); derived1.Base::print();
    Base* base2; Derived derived2; base2=&derived2;
    base2->print();
    return 0;
}