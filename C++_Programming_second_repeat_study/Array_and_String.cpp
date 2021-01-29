#include <iostream>
#include <string>
int func(const int &var=5);

int main (){
    int numbers[]={21,212,121,212,212};
    int sum,count;int average;
    for(const int &n:numbers){
        std::cout<<n<<"\t";
        ++count; sum+=n;
    }
    average=sum/count;
    std::cout<<"The sum of number:"<<sum<<std::endl;
    std::cout<<"The average of number :"<<average<<std::endl;
    int newvar=func(10); std::cout<<"new var:"<<newvar<<std::endl;
    char str[100]; std::cout<<"Enter the String:"<<std::endl;  std::cin>>str;
    std::cout<<"You entered:"<<str<<std::endl; std::string str1;
    std::cout<<"Enter the string line:"<<std::endl; std::getline(std::cin,str1);
    std::cout<<"You entered line :"<<str1<<std::endl;

    return 0;
}
int func(const int &var){
    //std::cout<<"The var value:"<<var<<std::endl;
    return var;
}