#include <iostream>

class Base{
    private:
       int priv=1;
       
       int getPrivate(){  return priv; }
    protected:
       int prot=2;
       //int getPrivate(){  return priv; }
    public:
       int pub=3;
       
       //int getPrivate(){  return priv; }
       
       
       
};
class PublicDerived : private Base{
    public:
       int getProtected(){  return prot;}
       int getPublic(){  return pub; }
};

int main(){
    PublicDerived object1;
    //std::cout<<"Private>>"<<object1.getPrivate()<<std::endl;
    std::cout<<"Protected>>"<<object1.getProtected()<<std::endl;
    std::cout<<"Public>>"<<object1.getPublic()<<std::endl;
    return 0;
}