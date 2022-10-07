#include<iostream>
using namespace std;

class AbstractEmployee{
	virtual void AskForRaise()=0;
};

class Employee {
	private:
		string Name;
		string Company;
		int Age;
    public:
    	void setName(string name){
    		Name=name;
		}
		string getName(){
			return Name;
		}
		void setAge(int age){
			if(age>=18) // conditional statement in setter and getter method
			Age=age;
		}
		int getAge(){
			return Age;
		}
	    void intro(){
	    	cout << "Name: " << Name << endl;
	    	// cout << "Company: "<< Company << endl;
	    	cout << "Age: " << Age << endl;
		}
		void AskForRaise(){
			if (Age>=32)
			cout << Name << " got raise of 3L" << endl;
			else
			cout << Name << " sorry no raise for you this time" << endl;
		}
		Employee(string name,string company,int age){
			Name =  name;                                  
			Company = company;
			Age = age;
		}
};

class Developer:public Employee{    //need to add public before employee so that all the members are acessable
	public:
		string FavLang;
		Developer(string name, string company, int age, string favLang)
		: Employee(name,company,age)   //need to invoke employee class properties
		{
			FavLang = favLang;
		}
		void bug(){
			cout << getName() << " Fixed Bug Using " << FavLang << endl;
		}
};
int main(){
	Developer developer1 = Developer("Lokesh","Hyrelink",19,"C++");
	developer1.bug();
	developer1.AskForRaise();
};
