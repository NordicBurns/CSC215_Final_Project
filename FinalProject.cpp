// FinalProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


/* Requirments:
1. Contain Description - Done
2. Ask users name, then greet them - Done
3. Contain simple data type variables - Done
4. Program must print Text - Done
5. Program must accept user input - Done
6. Use one or more type of loops - Done
7. One function to return a value - Done
8. Use at least one reference - Done
9. Use at least one pointer - Done
10. Create at least one additional header and .cpp file - Done
11. Show use of commenting code - Done
12. Must include two classes, one base class and one child class - Done
13. Demonstrate encapsulation and inheiritance - Done
14. Submit to GitHub - 
*/


#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <Windows.h>
#include "MyFuncs.h" // 4 written functions stored into the header

; using namespace std;

//function block with a total of 3 functions

string GetUserName();
void OpeningStatement(string uIn);
void PlayerChoice();

//global variable block - these are declared for later use in the program
string uIn;
int path;

// main function, this is the beginning and the end of the program.
int main()
{
	Description();
	OpeningStatement(GetUserName());
	Money();
	IntroCont();
	PlayerChoice();

	return 0;
}

//funciton descriptions:

//gets username as a string from the user, and returns a string value to be used by another function.
string GetUserName()
{
	cout << "Strange Traveler, what is your name?\n" << endl;
	cin >> uIn;

	return uIn;
}

// gives the opening statement of the program, passes the return value of the GetUserName fuction into its arguement
void OpeningStatement(string uIn)
{
	cout << "\nAh, you are the one known as, " << uIn;
	cout << ", wonderful news! I have been watching you throughout many of my prophocies...\n"
		"You are destined to either triumph and become known as a legend or to dwindle and fall to the pits of Tarterus..." << endl;
	cout << "\nYou can smell his breathe and he reaks of booze, so you dismiss him and continue through the market...\n" << endl;
}

// give user a path choice, collects input as an integer to choose path.
void PlayerChoice()
{
	cout << "What do you do\n"
		"(1) Spend most of your Drachma for the shiney new armour\n"
		"(2) Save your Drachma incase you need it\n"
		"Please enter '1' or '2'\n" << endl;
	cin >> path;
	cout << "\nYou chose path: " << path << endl;
	cout << "\n\n";

	// if player chooses 1 do this
	if (path == 1)
	{
		GoldStatement();
	}
	// if player chooses 2 do this
	else if (path == 2)
	{
		SilverStatement();
	}
	// catchall if user tries to choose anything other than 1 or 2
	else
	{
		cout << "You entered incorreectly please try again\n\n" << endl;
		PlayerChoice();
	}


}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
