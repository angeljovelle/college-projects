#include <iostream>
#include <cstdlib>
using namespace std;

int main(){

	int shape, length, type, col, row;
	
	cout << "********************************************\n";
	cout << "*                                          *\n";
	cout << "*      Welcome to my shapes program        *\n";
	cout << "*                                          *\n";
	cout << "* Enter type of shape                      *\n";
	cout << "* 1-Equilateral Triangle 2-Square          *\n";
	cout << "* 3-Circle                                 *\n";
	cout << "* 4-Right Triangle 5-Left Triangle         *\n";
	cout << "********************************************\n";
	
	cin >> shape;

	cout << "********************************************\n";
	cout << "*                                          *\n";
	cout << "*      Please enter length                 *\n";
	cout << "*                                          *\n";
	cout << "********************************************\n";
	
	cin >> length;
	
	cout << "********************************************\n";
	cout << "*                                          *\n";
	cout << "* Please enter fill type                   *\n";
	cout << "* 1-Filled 2-Nonfilled                     *\n";
	cout << "********************************************\n";
	cout << "*                                          *\n";
	
	cin >> type;

if(shape == 4 && type == 1){

	int row=1, col=1;
	
	while(row<=length)
	{
		
		while(col<=length)
		{
			cout<<"*";
			col++;
		}
		
		cout<<"\n";
		row++; 
		col=1; 
	}
	
	cout<<"\n" << "\n";
}
if (shape ==2 && type == 1){

	length, row=1, col=1;

	while(row<=length)
	{
		while(col<=length)
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
				cout<<"*";
			}
			col++;
		}
		
		cout<<"\n";
		row++; 
		col=1; 
	}
	cout<<"\n" << "\n";
}
	if (shape == 1 && type == 1){
	

	length=5;row=1, col=1;

	while(row<=length)
	{
	
		while(col<=row)
		{
			cout<<"*";
			col++;
		}

		cout<<"\n";
		row++; 
		col=1; 
	}
	}

}

