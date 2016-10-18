#include <iostream>
using namespace std;

enum monthName {January, February, March, April, May, June, July, August, September, October, November, December};

struct data{
	int totalRainfall;
	int hitemp;
	int lowtemp;
	int averagetemp;	
};

void displayMonth (monthName);

int main (){
	int month = 12;
	
	data arr[month];
	
	monthName inputs;
	
	for (inputs = January ; inputs <= December ; inputs = static_cast<monthName>(inputs+1)){
		cout << "Month ";
		displayMonth (inputs);
		cout << endl;
		
	for (int i = 0 ; i <1 ; i++){
		cout << "Total Rainfall" << " : ";
		cin >> arr [i].totalRainfall;
		
		cout << "High temperature : ";
		cin >> arr[i].hitemp;
		while (arr[i].hitemp <= -100 || arr[i].hitemp >= 140){
			cout << "Input the number again : ";
			cin >> arr [i].hitemp;
		} 
		
		cout << "Low temperature : ";
		cin >> arr[i].lowtemp;
		while (arr[i].lowtemp <-100 || arr[i].lowtemp > 140){
			cout << "Input the number again : ";
			cin >> arr[i].lowtemp;
		}
		
		cout << "Average temperature : " << (arr[i].hitemp + arr[i].lowtemp)/2 << endl << endl;
	}
	}
	
	int totalRainYearly = 0;
	for (int i = 1 ; i <= month ; i++){
		totalRainYearly += arr[i].totalRainfall;
	}
	cout << "Total Rainfall yearly : " << totalRainYearly << endl;
	
	cout << "Average Rainfall yearly : " << totalRainYearly/12 << endl;
	
	int highestTemp = 0;
	for (int i = 1 ; i <= month ; i++){
		if (arr[i].hitemp > highestTemp){
			highestTemp = arr[i].hitemp;
		}
	}
	cout << "The Highest temperature is : " << highestTemp << endl;
	
	int lowestTemp = 99999;
	for (int i = 1 ; i <= month ; i++){
		if (arr[i].lowtemp < lowestTemp){
			lowestTemp = arr[i].lowtemp;
		}
	}
	cout << "The lowest temperature is : " << lowestTemp;
}

void displayMonth (monthName input){
    switch (input)
    {
        case January : cout<<"January";
            break;
        case February : cout<<"February";
            break;
        case March : cout<<"March";
            break;
        case April : cout<<"April";
            break;
        case May : cout<<"May";
            break;
        case June : cout<<"June";
            break;
        case July : cout<<"July";
            break;
        case August : cout<<"August";
            break;
        case September : cout<<"September";
            break;
        case October : cout<<"October";
            break;
        case November : cout<<"November";
            break;
        case December : cout<<"December";
            break;
            
    }
}
