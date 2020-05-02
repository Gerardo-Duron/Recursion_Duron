// Name: Gerardo Duron   Date: 5/02/2020
// Class: 1437 Fundamentals II   Teacher: Dr. T. 

#include <iostream>
#include "Input_Validation.h"
using namespace std;


string red = "\x1b[31m";
string reset = "\x1b[0m";

void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod)  
{  
    if (n == 1)  
    {  
        cout << "Move disk 1 from rod " << from_rod <<  
       " to rod " << to_rod << "\n" <<endl;  
      return;  
    }  
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);  
    cout << "Move disk " << n << " from rod " << from_rod << 
     " to rod " << to_rod << "\n" << endl;  
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);  
}  


void factorialFunction()

{
  int n;
  unsigned long factorial = 1; // use of long type because the number return will be long
  cout << "enter a number: ";
  cin >> n;

  cout << "\nYou enetered: " << n << "\n" << endl;

  for(int i = 1; i <= n; i++)
    {
      factorial = factorial *i;
    }
  cout << "Factorial of your Number is: "  << factorial << endl;

}

  
// Driver code 
int main()  
{  
  cout << red << " Tower of Hanoi Project: \n" << reset << endl;
    int n = 4; // Number of disks  
    towerOfHanoi(n, 'A', 'C', 'B'); // A, B and C are names of rods  

  cout << red << " Recursive function Project: \n" << reset << endl;
    factorialFunction();


    return 0;  
}  