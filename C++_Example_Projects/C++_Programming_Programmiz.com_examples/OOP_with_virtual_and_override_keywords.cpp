#include <iostream>

class Base{
    public:
    virtual void Display(){ std::cout<<"This is function of Base class!"<<std::endl;}
};class Derived_A : public Base{
    public:
     void Display() override { std::cout<<"This is function of Derived_A class!"<<std::endl;}
};class Derived_B : public Base{
    public: 
      void Display( )override { std::cout<<"This is function of Derived_B class!"<<std::endl;}
};class Derived_C : public Derived_A,Derived_B{
    public:
     //void Display(){ std::cout<<"This is function of Derived_C class!"<<std::endl;}
};
int main(){
    Derived_B objc; //objc.Display(); Error thid becaus of ambigueos
    Base* obj1=&objc; obj1->Display();

    return 0;
}