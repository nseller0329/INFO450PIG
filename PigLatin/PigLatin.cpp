// PigLatin.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string> 
#include <sstream>
#include <cctype>
#include "stdio.h"

using namespace std;
int getinputs();
int translateToPigLatin(string word);
void goAgain();

int main()
{
	getinputs(); // starts function to get inputs from user
	goAgain(); //goes to function to ask user if they want to do another one
    return 0;
}

int getinputs() // gets inputs from users
{
	string word;
	cout << "Please enter a word." << endl;
	cin >> word;

		if (word.length () > 47 || isdigit (word[0]) ) // checks character length and if there is a number as the first letter
		{
			cout << "Invalid." << endl;
			return -1;
		 // send the user back to main since it has "failed" 
		}
		if (word.length ()<= 47) // if the word is ok it will get sent on 
		{
			cout << "You entered " << word << endl;
			translateToPigLatin(word);// send inputs to translator
		}
		return 0;
}

int translateToPigLatin(string word) //takes in the word from the getinputs funtion 
{
	string pigLatinAppend = "ay";

	if (word == "the" || word=="The" || word=="and" || word=="And" || word=="but" || word=="But" || word=="for" || word=="For" || word=="nor" || word=="Nor" || word=="yet" || word=="Yet") //check for articles
	{
		cout << "Your word in Pig Latin is " << word << endl;
		
	}

	else if (word.length() <= 2) //check for words that are articles but 2 characters or less
	{
		cout << "Your word in Pig Latin is " << word << endl;
	}

	else if (word.length() > 2) // all other approved words

	{

		char firstletter = word[0];
		if (firstletter == 'a' || firstletter == 'A' || firstletter == 'e' || firstletter == 'E' || firstletter == 'i' || firstletter == 'I' || firstletter == 'o' || firstletter == 'O' || firstletter == 'u' || firstletter == 'U') //checks for vowel as first letter
		{
			cout << "Your word in pig latin is " << word + pigLatinAppend << endl; //adds 'ay' to the end of the word 
		}

		else // implying the word starts with a consonant 
		{
			char lastletter = word[0]; // takes the first letter of the word and stores it in a new variable 
			string NewWord = word.erase(0, 1) + lastletter + pigLatinAppend;  // makes a new word by erasing the first letter, adding the new variable lastletter and adding the 'ay' append variable 
			cout << "Your word in pig latin is " << NewWord << endl;
		}
	}
	
	return 0;

}
void goAgain()
{
	char answer;
	cout << "Would you like to do another one? Enter Y or N." << endl;
	cin >> answer; 
	if (answer == 'y' || answer == 'Y') // if the answer is y the user will get sent back to getinputs function 
	{
		getinputs();
	}
	else if (answer == 'n' || answer == 'N') // if the answer is n the user will exit the program 
	{
		return;
	}
	else if (answer != 'y' || answer != 'Y' || answer != 'n' || answer != 'N') // if the user enters a wrong choice they will get prompted again 
	{
		cout << " Invalid Option." << endl;
		goAgain();
	}
	

}
