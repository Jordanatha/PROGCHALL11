#include <iostream>
using namespace std;

struct companyData {
	string divisionName;
	int firstQuarterSales;
	int secondQuarterSales;
	int thirdQuarterSales;
	int fourthQuarterSales;
	int totalAnnualSales;
	int averageQuarterlySales;
};

void printData (companyData);

int main (){
	companyData east;
	east. divisionName; 
	east. firstQuarterSales;
	east. secondQuarterSales;
	east. thirdQuarterSales;
	east. fourthQuarterSales;
	east. totalAnnualSales;
	east. averageQuarterlySales;
	
	companyData west;
	west. divisionName ; 
	west. firstQuarterSales;
	west. secondQuarterSales;
	west. thirdQuarterSales;
	west. fourthQuarterSales;
	west. totalAnnualSales;
	west. averageQuarterlySales;
	
	companyData north;
	north. divisionName ; 
	north. firstQuarterSales;
	north. secondQuarterSales;
	north. thirdQuarterSales;
	north. fourthQuarterSales;
	north. totalAnnualSales;
	north. averageQuarterlySales;
	
	companyData south;
	south. divisionName ; 
	south. firstQuarterSales;
	south. secondQuarterSales;
	south. thirdQuarterSales;
	south. fourthQuarterSales;
	south. totalAnnualSales;
	south. averageQuarterlySales;
	
	
	companyData companyArr [] = {east, west, north, south};
	for (int i = 0 ; i < 4 ; i++){
		printData (companyArr [i]);
	}
	
}

void printData (companyData data){
	float FQ, SQ, TQ, ForQ, total, average;
	string name;
	
	cout << "Division name( East West South North)	: " << endl;
	cin >> name;
	cout << "FirstQuarter Sales  : ";
	cin >> FQ;
	cout << "SecondQuarter Sales : ";
	cin >> SQ;
	cout << "ThirdQuarter Sales  : ";
	cin >> TQ;
	cout << "FourthQuarter Sales : ";
	cin >> ForQ;
	
	if (FQ < 0 || TQ < 0 || SQ < 0 || ForQ < 0){
		cout << "The sales input can not be negative. ";
	}
	else {
	total = FQ + SQ + TQ + ForQ;
	average = (FQ + SQ + TQ + ForQ) / 4.0;
	
	cout << "Total Annual Sales: " << total << endl;
	cout << "AverageQuarter Sales: " << average << endl << endl;
	}
}
