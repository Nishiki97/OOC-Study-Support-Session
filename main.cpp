#include <iostream>
#include <cstring>

using namespace std;

//parent class
class Parent{

protected:
  string name;

public:
  void assignName(string pname);
  void pdisplay();

};

void Parent::assignName(string pname){
  name = pname;
}
void Parent::pdisplay(){
  cout << "parent class is called!" << endl;
  cout << "name is: " << name << endl;
}

//child class
class Child : public Parent{

private:
  int age;

public:
  void assignAge(int aAge);
  void cdisplay();

};

void Child::assignAge(int aAge){
  age = aAge;
}
void Child::cdisplay(){
  cout << "child class is called!" << endl;
  cout << "age is: " << age << endl;
}

int main() {
  Child c;

  c.assignName("nishiki");
  c.assignAge(23);
  c.cdisplay();
  c.pdisplay();

}