#include <iostream>
#include <cstring>
using namespace std;

const int words = 99999;

struct data{
	char name[words];
	double phoneNumber;
	char topic[words];
	float feeRequired;
};

int main (){
	int userInput;
	
	cout << "How many data do you want to input? : " << endl;
	cin >> userInput;
	cin.ignore();
	
	data arr[userInput];
	
	for (int i = 0 ; i < userInput ; i++){
		
		cout << "Name 	     : ";
		cin.getline (arr[i].name, words); 
		
		cout << "Phone Number : ";
		cin >> arr[i].phoneNumber;
		cin.ignore ();
		
		cout << "Topic	     : ";
		cin.getline (arr[i].topic, words);
		
		cout << "Fee Required : $";
		cin >> arr[i].feeRequired;
		cin.ignore();
		cout << endl;
		
	}
}
