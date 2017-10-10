// PigLatin.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string> 
#include <sstream>
#include "stdio.h"

using namespace std;
void getinputs();
int translateToPigLatin(string word);
void goAgain();

int main()
{
	getinputs(); // starts function to get inputs from user
    return 0;
}

void getinputs() // gets inputs from users
{
	string word;
	cout << "Please enter a word or phrase." << endl;
	cin >> word;
	cout << "You entered " << word << endl;
	translateToPigLatin(word);// send inputs to translator
	

}

int translateToPigLatin(string word)
{
	string pigLatinAppend = "ay";

	if (word == "the" || word=="The" || word=="and" || word=="And" || word=="but" || word=="But" || word=="for" || word=="For" || word=="nor" || word=="Nor" || word=="yet" || word=="Yet")
	{
		cout << "Your word in Pig Latin is " << word << endl;
		
	}

	else if (word.length() <= 2)
	{
		cout << "Your word in Pig Latin is " << word << endl;
	}

	else if (word.length() > 2)

	{

		char firstletter = word[0];
		if (firstletter == 'a' || firstletter == 'A' || firstletter == 'e' || firstletter == 'E' || firstletter == 'i' || firstletter == 'I' || firstletter == 'o' || firstletter == 'O' || firstletter == 'u' || firstletter == 'U')
		{
			cout << "Your word in pig latin is " << word + pigLatinAppend << endl;
		}

		else
		{
			char lastletter = word[0];
			string NewWord = word.erase(0, 1) + lastletter + pigLatinAppend;
			cout << "Your word in pig latin is " << NewWord << endl;
		}
	}
	goAgain();
	return 0;

}
void goAgain()
{
	char answer;
	cout << "Would you like to do another one? Enter Y or N." << endl;
	cin >> answer; 

	if (answer == 'y' || answer == 'Y')
	{
		getinputs();
	}
	else if (answer == 'n' || answer == 'N')
	{
		exit;
	}

	else if (answer != 'y' || answer != 'Y' || answer != 'n' || answer != 'N')
	{
		cout << "Invalid Option." << endl;
		goAgain();
	}
	

}
