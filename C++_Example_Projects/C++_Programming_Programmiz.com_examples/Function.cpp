#include <iostream>

///Overloading orqali 4 xil amaldagi function tuzish
//Function example
void Canculate(int num,int num2,char oper);
//defalut argument 
void Display(char oper='*',int num=3);
void test(int var1=5);
int factorial(int );
int& test1(); int n;

int main(){
    // int snum,snum2;char oper;
    // Canculate(snum2,snum2,oper);
    Display();
    Display('%');
    Display('$',8);
    test(100);test(200);
    int result=factorial(5); std::cout<<"factorial result:"<<result<<std::endl;
    test1()=5; std::cout<<"Test1:"<<n<<std::endl;
    return 0;
}
int& test1(){
    return n;
}

int factorial(int n){
    if(n>1) return n*factorial(n-1);
    else 
      return 1;
}

void test(int var1){ static int var=0; ++var;
std::cout<<"Local Variable:"<<var1<<std::endl;
std::cout<<"Static variable:"<<var<<std::endl;// as You see static variable life time exist end of programm
}

// Defalut argument declaration bolimda qiymatlar tushib qoldirladi!!
void Display(char oper,int num){ 
    std::cout<<"Display function..."<<std::endl;
    for(int i=1;i<=num;++i){
        std::cout<<oper;
    }
}

void Canculate(int num,int num2,char oper){
    //Using Switch Statment
    
    std::cout<<"Input frist numer that you want canculate:"<<std::endl; std::cin>>num;
    std::cout<<"Input  the any Math Operator: "<<std::endl; std::cin>>oper;
    std::cout<<"Input secontd numer that you want canculate:"<<std::endl; std::cin>>num2;
    switch (oper) {
    case '+': std::cout<<num<<"+"<<num2<<"="<<num+num2<<std::endl; break;
    case '-': std::cout<<num<<"-"<<num2<<"="<<num-num2<<std::endl; break;
    case '/': std::cout<<num<<"/"<<num2<<"="<<num/num2<<std::endl; break;
    case '*': std::cout<<num<<"*"<<num2<<"="<<num*num2<<std::endl; break;
    default: std::cout<<"The Operator out of the range"<<std::endl; break;
    }
}
