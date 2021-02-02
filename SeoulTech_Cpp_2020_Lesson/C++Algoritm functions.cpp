#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <ctime>
#include <cstdlib>
#include <random>
#include <chrono>

void Print(){
    std::cout<<"HELLO"<<std::endl;
}
//int gen(int n); int gen(int n){ return rand()%n; }
int main(){
    /*int array[]={10,20,30,40,50};
    std::vector<int> arr={1,2,3,0,0,0,7};
    std::vector<int> arr2={4,5,6};
    // Copy algoritm using example
    copy(arr2.begin(),arr2.end(),arr.begin()+3);
    std::vector<int> arr3(5);  copy(array,array+5,arr3.begin());
     for(int i=0;i<arr.size();i++){  std::cout<<arr[i]<<std::endl;  std::cout<<"ARRAY"<<arr3[i]<<std::endl;}
     std::cout<<arr3.capacity()<<std::endl;   std::vector<int>::iterator it;
     // find(begin, last, member) find algoritm using example
     it=find(arr.begin(),arr.end(),5);
     for(;it!=arr.end();it++){ if(it==arr.begin()+4)  std::cout<<"FOUND >>"<<*it<<std::endl; break;}*/
     // This is sort algoritm using example
     std::vector<int> array2={20,30,40,60,50};
     std::sort(array2.begin(),array2.end());
     for(int x:array2){ std::cout<<"ARRAY SORT >>"<<x<<std::endl;   }
    // count(begin, end, index); Counting algoritm using example
    /* int array4[]={12,12,46,46,77,77,77};
     int mycount=std::count(array4,array4+7,77); std::cout<<"MY COUNT IS>>"<<mycount<<std::endl;
     // all_of(),any_of(),none_of() algoritms using examples
     /*bool Toqjuft(int n){  return n%2;}
     std::vector<int> v1={3,5,7,9}; 
     std::vector<int> v2={2,4,7,8}; std::vector<int> v3={2,4,6,8};*/
     // 데이데를 뒤집어서 처리할 수 있는 reverse function algoritm
     /*std::vector<int> vec1={1,3,2,4,6,5}; for(int x:vec1){ std::cout<<"Vector tartiblanmagan holati>>"<<x<<std::endl;}
     std::sort(vec1.begin(),vec1.end()); for(int x:vec1){ std::cout<<"Vector tartiblangan holati>>"<<x<<std::endl;}
     std::reverse(vec1.begin(),vec1.end()); for(int x:vec1){ std::cout<<"Reversed situation>>"<<x<<std::endl;}
     //Rotate(frist, middle,last) 
     std::vector<int> vec2={4,5,6,3,2,1}; std::vector<int>::iterator it1=std::find(vec2.begin(),vec2.end(),1); 
     std::rotate(vec2.begin(),it,vec2.end()); for(int x:vec2){ std::cout<<"Used Rotate algoritm function>>"<<x<<std::endl;}*/
     //random_shuffle(frist,last ,gen)
     /*std::vector<int> vec3={1,2,3,4,5};  srand(unsigned (time(0))); random_shuffle(vec3.begin(),vec3.end());
     for(int y:vec3){ std::cout<<"RANDOM>>"<<y<<std::endl;}

     auto now=std::chrono::system_clock::now(); unsigned seed=now.time_since_epoch().count();
     auto g=std::default_random_engine(seed); std::vector<int> vec4={1,2,3,4,5};
     shuffle(vec4.begin(),vec4.end(),g); for(int x:vec4){ std::cout<<"SHUFFLE ALGORITM>>"<<x<<std::endl;}*/
     

     return 0;
}