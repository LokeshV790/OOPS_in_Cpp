#include<iostream>
using namespace std;

class Employee {
	public:
		string name;
		string company;
		int age;
	    
	    void intro(){
	    	cout << "Name: " << name << endl;
	    	cout << "Company: "<< company << endl;
	    	cout << "Age: " << age << endl;
		}
};
int main(){
	Employee employee1;
	employee1.name= "Lokesh";
	employee1.company = "hyrelink";
	employee1.age = 19;
	employee1.intro();
}
