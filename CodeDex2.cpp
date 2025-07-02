#include <iostream>
#include <string>

using namespace std;

class BankAccount {
public:
string name;
int account_id;
string account_type;
double balance;

void deposit(int money) {
  balance = balance + money;
}

void withdraw(int money) {
  balance = balance - money;
}

void display_balance() {
  cout << balance << endl;
}

};


int main() {
  // Write code here
  BankAccount test;

  test.balance = 0;
  test.deposit(96);
  test.withdraw(25);
  test.display_balance();

}