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
	istringstream phrase(word);
	while (phrase >> word)
	{
		getline(phrase, word, ' ');

	}

	translateToPigLatin(word);// send inputs to translator
	

}

int translateToPigLatin(string word)
{


	string pigLatinAppend = "ay";

	if (word.compare("the") || word.compare("The") || word.compare("and") || word.compare("And") || word.compare("but") || word.compare("But") || word.compare("for") || word.compare("For") || word.compare("nor") || word.compare("Nor") || word.compare("yet") || word.compare("Yet"))
	{
		cout << "Your word in Pig Latin is " << word << endl;
	
	}

	if (word.length() <= 2)
	{
		cout << "Your word in Pig Latin is " << word << endl;
	}

	if (word.length() > 2)

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
	
	return 0;

}

