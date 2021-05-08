#include <iostream>
struct  Person{
    std::string name;
    //char name[50];
    int age;
    double salary;
    std::string majority;
};


int main (){
    int num; std::string name;
    std::cout<<"Enter the People number:"<<std::endl; std::cin>>num;
    Person p[num];
    for(int i=1;i<=num;i++){
        std::cout<<"Enter "<<i<<"\tpeople name:"<<std::endl; std::cin>>p[i].name;
        std::cout<<"Enter"<<p[i].name<<"'s age :"<<std::endl; std::cin>>p[i].age;
        std::cout<<"Enter"<<p[i].name<<"'s salary that he earn per a month"<<std::endl; std::cin>>p[i].salary;
        std::cout<<"Enter"<<p[i].name<<"'s Jop:"<<std::endl; std::cin>>p[i].majority;
    }
        std::cout<<"Name\t Age\t Job\t Salary per a month"<<std::endl; int r;
    for( r=1;r<=num;r++){
        std::cout<<p[r].name<<"\t"<<p[r].age<<"\t"<<p[r].majority<<"\t"<<p[r].salary<<std::endl;
    }
    return 0;
}