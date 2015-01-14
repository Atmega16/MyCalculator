// CalculatorSwitch.cc
// Simple arithmetic calculator using switch() selection.

#include <iostream>
using namespace std;

int main()
{
   float a, b, result;
   char operation;
   int ok = 0;
 
   // Get numbers and mathematical operator from user input
   cout<< "Zahl eingeben:\n";
   cin >> a;
   cout<<"naechste Zahl:\n";
   cin >> b;
   cout<<"Operator:\n";
   cin >> operation;

   // Character constants are enclosed in single quotes
   switch(operation)
   {
   case '+':
         result = a + b;
         break;
   case '-':
         result=a-b;
         break;
   default:
         cout << "Invalid operation. Program terminated." << endl;
         return -1;
   }

   cout<<"Zahlen miteinander Vergleichen? 0 nein 1 ja";
   cin<<ok;
   
   if(ok){
      if(a==b) cout<<"Zahlen sind identisch!";
      else   {
         if(a>b) cout<< "Erste Zahl ist größer";
         else cout<<"Zweite Zahl ist größer";
      }
   }

   // Output result
   cout << result << endl;
   return 0;
}
