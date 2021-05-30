#include <iostream>
#include <cstring>

using namespace std;

//part
class Room{

private:
  int roomno;

public:
  Room(){

  }

  Room(int no) {
    roomno = no;
  }

  void Display() {
    cout<< "Room " << roomno << endl;
  }

  ~Room() {
    cout<< "destroying Room " << roomno<< endl;
  }

};

//----------------------------------------//
//whole
class House {

private:
  Room *room[2];

public:
  House(){
    room[0] = new Room(101);
    room[1] = new Room(102);
  }

  House(int no1, int no2) {
    room[0] = new Room(no1);
    room[1] = new Room(no2);
  }

  void DisplayClassRooms() {
    for (int i=0; i<2; i++)
      room[i]->Display(); 
  }

  ~House() {
    cout<< "House is destroyed!" << endl;
      for (int i=0; i <2; i++)
          delete room[i];
    cout<< "Iwaraiiii!" << endl;
  }

};

//main
int main() {
  
 House *myUniversity;
 
 myUniversity = new House(501, 502);
 myUniversity->DisplayClassRooms();

 delete myUniversity;

 return 0;
}