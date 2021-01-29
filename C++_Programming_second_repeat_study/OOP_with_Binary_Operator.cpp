#include <iostream>

class Complex{
    private:
       int num1;
       int num2;
    public:
       Complex():num1(0),num2(0){}
       void imput(){
           std::cout<<"Enter first number>>"<<std::endl; std::cin>>num1;
           std::cout<<"enter secontd number>>"<<std::endl; std::cin>>num2;
       }
       Complex operator+(const Complex& obj){
           Complex temp;
           temp.num1=num1+obj.num1;
           temp.num2=num2+obj.num2;
           return temp;
       }
       void output(){
           if(num1<0)
               std::cout<<"Output Complex number>>"<<num1<<"\t"<<num2<<std::endl;
            else
               std::cout<<"Output complex number"<<num1<<"\t"<<num2<<std::endl;
       }
};

int main(){
    Complex complex1,complex2,result;
    complex1.imput(); complex2.imput();
    result=complex1+complex2;
    result.output();   
    return 0;
}