#include <iostream>

class Qoshish{
    private:
      int num1;
      int num2;
    public:
      Qoshish(int n,int n2){
          num1=n;num2=n2;
      }
     virtual void Display(){
          std::cout<<num1<<"+"<<num2<<"="<<num1+num2<<std::endl;
      }
};
class Ayirish:protected Qoshish{
    private:
      int Anum1;
      int Anum2;
    public:
    Ayirish(int n1,int n2):Qoshish(n1,n2){
        Anum1=n1;Anum2=n2;
    }
    void ADisplay(){
          std::cout<<Anum1<<"-"<<Anum2<<"="<<Anum1-Anum2<<std::endl;
    }
    
};

int main(){
    Qoshish M1(20,12);
    M1.Display();
    Ayirish m1(20,10);
    m1.ADisplay();

    return 0;
}