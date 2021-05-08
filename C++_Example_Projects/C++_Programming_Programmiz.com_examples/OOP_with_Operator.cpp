#include <iostream>

class Count{
    private:
       int value;
    public:
       Count():value(5){}
       void operator++(){
           ++value;
       }
       void Display(){
           std::cout<<"Value:"<<value<<std::endl;
       }
       void operator++(int){
           ++value;
       }
       Count operator*(){
           Count temp;
           temp.value*=value;
           return temp;
       }
       Count operator*(int){
           Count temp;
           temp.value*=value;
           return temp;
       }
};

int main(){
    Count count1; ++count1;
    count1.Display();
    count1++; count1.Display();count1++;
    count1.Display();
    Count count2,result;
    result=*count2; result.Display();
    result=*count2; result.Display();
   return 0;
}