#include <iostream>
using namespace std;
void product(int num1,int num2);
void add(int num1,int num2);
void subtract(int num1,int num2);
void devision(int num1,int num2);
main()
{
  int num1;
  int num2; 
  char operation;
  cout << " enter first number: ";
  cin >> num1;
  cout << " enter second number: ";
  cin >> num2;
   cout << " enter operator(+,-,/,*): ";
  cin >> operation;
  if ( operation== '+')
 { 
  add(num1,num2); 
 }
 if ( operation== '*')
 {
  product(num1,num2);
 }
 if ( operation== '/')
 {
  devision(num1,num2);
 }
 if ( operation== '-')
 { 
  subtract(num1,num2);
 }
}
void product(int num1,int num2) 
{
   int product;
   product=num1*num2;
  cout << "product is : " << product << endl;
} 
void add(int num1,int num2) 
{
  int add;
  add=num1+num2 ;
  cout << "sum is: " << add << endl;
}
void subract(int num1,int num2)
{ 
  int subract;
  subract=num1-num2;
  cout << " subtract is: " << subtract << endl;
}
void devision(int num1,int num2)
{ 
 int devision;
 devision=num1/num2;
 cout << " devision is : " << devision << endl;
}