#ifndef  POINTER_OBJECTS_AND_VIRTUAL_FUNCTION
#define POINTER_OBJECTS_AND_VIRTUAL_FUNCTION
#include <iostream>
class Demo {
	std::string str;
	float salary;
public:
	Demo() {}
	Demo(float sal) { salary = sal; }
	Demo(std::string s):str(s) { std::cout << "Hi from Demo!\n" 
		<<str<<"\n"<<"Currreny object addres>>"<<this<<std::endl; }
	void Show_() { std::cout << str; }
	std::string Get_str() { return this->str; }
	Demo Compare(Demo& d) {
		if (this->salary > d.salary)
			return *this;
		else
			return d;
	}
	float Get_Salary() { return salary; }
};

//using virtual function with class
class Frist {
public:
	void show() { std::cout << "Hello from frist class !" << std::endl; }
};

class Second :public Frist{
public:
	virtual void show() { std::cout << "Hello from Second class !" << std::endl; }
};
class Interface{
public:
	void virtual show() = 0;
};
class Thrid :public Second,public Interface {
public:
	void show() { std::cout << "Hello from thrid class !" << std::endl; }
};

//template <typename T>
//class Stack {
//    T* array;
//    int Size;
//    int top;
//public:
//    Stack(int Stacksize = 10) {
//        array[Stacksize];
//        top = -1;
//    }
//    bool isEmpty()const {
//        if (array[top] == -1)
//            return true;
//        else
//            return false;
//    }
//    bool isFull()const {
//        if (array[top] == Size - 1)
//            return true;
//        else
//            return false;
//    }
//    T& Top()const { return array[top]; }
//    void Push(const T& item) {
//        if (isFull())
//            std::cout << "Stack is full!" << std::endl;
//        else {
//            ++top;
//            array[top] = item;
//            Size++;
//            std::cout << item << " Element is added in Stack!" << std::endl;
//        }
//    }
//    void Pop() {
//        if (isEmpty())
//            std::cout << "Stack is empty!" << std::endl;
//        else {
//            array[--top];
//            --Size;
//            std::cout << "One element has Deleted at the pop!" << std::endl;
//        }
//    }
//    void Display{
//            for (int i = 0; i < Size; i++)
//                std::cout << "Stack[" << i << "]=" << array[i] << std::endl;
//    }
//        ~Stack() {
//        delete[] array;
//        std::cout << "Stack is destroyed!" << std::endl;
//    }
//};

class A {
	int x, y;
public :
	A(int a, int b) :x(a), y(b) { std::cout << "Data inserted!" << std::endl; }
	//void virtual Print() = 0;
};
class B :public A {
	int z;
public :
	B(int a,int b,int c):A(a,b),z(c){ std::cout << "Data inserted!" << std::endl; }
	void Print() { std::cout << "Hello from B" << std::endl; }
};
class C : public A {
public:
	void Print() { std::cout << "Hello from C" << std::endl; }
};

// learning  virtual destructor 
class frist {
public:
	frist() { std::cout << "Frist class constructor called!" << "\n"; }
     virtual ~frist() { std::cout << "Frist class destroyed!" << "\n"; }
};
class second :public frist {
public:
	second() { std::cout << "second constructor is called !" << "\n"; }
	~second() { std::cout << "secons class is destroyed!" << "\n"; }
};
#endif // ! POINTER_OBJECTS_AND_VIRTUAL_FUNCTION