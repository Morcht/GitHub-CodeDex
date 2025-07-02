#include <iostream>
#include <string>
using namespace std;

class cat{
private:
string name;
string breed;
int age;
bool rescued;
int mood;
int hunger;
public:
cat(string a, string b, int c, bool d, int e, int f) {
  name = a;
  breed = b;
  age = c;
  rescued = d;
  mood = e;
  hunger = f;
}

void feed() {
  hunger = hunger + 1;
} 

void play() {
  mood = mood + 1;
}

void status() {
  cout << name << "\n" << breed << "\n" << age << "\n" << rescued << "\n" << mood << "\n" << hunger << endl;
}

};


int main() {
  // Write code here
  cat gato("Puss", "Persian", 100, true, 7, 5);
  cat brownie("Brownie", "Maine Coon", 5, true, 9, 9);

  gato.feed();
  gato.play();
  gato.status();

  brownie.feed();
  brownie.play();
  brownie.status();


  
}