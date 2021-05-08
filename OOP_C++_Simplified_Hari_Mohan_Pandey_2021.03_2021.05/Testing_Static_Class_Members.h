#pragma once

//Using static 
class UsingStatic {
	static int integer;
	static float floating;
	static std::string str;
public:
	static void Show()
	{
		std::cout << "Integer>>" << integer << std::endl;
		std::cout << "Floating>>" << floating << std::endl;
		std::cout << "String str>>" << str << std::endl;
	}
	void Display() { Show(); }
	void Input_Static_Data() {
		std::cout << "Integer>>"; std::cin >>integer;
		std::cout << "Floating>>";std::cin>>floating;
		std::cout << "String str>>"; std::cin>> str;
	}
};
//this declaration is invalid can occour error!
//static void Demo::Show() {
//	std::cout << "Demo of static function \n";
//}

//static member initialize
int UsingStatic::integer = 20;
float UsingStatic::floating = 3.14f;
std::string UsingStatic::str = "Hello";

class Constructor {
	std::string str1;
	int a{ 0 }, b{ 0 };
public:
	Constructor() {
		std::cout << "Hello my Constructor!" << std::endl;
	}
	Constructor(int x, int y) {
		a = x; b = y; std::cout <<
			"Two argument constructor called!" << std:: endl;
	}
	Constructor(std::string str) {
		str1= str; std::cout << "String constructor added one argument!" 
			<< std::endl;
	}
};
//Stack Simulation using array and class
#define Size 10
class Stack {
	int top;
	int* arr = new int[Size];
public:
	Stack() { top= -1; }
	void push(int item) {
		if (top == 9) {
			std::cout << "Stack is Full!" << std::endl;
			exit(0);
		}
		arr[++top] = item; std::cout << "One item pushed!" << std::endl;
	}
	void pop(){
		if (top == -1) {
			std::cout << "Stack is empty!" << std::endl; exit(0);
		}
		arr[--top]; std::cout << "One item is pushed!" << std::endl;
	}

	void Show_Stack() {
		if (top == -1) {
			std::cout << "Stack is empty!" << std::endl;
		}
		for (int i = 0; i < top + 1;i++) {
			std::cout << "Stack obj[" << i << "]" << "=" << arr[i] << std::endl;
		}
	}
	~Stack() {
		delete[]arr; std::cout << "Stack  has Destroyed!" << std::endl;
	}
};

//Queue simulation using array and class
class Queue {
private:
	int front=-1, rear{ -1};
	int* arr = new int[Size];
public:
	void insert(int item) {
		if (rear == Size - 1)
			std::cout << "Queue is Full!" << std::endl; exit(0);

		if (front == -1) {
			front = 0; ++rear;
			arr[rear] = item;
			std::cout << "One item inserted!" << std::endl;
		}
	}
	void Delete(int item) {
		if (front == -1) {
			std::cout << "Queue is empty!" << std::endl; exit(0);
		}
		item = arr[front];
		if (front == rear)
			front = rear = -1;
		else
			front++; std::cout << "One item is deleted!" << std::endl;
	}
	void Show_Queue() {
		if (front == rear)
			std::cout << "Queue is empty!" << std::endl;
		for (int i =front; i <=rear; i++) {
			std::cout << "Queue[" << i << "]=" << arr[i] << std::endl;
		}
	}
	~Queue() {
		delete[]arr; std::cout << "Queue has destroyed!" << std::endl;
	}
};
//using destructor of class
class Destructor {
public:
	Destructor() { std::cout 
		<< " Constructor of Destructor class is called!!!" <<std::endl; }
	~Destructor() { std::cout << "Destructor is called! " << std::endl; }
};

//using time class
class Time {
	int hour, minute, second;
public:
	Time(int hh, int mm, int ss) :hour(hh), minute(mm), second(ss) {
		std::cout << "HH\MM\SS data has inported ro class!" << std::endl;
	}
	void Display() {
		std::cout << "Hour:" << "Minute:" << "Second" << std::endl;
		std::cout << hour << ":" << minute << ":" << second << std::endl;
	}
	void Add(Time t) {
		hour += t.hour;
		if (second + t.second > 60) {
			minute += ((second + t.second) / 60);
		}
		else {
			second += t.second;
		}
		if (minute + t.minute > 60) {
			hour += ((minute +t.minute)/ 60);
		}else {
			minute += t.minute;
		}
		if(minute>60)
			minute=minute % 60;
		if(second>60)
			second=second % 60;
		Display();
	}
	~Time() { std::cout << "Time has Destroyed!" << std:: endl; }
};








