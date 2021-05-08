#include <iostream>


int main (){
    wchar_t Test='A'; /*wchar_t = 2 bayt */std::cout<<"wchar_t"<<Test<<std::endl; 
    unsigned int Test2=1; std::cout<<"Unsigned int :"<<Test2<<std::endl;

    //This is  implicit convertion data types
    int num_int =9,num_int2; double double_num,double_num2=9.234; double_num=num_int;num_int2=double_num2;
    std::cout<<double_num<<std::endl<<num_int2<<std::endl;
    //This is explicit convertion data type
    //C style type casting 
    int int_num=26,int_num2; double double_num3, double_num4=8.2323;
    double_num3=(double) int_num; int_num2=(int) double_num4;
    std::cout<<double_num3<<std::endl<<int_num2<<std::endl;
    //Function style casting 
    int int_num3=28,int_num4; double double_num5,double_num6=5.678;
    double_num5=double(int_num3); int_num4=int(double_num6);
    std::cout<<"double is :"<<double_num5<<std::endl<<"int is:"<<int_num4<<std::endl;

    //Betwise AND
    int a=12,b=25;  std::cout<<"A&B="<<(a&b)<<std::endl;
    //Betwise OR operator
    std::cout<<"A|B="<<(a|b)<<std::endl;
    //Betwise XOR aperator
    std::cout<<"A|B="<<(a^b)<<std::endl;

    int num=36,num2=-150;
    std::cout<<"~"<<num<<"="<<(~num)<<std::endl<<"~"<<num2<<"="<<(~num2)<<std::endl;
    
    //Shift operators
    int num1=256,i; std::cout<<"Left Shift Operator:"<<std::endl;
    for(i=1;i<=5;i++){
        std::cout<<"256>>"<<i<<"="<<(256>>i)<<std::endl;
    }
    std::cout<<"Shift Left Operator:"<<std::endl;
    for(i=1;i<=5;i++){
         std::cout<<"256>>"<<i<<"="<<(256>>i)<<std::endl;
    }
    return 0;
}