#include <iostream>
using namespace std;

struct 	movieData {
	string title;
	string director;
	int yearReleased;
	int runningTime;
};
void printData (movieData);

int main (){
	
	movieData movie1;
	movie1.title = "Titanic";
	movie1.director = "Jordan";
	movie1.yearReleased = 2020;
	movie1.runningTime = 200;
	
	movieData movie2;
	movie2.title = "Back in Time";
	movie2.director = "Jordanatha";
	movie2.yearReleased = 2030;
	movie2.runningTime = 210;
	
	movieData movieArr [] = {movie1, movie2};
	
	for (int i = 0 ; i < 2 ; i++){
	printData (movieArr[i]);
	}
	
}

void printData (movieData data){
	cout << data.title << endl << data.director << endl << data.yearReleased << endl << data.runningTime << endl << endl;
}
