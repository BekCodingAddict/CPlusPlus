#include <iostream>

int main (){
    int n,i=1; std::cout<<"Enter number>>"<<std::endl; std::cin>>n;
    while(n>=i){
        if(1!=n/i && 0!=n%2){
            std::cout<<"Tub emas>>"<<n<<std::endl;
            break;
        }else{ std::cout<<"Tub>>"<<n<<std::endl; break; }
        i++;
    }
    return 0;
}