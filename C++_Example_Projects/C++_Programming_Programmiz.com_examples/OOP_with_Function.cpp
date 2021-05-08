#include <iostream>
void Display(float n1,float n2);
class Student{
    private:
      float score;
    public:
    Student(float score_){
        score=score_;
    }
    float Set(float n){
        return score=n;
    }
};

int main (){
    Student s1(4.5);Student s2(2.5);
    Display(s1.Set(4.5),s2.Set(2.5));

    return 0;
}
void Display(float n1,float n2){
    std::cout<<"Average>>"<<(n1+n2)/2<<std::endl;
}