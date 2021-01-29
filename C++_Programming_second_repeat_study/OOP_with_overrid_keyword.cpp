#include <iostream>

class Qoshish{
    private:
       int num1;
       int num2;
    public:
       Qoshish():num1(0),num2(0){}
       virtual int Func(int n1,int n2){ num1=n1,num2=n2;  return num1+num2; }
};class Ayirish : public Qoshish{
    public:
        Ayirish():Qoshish(){}
        int Func(int num1,int num2)override{  return num1-num2; }
};class Bolish : public Ayirish{
    public:
        Bolish():Ayirish(){}
        int Func(int num1,int num2)override{  return num1/num2; }
};

int main(){
    Qoshish Q1;
     int result=Q1.Func(20,10); std::cout<<" Qoshish class Result>>"<<result<<std::endl;
     //Ayirish A1; result=A1.Func(50,20); std::cout<<" Ayirish class Result>>"<<result<<std::endl;
     Ayirish A1;
     Qoshish* Q2=&A1; result=Q2->Func(50,20); std::cout<<" Ayirish class Result>>"<<result<<std::endl;
     Bolish b1; result=b1.Func(25,5); std::cout<<"BOlish result>>"<<result<<std::endl;

    return 0;
}