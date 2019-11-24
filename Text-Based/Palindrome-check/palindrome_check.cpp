//
//  palindrome_check.cpp
//  
//	This program will take a user input string and check if it is a palindrome
//
//  Created by Luke Peacock on 24/11/2019.
//  Copyright © 2019 Luke Peacock. All rights reserved.
//

#include <iostream>
#include <sstream>


/* 
 * Check if phrase is equal in reverse
 *
 * @param: str1: the phrase being checked
 */
bool isPaldindrome(std::string str) {
	return true;
}


/* 
 *	Remove all punctuation from the given string 
 *
 * isalnum(c) checks if character c is an alphanumeric character.
 * If it is not, remove it from the string
 *
 * @param: str - string to remove punctuation from
 * 
 */
void removePunctuation(std::string &str)
{
	std::string nStr = str;	// Temporary new string
	for (char & c: str)	
	{
		if (!isalnum(c))			// For each character in original string, 
			nStr.erase(nStr.find(c), 1);		// if it is not alphanumeric, remove it from new string
	}
	str = nStr; 	// Replace original string with new string containing no punctuation
}


/*
 * Main Function. Takes an input string and checks if its a palindrome
 *
 * @param: argv[0] Program Name
 * @param: argv[1] Input String or phrase
 * 
 */
int main(int argc, char **argv) {
		
	//Output errors for incorrect number of parameters
	if (argc < 2) 
		std::cout << "Missing One or More Parameters, Please Supply a String or Phrase To Check";
	else if (argc == 2)
	{	
		
		std::string input_string = argv[1];	//create string  for input string
		std::transform(input_string.begin(), input_string.end(), input_string.begin(), ::tolower);

		removePunctuation(input_string);	// Remove all punctuation from the string
		
		std::string reverse_input = input_string;
		reverse(reverse_input.begin(), reverse_input.end());	// Create new string to store reverse of input string
		bool palindrome = strcmp(input_string.c_str(), reverse_input.c_str()) == 0;	// compare and set boolean
	
		//output
		std::cout << "\nYour input string was: \"" << argv[1] << "\"";
		std::cout << "\nWith punctiation removed this became: \"" << input_string << "\"";
		std::cout << "\nThis string " << ((palindrome) ? "is" : "is not")<< " a paldindrome" << std::endl;
	}
	else 
		std::cout << "Too Many Parameters, Please Supply a String or Phrase To Check";
}
