#include <iostream>
using namespace std;


//OrderDetails class (part)
class OrderDetails{

private:
  int qty;
  string taxStatus;

public:
  void calcSubTotal();
  float calcTax();

};

//order class (whole)
class Order{

private:
  int date;
  string status;
  double price;
  OrderDetails *orderdetails; //define 'part' object here

public:
  //can add 'part' here using separate method call addOrderDetails()
  void addOrderDetails(OrderDetails *od){
    orderdetails = od;
  }
  void calcSubTotal();
  float calcTax();
  double calcTotal();
};

