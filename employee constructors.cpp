#include<iostream>
using namespace std;

class Employee {
	public:
		string Name;
		string Company;
		int Age;
	    
	    void intro(){
	    	cout << "Name: " << Name << endl;
	    	cout << "Company: "<< Company << endl;
	    	cout << "Age: " << Age << endl;
		}
		Employee(string name,string company,int age){
			Name =  name;
			Company = company;
			Age = age;
		}
};
int main(){
	Employee employee1 = Employee("Lokesh Vazirani","Hyrelink",19);
	Employee employee2 = Employee("Lavina Vazirani","capjemini",24 );
		employee1.intro();
		employee2.intro();
}
