#include "Vector.h"
#include <array>
#include <iostream>

using namespace std;

int main() 
{
   
    Vector a, b(3), c(3);   
    int value;

    a.print(); // outputs []   
    b.print(); // outputs [ 0 0 0 ]   
    c.set(1,0);   
    c.set(2,1);   
    c.set(3,2);    
    c.print(); // outputs [ 1 2 3 ]

    Vector d(c);  
    d.print();  // outputs [ 1 2 3 ]     

    a = c;    
    a.print(); 

    return 0;
}