#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
	cout<<"--------------- WELCOME TO GUESS NUMBER GAME ---------------"<<endl;

	int secretNumber, guess;
	srand(time(0));
	secretNumber = (rand() % 100 +1);	
	cout<<"Please, enter your guess number: ";
	cin>>guess;
	
	while(secretNumber!=guess){
		cout<<"Your guess is not true"<<endl;
		cout<<"Please again, enter your guess number: ";
		cin>>guess;
	}
	
	cout<<"CONGRATULATIONS!  YOU GUESSED IT";
	
	
    cout<<"-----------------------------------------------------"<<endl;
	return 0;
}