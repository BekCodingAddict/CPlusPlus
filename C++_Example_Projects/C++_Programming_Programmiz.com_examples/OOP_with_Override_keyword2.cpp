#include <iostream>

class Technalogy{
    private:
     std::string type;
    public:
      Technalogy():type("Iphone!"){}
    virtual std::string Gettype(){ return type;}
};class Samsung : public Technalogy{
    private:
       std::string type1;
    public:
       Samsung():type1("Samsung"){}
       std::string Gettype(){ return type1;}
};class LG :public Samsung{
    private:
       std::string type2;
    public:
       LG(): type2("LG"){}
       std::string Gettype(){ return type2;}
};
void Display(Technalogy* tech){
    std::cout<<"Result>>"<<tech->Gettype()<<std::endl;
}

int main(){
    Technalogy* t1=new Technalogy();
    Technalogy* t2=new Samsung();
    Technalogy* t3=new LG();
    Display(t1);Display(t2);Display(t3);
    Samsung T1;
    T1.Technalogy::Gettype(); Display(&T1);
    return 0;
}