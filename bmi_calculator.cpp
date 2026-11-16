#include <iostream>

using namespace std;

int main(){
	
	cout<<"WELCOME TO BMI CALCULATOR"<<endl;
	
	double weight, height, bmi;
	
	cout<<"Please, enter your weight in kilograms:";
	cin>>weight;
	cout<<"Please, enter your height in meters: ";
	cin>>height;
	
	bmi = weight / (height * height);

    cout<<"/n------------------------------"<<endl;
    cout<<"/nYour weight is "<<weight<<" kg"<<endl; 
    cout<<"/nYour height is "<<height<<" m"<<endl;	
	cout<<"Your BMI is "<<bmi<<endl;

    if(bmi==0)
		cout<<"Invalid input.";
	else if(bmi<18.5)
		cout<<"You are underweight.";
		
	else if(bmi>=18.5 && bmi<25)
		cout<<"You are normal weight.";
		
	else if(bmi>=25 && bmi<30)
		cout<<"You are overweight.";
		
	else
		cout<<"You are obese.";

    cout<<"/n------------------------------"<<endl; 
		
	return 0;
}