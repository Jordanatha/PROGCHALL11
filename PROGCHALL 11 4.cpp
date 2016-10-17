#include <iostream>
using namespace std;

struct data{
	int totalRainfall;
	int hitemp;
	int lowtemp;
	int averagetemp;	
};

int main (){
	int month = 12;
	
	data arr[month];
	
	for (int i = 1 ; i <= month ; i++){
		cout << "Total Rainfall Month " << i << " : ";
		cin >> arr [i].totalRainfall;
		
		cout << "High temperature : ";
		cin >> arr[i].hitemp;
		while (arr[i].hitemp <= -100 && arr[i].hitemp >= 140){
			cout << "Input the number again : ";
			cin >> arr [i].hitemp;
		} 
		
		cout << "Low temperature : ";
		cin >> arr[i].lowtemp;
		while (arr[i].lowtemp <-100 && arr[i].lowtemp > 140){
			cout << "Input the number again : ";
			cin >> arr[i].lowtemp;
		}
		
		cout << "Average temperature : " << (arr[i].hitemp + arr[i].lowtemp)/2 << endl << endl;
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
