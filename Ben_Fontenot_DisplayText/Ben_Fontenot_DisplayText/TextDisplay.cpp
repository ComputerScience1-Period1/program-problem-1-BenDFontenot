/*
Ben Fontenot, 9/22/2017 Period:1
Mr. Hudson
New Project & Display Text to Console
*/

// Libraries
#include <iostream>
#include <conio.h>

// Name Spaces 
using namespace std;

// Functions()
void pause() {
	cout << "Now Proceed and Enter the Access Code Immediately! If an Error is Made, This Computer Will Explode!";
	while (!_kbhit());
	_getch();
	cout << "\n";
}

// MAIN 
void main() {
	// Display Text
	cout << "Please Locate Proper Coordinates. . ." << endl;
	pause();
	// No system(""); commands anymore
}