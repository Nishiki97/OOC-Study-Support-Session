#include <iostream>

class Box{

private:
  double length;
  double width;
  double height;

public:
  Box();
  Box(int l, int w, int h);
  void setLength(int l);
  void setWidth(int w);
  void setHeight(int h);
  double findVolume();

};

//(i)
Box::Box(){
  length = 0;
  width = 0;
  height = 0;
}

//(ii)
Box::Box(int l, int w, int h){
  length = l;
  width = w;
  height = h;
}

double Box::findVolume(){
  return length * width * height;
}

using namespace std;

int main() {
  
//(iii)
  Box box1;

//(iv)
  Box box2(5,2,3);

//(v)
  cout << "Volume is: " << box2.findVolume();
}

