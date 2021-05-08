#include <iostream>
#include <string>
#include <fstream>
#pragma warning()
class person {
	char name[10];
	int age;
public:
	void Input(const char n[], int a) {
		std::strcpy(name, n);
		age = a;
	}
	void Show() {
		std::cout << "Name:" << name << "\n";
		std::cout << "age:" << age << "\n";
	}
};
int main() {
	
	std::fstream file;
	file.open("A:\demo.txt", std::ios::in | std::ios::out);
	person p;
	p.Input("Otabek", 24);
	file.write(char*)&p, sizeof(p));
	std::cin.get();
}