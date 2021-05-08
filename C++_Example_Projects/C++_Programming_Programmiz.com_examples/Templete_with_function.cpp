#include <iostream>

template <typename T>
T Larger(T num1,T num2){
    return (num1>num2)? num1:num2;
}
int main(){
    int num1,num2,result;
   std::cout<<"Enter two integer number>>"<<std::endl; std::cin>>num1;std::cin>>num2;
   result=Larger(num1,num2) ;std::cout<<"Larger is "<<result<<std::endl;
   float nu1,nu2,resul;
   std::cout<<"Enter two Floating number>>"<<std::endl; std::cin>>nu1;std::cin>>nu2;
   resul=Larger(nu1,nu2) ;std::cout<<"Larger is "<<resul<<std::endl;
   char n1,n2,resu;
   std::cout<<"Enter two Character ASCI number>>"<<std::endl; std::cin>>n1;std::cin>>n2;
   resu=Larger(n1,n2) ;std::cout<<"Larger is "<<resu<<std::endl;
return 0;
}