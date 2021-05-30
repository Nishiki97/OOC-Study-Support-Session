#include <iostream>

using namespace std;

//part
class Artist
{
private :
string name;

public :
Artist(string pname){
  name = pname;
}

void displayArtist(){
  cout<< "name = " << name << endl;
}

~Artist(){
  cout<< "Artist giyaa: " << name << endl;
}

};

//-------------------------------------------
//whole

class Band
{
private:
Artist *art[2];

public:
Band(){};

void addArtist(Artist *art1, Artist *art2){
  art[0] = art1;
  art[1] = art2;
}

void displayBand(){
  for(int i = 0; i < 2; i++)
    art[i]->displayArtist();
}

~Band(){
  cout<< "Band eka iwarai!" << endl;

}
};

//main

int main() {

  Band *ABC = new Band();

  Artist *e1 = new Artist("K sujeewa");
  Artist *e2 = new Artist("Ginger");

  ABC->addArtist(e1, e2);

  ABC->displayBand();

  delete ABC;

  e1->displayArtist();
  e2->displayArtist();
  
  return 0;
}