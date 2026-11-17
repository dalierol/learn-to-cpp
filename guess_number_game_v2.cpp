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
	do{
        if(secretNumber>guess){
            cout<<"Your guess is too low"<<endl;
            cout<<"Please again, enter your guess number: ";
            cin>>guess;
        }
        else if(secretNumber<guess){
            cout<<"Your guess is too high"<<endl;
            cout<<"Please again, enter your guess number: ";
            cin>>guess;
        }
    }
	while(secretNumber!=guess);
	cout<<"CONGRATULATIONS!  YOU GUESSED IT";
	
	
    cout<<"-----------------------------------------------------"<<endl;
	return 0;
}