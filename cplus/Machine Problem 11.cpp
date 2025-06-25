#include <iostream>
using namespace std;

int main()
{
     int length=4, row=4, col=4;

     for(col=1; col<=row; col++) 
     {
           for(length=col; length<row; length++)
           {
                cout << " ";
           }

           for(length=1; length<=(2*col-1); length++)
           {
                cout << "*";
           }

           cout<<"\n";
     } 

     return 0;
     
 }