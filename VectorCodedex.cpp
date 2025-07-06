#include <iostream>
#include <vector>
using namespace std;

int main() {
  // Write code here 💖
 vector<int> num = {2, 4, 3, 6, 1, 9, 8, 0, 8, 5, 7, 3, 3};
int sum1, sum2;
 for (int i=0;i < num.size();i++) {
   if (num[i] % 2 == 0) {
     sum1 = sum1 + num[i];
   }
   else if (num[i] % 2 == 1) {
     sum2 = sum2 * num[i];
   }
   else {
     cout << "Error" << endl;
   }
  
 }

 cout << "The sum of even numbers: " << sum1 << endl;
 cout << "The product of odd numbers: " << sum2 << endl;
 return 0;
}