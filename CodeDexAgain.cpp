#include <iostream>
#include <vector>
using namespace std;

int main() {
  // Write code here 💖
  vector<string> cart = {"Pepperoni pizza", "Garden salad", "Diet coke"};
  cart.push_back("Marinara sauce");
  cart.pop_back();

  for (int i = 0;i < cart.size();i++) {
    cout << cart[i] << endl;
  }

  cout << cart.size() << endl;
}