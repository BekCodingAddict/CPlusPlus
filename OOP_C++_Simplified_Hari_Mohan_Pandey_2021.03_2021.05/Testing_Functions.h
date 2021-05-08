#pragma once
#include <iostream>
namespace out {
	void  put(int a) { std::cout << a << std::endl; }
	void put(float a) { std::cout << a << std::endl; }
	void put(std::string a) { std::cout << a << std::endl; }
}
//call by reference
void func(int& x, int& y) {
	int temp;
	temp = x;
	x = y;
	y = temp;
}
//call by address with pointer
void func1(int* x, int* y) {
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
//Return by referense
int& func2(int x) { return ++x; }
inline void func3(int& a) { ++a; }
using namespace out;

