#include<iostream>
#include<Windows.h>
using namespace std;

class Student
{
	char* name;
	int age;
public:
	Student() // construct by default
	{
		name = nullptr;
		age = 0;
		cout << "Construcotr by default\n";
	}
	Student(const char* Name, int Age) // construct by 2 param
	{
		name = new char[strlen(Name) + 1];
		strcpy_s(name, strlen(Name) + 1, Name);
		age = Age;
		cout << "Construcotr by 2 param\n";

	}
	void Input() // 
	{
		char buff[20];
		cout << "Enter name -> ";
		cin >> buff;
		// 
		if (name != nullptr) {
			cout << "Delete " << name << endl;
			delete[] name;
		}
		name = new char[strlen(buff) + 1];
		strcpy_s(name, strlen(buff) + 1, buff);
		cout << "Enter age -> ";
		cin >> age;
	}
	void Print()
	{
		cout << "Name: " << name << endl
			<< "Age: " << age << endl << endl;
	}
	~Student() // Destructor!!!
	{
		if (name != nullptr)
		{
			delete[] name;
		}
		cout << "Destruct\n";
		Sleep(1000);

	}
};

int main()
{
	Student obj1("Oleg", 21);
	Student obj2("Max", 24);
	Student obj3("Bob", 18);
}

