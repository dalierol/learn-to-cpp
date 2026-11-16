#include <iostream>

using namespace std;

int main(){
	
	cout<<"--------------- WELCOME TO CALCULATOR ---------------"<<endl;
	
	double number1, number2, result;
	char operation;
	
	cout<<"Please, enter your first number: ";
	cin>>number1;
	cout<<"Please, enter your second number: ";
	cin>>number2;
	cout<<"Please, enter your operation(+ - * /): ";
	cin>>operation;
	
	if(operation=='+'){
		result = number1 + number2;
		cout<<"First number "<<operation<<" second number result: "<<result<<endl;
	}
	else if(operation=='-'){
		result = number1 - number2;
		cout<<"First number "<<operation<<" second number result: "<<result<<endl;
	}
	else if(operation=='*'){
		result = number1 * number2;
		cout<<"First number "<<operation<<" second number result: "<<result<<endl;
	}
	else if(operation=='/'){
	
		if(number2!=0){
			result = number1 / number2;
			cout<<"First number "<<operation<<" second number result: "<<result<<endl;
		}
		else 
			cout<<"error: Division by zero"<<endl;
    }
    else 
    	cout<<"Invalid input"<<endl;
    
    cout<<"-----------------------------------------------------"<<endl;
	return 0;
}