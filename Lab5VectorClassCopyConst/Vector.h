#pragma once

using namespace std;

class Vector {
public:
    Vector();       // default constructor  sets size to 0  
   
    Vector(int s);  // makes size = s,    //allocates s space,    // makes all entries 0  
   
    Vector(const Vector& rhs);   // copy constructor   // makes self a deep copy of rhs  
   
    Vector operator = (const Vector& rhs);   // makes self a deep copy of rhs  
    
    ~Vector();     // default destructor  
  
    void print();      // Prints out the vector  

    void set(int val, int pos); // if 0 <=pos<size   // stores val at pos in entries  
 
private:
    int size;            //sets the # of elements used    
    int* entries;
};