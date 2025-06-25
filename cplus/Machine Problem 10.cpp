#include <iostream>
#include <cstdlib>
using namespace std;

 int main(){
    int length=4,row=1,col=1, kind, type;
    
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter kind (1-left triangle 2-right triangle): ";
    cin >> kind;
    cout << "Enter type (1-filled 2-nonfilled): ";
    cin >> type;
    
    (kind==1 && type==1);
	{
	
  	 while(row<=length);
			{
			while(col<=row);
			{
				cout<<"*";
			col++;
			}
		cout<<"\n";
		row++; 
		col=1;
			}

		}
		
	(kind==1 && type==2);
	while(row<=length)
	{
		while(row<=length)
		{
			if(row>1 && row<length)
			{
				if(col>1 && col<length)
				{
					cout<<" ";
				}
				else 
				{
					cout<<"*";
				}
			}
			else
			{
				cout<<" ";
			}
			col++;
		}
		cout<<"\n";
		row++; 
	
	return 0;
	
	}
}
    