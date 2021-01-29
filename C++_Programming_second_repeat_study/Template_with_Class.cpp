#include <iostream>
template <typename T>
class Canculator{
    private:
       T num1;
       T num2;
    public:
       Canculator(T n1,T n2){ num1=n1;num2=n2;}
       void DisplayResult(){
           std::cout<<"Number are "<<num1<<"  and  "<<num2<<std::endl;
           std::cout<<"Addition>>"<<add()<<std::endl;
           std::cout<<"Subtraction>>"<<subtracttion()<<std::endl;
           std::cout<<"Multiply>>"<<multiply()<<std::endl;
           std::cout<<"Devide>>"<<divide()<<std::endl;
       }
       T add(){ return num1+num2;}
       T subtracttion(){ return num1-num2;}
       T multiply(){ return num1*num2;}
       T divide(){ return num1/num2;}
};
int main(){ 
    Canculator<int> intnum(10,5);  Canculator<float> floatnum(5.5,2.5); Canculator<char> charnum('A','B');
    intnum.DisplayResult(); floatnum.DisplayResult(); charnum.DisplayResult();
    return 0;
}