#include<iostream>
using namespace std;
main() {
	string team;
	int wins; 
	int loses;
	int draws;
	cout<< "Enter the name of the cricket team: ";
	cin>> team;
	cout<< "Enter the number of wins: ";
	cin>>wins;
	cout<< "Enter the number of draws: ";
	cin>>draws;
	cout<<"Enter the number of losses: ";
	cin>> loses;
	int points;
	points = (wins*3)+(loses*0)+(draws*1);
	cout<<team <<" has obtained " <<points<< " points in the Asia cup tournament.";
}