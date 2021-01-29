#include <iostream>
class Technalogy{
    private:
       std::string model;
       std::string character;
       double price;
    public:
       Technalogy(std::string model_,std::string character_, double price_):model(model_),character(character_),price(price_){}
       void Display(){
           std::cout<<"Technalogy model is>>"<<model<<std::endl;
           std::cout<<"Technalogy character>>"<<character<<std::endl;
           std::cout<<"Technalogy price is >>"<<price<<"$"<<std::endl;
       }
      /// ~Technalogy();
};class Samsung:protected Technalogy{
    private:
       std::string fampro;
    public:
       Samsung(std::string m,std::string ch,double p):Technalogy(m,ch,p){}
   // ~Samsung();
};

int main(){
    Technalogy t1("Samsung","Very_comfortable",1000);
    t1.Display(); Samsung Note20("Samsung","Exist note pen",1200);
    return 0;
}