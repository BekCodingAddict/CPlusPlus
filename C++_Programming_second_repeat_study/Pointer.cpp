#include <iostream>

int main(){
    int var=5; int* pointvar;
    pointvar=&var;
    std::cout<<"It's just var variable memory addres >>"<<&var<<"\t and  value>>"<<var<<std::endl;
    std::cout<<"It's Pointer variable memory addres>>"<<pointvar<<"\t and value>>"<<*pointvar<<std::endl;
    var=10; std::cout<<"The Value of pointer is changed>>"<<*pointvar<<std::endl;
    float arr[5]={12.3,34.4,45.66,87.5,9.45};
    float* fpoint;
    for(int i=0;i<5;i++){
        std::cout<<"arr ["<<i<<"]"<<" memory address>>"<<&arr[i]<<" and value>>"<<arr[i]<<std::endl;
    } fpoint=arr;
    for(int i=0;i<5;i++){
        std::cout<<"Point ["<<i<<"]"<<"memory address>>"<<*fpoint+i<<"and value>>"<<fpoint[i]<<std::endl;
    }
     return 0;
}