#include <iostream>
using namespace std;
void product(int num1,int num2);
void add(int num1,int num2);
main()
{
  int num1;
  int num2;
 cin >> num1;
  cin >> num2;
   product(num1,num2);
   add(num1,num2);
}

void product(int num1,int num2) 
{
   int product;
   product=num1*num2;
  cout << "product : " << product << endl;
} 
void add(int num1,int num2) 
{
  int add;
  add=num1+num2;
  cout << "sum is: " << add << endl;
}