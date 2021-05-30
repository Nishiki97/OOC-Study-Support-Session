#include <iostream>
using namespace std;

/*
//uni directional (department -> manager)
class Manager{

private:
string name;

public:
Manager(string dname){
  name = dname;
}
void displayManager(){
  cout << "manager's name is: " << name << endl;
}

};

class Department{ 

private:
string deptName;
Manager *mgr;

public:
Department(string dname, Manager *m){
  deptName = dname;
  mgr = m;
}
void print(){
  cout << "Department name is: " << deptName << endl;
  mgr->displayManager();
}

};

int main() {
  
  Manager *m = new Manager("nishiki");

  Department *d = new Department("SE", m);

  d->print();


}
*/
//------------------------------------------------------------//


//bi directional 

#define SIZE 10

class Customer;
class Order;

class Customer{

private:
		string name;
		string address;
		Order *order[SIZE];
		int noOfOrders;

public:
		Customer();
		Customer(string pname, string paddress);
		void addOrder(Order *O);
		void displayCustomer();
			
};

class Order{

private:
   	string orderID;
   	Customer *Cus;
   
public:  
   	Order(string	porderID,  Customer *pCus);
   	void displayOrders();
     
};

Order::Order (string	porderID,  Customer *pCus) 
{  
     orderID = porderID;
     Cus = pCus;
     Cus->addOrder(this);
}

void Order::displayOrders()
{
 cout << " orderID " << orderID << endl;
 
}

Customer::Customer( string pname, string paddress)
{
    name = pname;
    address = paddress;
    noOfOrders = 0;
}
void Customer::addOrder(Order *O)
{
        if (noOfOrders < SIZE)
           order[noOfOrders] = O;
        noOfOrders++;
}

void Customer::displayCustomer()
{
    cout << " Customer Name  = " << name << endl;
    cout << " Customer Address  = " << address << endl;
    for( int i = 0; i < noOfOrders; i++)
        order[i]-> displayOrders();
}



int main()
{

	Customer *C1 = new Customer("Gihan", "Malabe");
	Customer *C2 = new Customer("Ajith" , "Kandy");

	Order *O1 = new Order("001", C1);
  Order *O2 = new Order("002",  C1);

  cout << "orders of" << endl;

  C1->displayCustomer();


	return 0;
}

//-------------------------------------------------------------//

/*
//association class 

#include <cstring>

class Employee{

private :
		string empID;
		string name;

public :
		Employee(string pempID, string pname)
		{
			empID = pempID;
			name = pname;
		}
		void displayEmployee()
		{
				cout << "empID  = "  << empID << endl;
				cout << "name  = " << name << endl;
		}

};

class Project{

private :
		string projectID;
		string name;

public :
		Project(string pprojectID, string pname)
		{
			projectID = pprojectID;
			name = pname;
		}
		void displayProject()
		{
				cout << "projectID = " << projectID << endl;
				cout << "name  = " << name << endl;
		}
};

class worksON{

private:
			Employee *emp;
			Project *prj;
			int hours;

public:
			worksON(Employee *pemp, Project *pprj, int phours)
			{
				emp = pemp;
				prj = pprj;
				hours = phours;
			}
			void displayWorksON()
			{
				emp->displayEmployee();
				prj->displayProject();
				cout << "hours =" << hours << endl;
			}
};


int main()
{
	
	Employee *e[2];

	e[0] = new Employee("E001", "Sunil");
	e[1] = new Employee("E002", "Mala");

	Project *p[2];

	p[0] = new Project("P001", "C#");
	p[1] = new Project("P002", "Java");

	worksON work1(e[0], p[0], 2);
	worksON work2(e[1], p[1], 4);

	work1.displayWorksON();

	cout << "**********" << endl;

  work2.displayWorksON();

	delete e[0];
  
	return 0;
}
*/