#include <iostream>
using namespace std;
void calculatebill(int amount,string day);
main()
{
 int amount;
 string day;
 while (true)
 {
 cout << " amount is: ";
 cin >> amount;
 cout << " day is: ";
 cin >> day;
 calculatebill( amount, day);
 }
} 
void calculatebill(int amount,string day)
{ 
  int bill;
  int discount;
 if (day=="sunday")
 {
 discount=(amount*10)/100;
 bill=amount-discount;
 cout << " total bill is: " << bill << endl;
 }
 if (day=="monday") 
 {
 discount=(amount*5)/100;
 bill=amount-discount;
 cout << " total bill is: " << bill << endl;
 } 
if (day=="tuesday") 
 {
 discount=(amount*5)/100;
 bill=amount-discount;
 cout << " total bill is: " << bill << endl;
 } 
if (day=="wednesday") 
 {
 discount=(amount*5)/100;
 bill=amount-discount;
 cout << " total bill is: " << bill << endl;
 } 
if (day=="thursday") 
 {
 discount=(amount*5)/100;
 bill=amount-discount;
 cout << " total bill is: " << bill << endl;
 } 
if (day=="friday") 
 {
 discount=(amount*5)/100;
 bill=amount-discount;
 cout << " total bill is: " << bill << endl;
 } 
if (day=="saturday") 
 {
 discount=(amount*5)/100;
 bill=amount-discount;
 cout << " total bill is: " << bill << endl;
 } 
} 