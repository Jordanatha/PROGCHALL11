#include <iostream>
#include <string>
#include <stdlib.h>
#include <cstring>
using namespace std;

const int  words = 99999;

struct data{
	char name[words];
	char address[words];
	char city[words];
	char cellNumber[words];
	float accountBalance;
	string lastPayment;
};

int main (){
	int userInput;
	cout << "How may data would u input ? : ";
	cin >> userInput;
	cin.ignore();
	
	data arr[userInput];
	
	for (int i = 0 ; i < userInput ; i++){
	
		cout << "Name 	        : ";
		cin.getline (arr[i].name, words);
		if (strlen(arr[i].name) == 0){
			cout << "eror";
			exit (0);
		}
			
		cout << "Address         : ";
		cin.getline (arr[i].address, words);
		if (strlen(arr[i].address) == 0){
			cout << "eror";
			exit (0);
		}
		
		cout << "City            : ";
		cin.getline (arr[i].city, words);
		if (strlen(arr[i].city) == 0){
			cout << "eror";
			exit (0);
		}
		
		cout << "Phone Number    : ";
		cin >> arr[i].cellNumber;
		while (arr[i].cellNumber < 0){
			cout << "Please input the right number : ";
			cin >> arr[i].cellNumber;
		}
		
		cout << "Account Balance : $";
		cin >> arr[i].accountBalance;
		
		while (arr[i].accountBalance < 0){
			cout << "Please input the right number : ";
			cin >> arr[i].accountBalance;
		}
		
		cout << "Last Payment    : ";
		cin >> arr[i].lastPayment;
		cout << endl;
		cin.ignore();
	}
	
	string Name;
	cout << "Which data do you want to display? Enter a name :  " << endl;
	getline (cin, Name);
	bool found = false;
	for (int i = 0 ; i < userInput ; i++){
		if (Name.compare (arr[i].name) == 0){
			cout << "Name	        : " << arr[i].name << endl;
			cout << "Address         : " << arr[i].address << endl;
			cout << "City 	        : " << arr[i].city << endl;
			cout << "Phone Number    : " << arr[i].cellNumber << endl;
			cout << "Account Balance : $" << arr[i].accountBalance << endl;
			cout << "Last Payment    : "<< arr[i].lastPayment <<endl;
			found = true;
		}
	}
	if(found) {
		
	}
	else {
		cout << "eror.";
	}
		return 0;
	}



