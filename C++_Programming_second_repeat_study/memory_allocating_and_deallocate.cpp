#include <iostream>
class Data{
    private:
       int age;
    public:
       Data(): age(24){}
       void getage(){ std::cout<<"Age>>"<<age<<std::endl;}
       ~Data();
};

int main(){
    int num;std::cout<<"Enter the Student's number>>"<<std::endl; std::cin>>num;
    float* ptr; ptr=new float[num]; std::cout<<"Float>>"<<*ptr;
    Data*data1=new Data;
    data1->getage();

    delete [] data1;
   delete [] ptr;
    return 0;
    }