#include <iostream>
using namespace std;

struct data {
	string name;
	int number;
	int score;
};

int main (){
	int player = 12;
	
	data arr [player];
	
	for (int i = 0 ; i < 12 ; i++){
		
		cout << "Player's name : ";
		cin >> arr[i].name;
		
		cout << "Player's number : ";
		cin >> arr[i].number;
		while (arr[i].number < 0){
			cout << "Please input the right number : ";
			cin >> arr[i].number;
		}
	
		cout << "Player's point : ";
		cin >> arr[i].score;
		cout << endl << endl;
		while (arr[i].score < 0){
			cout << "Please input the right number : ";
			cin >> arr[i].score;
			cout << endl << endl;
		}
	}
		int totalPoints = 0;
		for (int i = 0 ; i < 12 ; i++){
			totalPoints += arr[i].score;
		}
		cout << "Total points for the team is : " << totalPoints << endl;
		
		int mostPoint = 0;
		int	mostScorer = 0;
		for (int i = 0 ; i < 12 ; i ++){
			if (arr[i].score > mostPoint){
				mostPoint = arr[i].score;
				mostScorer = i + 1;
				
			}
		}
		cout << arr[mostScorer].score << " " << mostPoint;
		
		return 0;
}

