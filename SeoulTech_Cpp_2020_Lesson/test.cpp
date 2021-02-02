#include <iostream>
#include <cmath>
using namespace std;

int main (){ cout<<"HELLO"<<endl; 
int x=20; int y=170;
        int max_div=1; int range=std::min(x,y); 
        cout<<range<<"<<KUCHKINA QIYMAT<<"<<endl;
        for(int i=range;i>=1;i--){ 
          if (x % i==0 && y%i==0){ 
            max_div=i; break;
            }  
      } 
        std::cout<<max_div;  
    return 0;
}