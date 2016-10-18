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
	
	string Topic;
	cout << "Which data do you want to display? Enter a topic :  " << endl;
	getline (cin, Topic);
	bool found = false;
	for (int i = 0 ; i < userInput ; i++){
		if (Topic.compare (arr[i].topic) == 0){
			cout << "Name	     : " << arr[i].name << endl;
			cout << "Phone Number : " << arr[i].phoneNumber << endl;
			cout << "Topic        : " << arr[i].topic << endl;
			cout << "Fee Reqiured : $" << arr[i].feeRequired << endl;
			found = true;	
		}
	}
	if (found){
	}
	else {
		cout << "eror.";
	}
}
