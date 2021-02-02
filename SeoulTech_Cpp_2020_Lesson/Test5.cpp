#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>

bool between(int lower,int upper,int n); bool between(int lower,int upper,int x){ return x > lower && x < upper;}
template<typename T>
void Cout(std::vector<T> n);
class Print{
    public: 
    void operator() (int n){
        std::cout<<n<<"<<= "<<std::endl;
    }
};

class add{
    private:
      std::vector<int>& v1;
    public: 
      add(std::vector<int>& x): v1(x){}
      void operator() (int n){ v1.push_back(n);}
};
void print(int n){std::cout<<n<<"<<<<<==="<<std::endl;}

class even{
    public:
    int operator()(int n){
        return n*2;
    }
};

class odd{
    public:
       int operator() (int n){
           return n% 2 ? n: n+1;
       }
};

class diff{
    public: 
      int operator()(int x,int y){
          int d=x-y; return d>0 ? d:-d;
      }
};

int main(){
    std::vector<int> vec1={1,2,3,4,5};
    std::for_each(vec1.begin(),vec1.end(),print); std::for_each(vec1.begin(),vec1.end(),Print());
    // for_each(begin,end, 처리하고 싶은 것)
    std::vector<int> vec2={10,20};   std::vector<int> vec3={30,40,50};
    for_each(vec2.begin(),vec2.end(),add(vec3)); for(int x:vec3){ std::cout<<x<<std::endl;}
    //transform(begin,end,저장하고 싶은 것의 begin, functor)
    std::vector<int> vec4={1,2,3,4,5}; std::vector<int> vec5(5);
    transform(vec4.begin(),vec4.end(),vec4.begin(),even()); Cout(vec4);
    transform(vec4.begin(),vec4.end(),vec5.begin(),odd()); Cout(vec5);
    //transform(begin,end,begin(같이 처리하고 싶은 것),result(처리 후 저장),functor)
    std::vector<int> vec6={10,20,30,40,50}; std::vector<int> vec7={15,25,35,45,55   }; std::vector<int>vec8(5);
    transform(vec6.begin(),vec6.end(),vec7.begin(),vec8.begin(),diff()); Cout(vec8);
    // std::minus<int>(),plus,..... 
    transform(vec6.begin(),vec6.end(),vec7.begin(),vec8.begin(),std::plus<int>());Cout(vec8);

   
    std::vector<int> vec9={1,2,3,4,5}; std::vector<bool> vecres(5);
    transform(vec9.begin(),vec9.end(),vecres.begin(),std::bind(between,1,5,std::placeholders::_1));
    Cout(vecres);


    return 0;
}

template<typename T>
void Cout(std::vector<T> n){  std::cout<<"[";
    for(int x:n){ std::cout<<", "<<x; } std::cout<<"]"<<std::endl;
}