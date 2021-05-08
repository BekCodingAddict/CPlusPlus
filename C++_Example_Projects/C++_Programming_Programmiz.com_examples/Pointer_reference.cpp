#include <iostream>

void swap1(int*,int*);
void swap2(int &n1,int &n2){
    int temp;
    temp=n1;
    n1=n2;
    n2=temp;
}
void Func2(int &n){ ++n; std::cout<<"Func2>>"<<n+10<<std::endl;}
void Func(int* n){ ++n;std::cout<<"Func>>"<<*n+10<<std::endl; }

int main(){
    int num1=5,num2=10;
    std::cout<<"Before to call function num1="<<num1<<"\t num2="<<num2<<std::endl;
    swap1(&num1,&num2);
    std::cout<<"After to call function num1="<<num1<<"\t num2="<<num2<<std::endl;
    swap2(num1,num2);
    std::cout<<"Befor to call  reference function num1="<<num1<<"\t num2="<<num2<<std::endl;
    int n=10;
    Func(&n);
    Func2(n);
    return 0;
}


void swap1(int* n1,int* n2){
    int* temp;
    temp=n1; 
    n1=n2;
    n2=temp;
}