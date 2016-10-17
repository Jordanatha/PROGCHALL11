#include <iostream>
using namespace std;

struct data{
	string name;
	string address;
	string city;
	int cellNumber;
	float accountBalance;
	string lastPayment;
};

int main (){
	int userInput;
	cout << "How may data would u input ? : ";
	cin >> userInput;
	
	data arr[userInput];
	
	for (int i = 0 ; i < userInput ; i++){
		cout << "Name : ";
		cin >> arr[i].name;
		
		cout << "Address : ";
		cin >> arr[i].address;
		
		cout << "City : ";
		cin >> arr[i].city;
		
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
	return 0;
}
