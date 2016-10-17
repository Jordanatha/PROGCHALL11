#include <iostream>
using namespace std;

struct 	movieData {
	string title;
	string director;
	int yearReleased;
	int runningTime;
	int movieProduction;
	int firstRevenue;
};
void printData (movieData);

int main (){
	
	movieData movie1;
	movie1.title = "Titanic";
	movie1.director = "Jordan";
	movie1.yearReleased = 2020;
	movie1.runningTime = 200;
	movie1.movieProduction = 200000;
	movie1.firstRevenue = 120000;
	
	movieData movie2;
	movie2.title = "Back in Time";
	movie2.director = "Jordanatha";
	movie2.yearReleased = 2030;
	movie2.runningTime = 210;
	movie2.movieProduction = 300000;
	movie2.firstRevenue = 100000;
	
	movieData movieArr [] = {movie1, movie2};
	
	for (int i = 0 ; i < 2 ; i++){
	printData (movieArr[i]);
	}
	
}

void printData (movieData data){
	cout << "Title  		         : " << data.title << endl;
	cout << "Director	         : " << data.director << endl;
	cout << "Running Time   		 : " << data.runningTime << endl;
	cout << "Year Released  		 : " << data.yearReleased << endl;
	cout << "First year profit / loss : " << data. movieProduction - data.firstRevenue << endl << endl;
}
