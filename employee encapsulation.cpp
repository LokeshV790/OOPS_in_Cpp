#include<iostream>
using namespace std;

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
	    	cout << "Company: "<< Company << endl;
	    	cout << "Age: " << Age << endl;
		}
		/*Employee(string name,string company,int age){
			Name =  name;                                  // hide constructor because it acts as a non defined function.
			Company = company;
			Age = age;
		}*/
};
int main(){
	Employee employee1;
	employee1.setName("Lokesh");
	employee1.setAge(19);
	cout<<employee1.getName()<<" is "<<employee1.getAge()<<" years old.";
}
