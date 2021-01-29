#include <iostream>

class Data {
private:
	std::string name;
	std::string Job;
public:
	Data(std::string name_,std::string Job_){
		name = name_;Job = Job_;
	}
	void Display() {
		std::cout << "Name>>" << name <<std::endl << "Job>>" << Job << std::endl;
	}
	//~Data();
};
class Data2 :protected Data {
private:
	int age;
	double salary;
public:
	Data2(int age, double salary, std::string name_, std::string job_) {

	}
};

int main() {
	Data Person("Otabek", "Programmer");
	Person.Display();
	system("pause");
	return 0;
}