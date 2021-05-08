#include <iostream>
class ClassA;
class ClassB{
    private:
      int num;
      int num2;
      friend int add(ClassA objA,ClassB objB);
    public:
       ClassB(): num(30),num2(20){}
};class ClassA{
    private:
       int num;
       int num2;
       friend int add(ClassA objA, ClassB objB);
    public:
       ClassA():num(20),num2(50){}
};int add(ClassA objA,ClassB objB){ return (objA.num+objB.num);}
class B; 
class A{
    private:
      int num1;
    public:
      A():num1(20){}
      friend class B;
};class B{
    private:
      int num1;
    public:
      B():num1(50){}
      int Add(A a1,B b1){
          return (a1.num1+b1.num1);
      }
};

int main(){
    ClassA objectA;ClassB objectB;
    std::cout<<"Sum="<<add(objectA,objectB)<<std::endl;
    A a1; B b1; std::cout<<"Class A + Class B="<<b1.Add(a1,b1)<<std::endl;
    return 0;
}