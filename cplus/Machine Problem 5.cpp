#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	
	float feet, height, weight, bmi, meters, kg, meterheight;
	
	cout << "Enter your height in feet and inches.\n";
	cout << "First, enter the feet: ";
	cin >> feet;
	cout << "Next, enter the inches: ";
	cin >> height;
	cout << "Finally, enter your weight in pounds: ";
	cin >> weight;
	
	meterheight = (feet * 12 + height)*0.2054;
	kg = weight/2.2;
	bmi = kg/meterheight*meterheight;
	
	cout << "Your height in meters is " << meterheight << "\n";
	cout << "Your weight in kilograms is " << kg << "\n";
	cout << "Your BMI is " << bmi;
	
	return 0;
	
}
