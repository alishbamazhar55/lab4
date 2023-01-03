#include <iostream>
using namespace std;
void isEligible(int age);
main()
{  
 int age;
  while (true)
 {
 cout << " age is: ";
 cin >> age;
 isEligible(age);
 }
}
void isEligible(int age)
{
 if (age >= 18)
  { 
    cout << "person is eligible" << endl;
  }
   if (age < 18)
 {
  cout << "person is no eligible" << endl\
 }
}