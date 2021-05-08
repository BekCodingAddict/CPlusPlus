#ifndef Using_Operator_Overloading
#define Using_Operator_Overloading
class Demo_op{
	int num;
	static int count;
public:
	void InputNum(){
		std::cout << "Enter number for Object "<<++count<<">>"; std::cin >> num;
	}
	void operator +(int n) {
		num += n;
	}
	/*void operator+(Demo_op d) {
		int sum;
		sum = num + d.num;
		std::cout << "Sum of two Object is >>" << sum << "\n";
	}
	int operator +(Demo_op d) {
		std::cout << "Sum of two Object is returned!" << "\n";
		return num + d.num;
	}*/
	Demo_op operator+(Demo_op obj) {
		Demo_op temp;
		temp.num = num + obj.num;
		return temp;
	}
	Demo_op operator-(Demo_op obj) {
		Demo_op temp;
		temp.num = num -obj.num;
		return temp;
	}
	Demo_op operator/(Demo_op obj) {
		Demo_op temp;
		temp.num = num /obj.num;
		return temp;
	}
	Demo_op operator*(Demo_op obj) {
		Demo_op temp;
		temp.num = num * obj.num;
		return temp;
	}
	void operator>(Demo_op obj) {
		if (num > obj.num)
			std::cout << num << ">" << obj.num << "\n";
		else
			std::cout << num << "<" << obj.num << "\n";
	}
	void operator=(Demo_op obj) {
		num = obj.num;
		std::cout << "Data has copyed!" << "\n";
	}
	
	void ShowData() {
		std::cout << "Num>>" << num << std::endl;
	}
	//this operator function don't have a return type 
	friend void operator<<(std::ostream& , Demo_op& );
	friend void operator>>(std::istream& , Demo_op&);
};

void operator<<(std::ostream& mycout, Demo_op& d) {
	mycout << "num=" << d.num << std::endl;
}
void operator>>(std::istream& mycin, Demo_op& d) {
	std::cout << "Enter the number for object.num >>";
	mycin >> d.num;
}
int Demo_op::count;

class Demo_opr :public Demo_op {
	int dx{ 0 }, dy{ 0 };
	int* ptr = nullptr;
	std::string name;
public:
	//using operator  function which have return type 
	friend std::ostream& operator<<(std::ostream&, Demo_opr &);
	friend std::istream& operator>>(std::istream&, Demo_opr&);
	Demo_opr() {
		ptr = new int[5];
		for (int i = 0; i < 5; i++)
			ptr[i] = i + 1;
	}
	Demo_opr(int x) { dx = x; }
	//using array with operator function 
	int operator[](int x) {
		return ptr[x];
	}
	//overloading comma(,) operator
	Demo_opr& operator,(Demo_opr& d) {
		Demo_opr temp;
		temp.dx = dx;
		return temp;
	}
	void Show_dx() { std::cout << "dx=" << dx << std::endl; }
	//Demo_opr of overloading ->operator
	Demo_opr(std::string str):name(str){}
	 Demo_opr* operator->() {
		 return this;
	}
	 std::string newname = "Hi"; std::string Getname()
	 { name = newname; return name; }
	 //overloading of functional call () operator
	 void operator()(int, int);
};

void Demo_opr::operator()(int a, int b) {
	dx = a; dy = b;
	std::cout << "dx=" << dx << "dy=" << dy << std::endl;
}

std::ostream& operator<<(std::ostream& mycout, Demo_opr& d) {
	mycout << "Name>>" << d.name << std::endl;
	return mycout;
 }
std::istream& operator>>(std::istream& mycin, Demo_opr& d) {
	mycin >> d.name;
	return mycin;
}
#endif

