#include <iostream>

int main (){
    //Ternary Operator
    //example 1
    int grade;
    std::cout<<"Input your a Exam result:"<<std::endl; std::cin>>grade;
    std::string result=(grade>80)?"Your passed the exam!":"You failed the exam!";
    std::cout<<result<<std::endl;
    //Example 2
    int gradues; std::cout<<"Input the weather celsiuse:"<<std::endl; std::cin>>gradues;
    std::string wresult=(gradues==0)?"The weather 0 degree!":((gradues>0)? "The weater degree is positive!":"The weather degree is negative!");     
    std::cout<<wresult<<std::endl;
    //Example 3
    //Check whether number is even or odd
    int num; std::cout<<"Enter an integer:"<<std::endl; std::cin>>num;
    (num%2==0)?std::cout<<"The number is even!"<<std::endl:std::cout<<"The number is odd!"<<std::endl;  
    //Examples 4
    //Check vovle or consonant manually
    int Upper,Lower; char c; std::cout<<"Enter an alphabet:"<<std::endl; std::cin>>c;
    Upper=(c=='A'||c=='B'||c=='C');Lower=(c=='a'||c=='b'||c=='c');
    if(Upper||Lower) std::cout<<c<<"\tis a vowel!"<<std::endl;
    else std::cout<<c<<"\t is a consonant!"<<std::endl;
    //Using Continue statment
    int sum1=0, number=0;
    while (number>=0){
        sum1+=number;
        std::cout<<"Enter the Number:"<<std::endl; std::cin>>number;
        if (number>50){
            std::cout<<"The Number greater than 50 won't be conculated!"<<std::endl;
           break; //continue;
        }
    }

    //Using Switch Statment
    int snum,snum2;char oper;
    std::cout<<"Input frist numer that you want canculate:"<<std::endl; std::cin>>snum;
    std::cout<<"Input  the any Math Operator: "<<std::endl; std::cin>>oper;
    std::cout<<"Input secontd numer that you want canculate:"<<std::endl; std::cin>>snum2;
    switch (oper) {
    case '+': std::cout<<snum<<"+"<<snum2<<"="<<snum+snum2<<std::endl; break;
    case '-': std::cout<<snum<<"-"<<snum2<<"="<<snum-snum2<<std::endl; break;
    case '/': std::cout<<snum<<"/"<<snum2<<"="<<snum/snum2<<std::endl; break;
    case '*': std::cout<<snum<<"*"<<snum2<<"="<<snum*snum2<<std::endl; break;
    default: std::cout<<"The Operator out of the range"<<std::endl; break;
    }
    return 0;
}