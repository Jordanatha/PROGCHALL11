#include <iostream>
using namespace std;

const int words = 9999;

struct data{
	char name[words];
	char address[words];
	char city[words];
	int cellNumber;
	float accountBalance;
	string lastPayment;
};

int main (){
	int userInput;
	cout << "How may data would u input ? : ";
	cin >> userInput;
	
	data arr[userInput];
	
	char dummy;
	for (int i = 0 ; i < userInput ; i++){
	
		cout << "Name : ";
		dummy = getchar();
		cin.getline (arr[i].name, words);	
		cout << "Address : ";
		cin.getline (arr[i].address, words);
		
		cout << "City : ";
		cin.getline (arr[i].city, words);
		
		cout << "Phone Number : ";
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
		
		cout << "Last Payment : ";
		cin >> arr[i].lastPayment;
		cout << endl;
	}
	
	//Display ulang//
	for (int i = 0 ; i < userInput ; i++){
		cout << "Name : " << arr[i].name << endl;
		cout << "Address : "<< arr[i].address<< endl;
		cout << "City : " << arr[i].city << endl;
		cout << "Phone Number : " << arr[i].cellNumber << endl;
		cout << "Account Balance : " << arr[i].accountBalance << endl;
		cout << "LastPayment : " << arr[i].lastPayment << endl;
		cout << endl;
	}
	return 0;
}
