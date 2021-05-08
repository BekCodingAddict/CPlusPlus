#include <iostream>
#include <string>

struct Person{ 
    char name[50];
    int age;
    double salary;
    std::string job;
};
void Display(Person*,int);
void Setdata(Person*,int);

int main (){
    int num;
    std::cout<<"Enter Person number>>"; std::cin>>num;
    Person per[num];Setdata(per,num);
    Display(per,num);
    return 0;
}
void Setdata(Person p[],int num){
    for(int i=1;i<=num;i++){
    std::cout<<"Enter name>>"; std::cin>>p[i].name,50; 
    std::cout<<"Enter age>>";  std::cin>>p[i].age;
    std::cout<<"Enter Job>>"; std::cin>>p[i].job;
    std::cout<<"Enter salary per a month>>"; std::cin>>p[i].salary;
    }
}

void Display(Person p[],int num){
    std::cout<<std::endl;  std::cout<<"Name\t Age\t Job\t Salary"<<std::endl;
    for(int i=1;i<=num;i++){
        std::cout<<p[i].name<<"\t"<<p[i].age<<"\t"<<p[i].job<<"\t"<<p[i].salary<<std::endl;
    }
}