#include<iostream>
using namespace std;
void stick(int sides);
main() {
	int sides;
	cout<< "Enter the side length of the Rubik's Cube: ";
	cin>> sides;
	stick(sides);
}
void stick(int sides)
	{
	int sticker;
	sticker = (sides*sides)*6;
	cout<< "Number of stickers needed: "<<sticker;}
	
	
	 