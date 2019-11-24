//
//  Pig-Latin.cpp
//  
//	This program will take a user input string and produce a Pig-Latin variant.
//
//  Created by Luke Peacock on 24/11/2019.
//  Copyright © 2019 Luke Peacock. All rights reserved.
//

#include <iostream>
#include <sstream>

// checks if the character 'c' is a vowel and returns either true of false
bool is_vowel(char c) 
{
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}


/* 
 * Translate word to pig latin.
 *
 * @param: str: string to be translate 
 * @param: alt: boolean, sets alternative translation on or off
 */
std::string PigLatinWord(std::string str, bool alt) {
	// If word begins with vowel and default translation, append 'way' to end and return
	if (is_vowel(str[0]) && !alt)
		return str.append("way");
	// If word begins with vowel and alternate translation, append vowel, and consanant group to end plus 'ay' and return
	else if (is_vowel(str[0]) && alt)
	{
		str += str[0];		// Move first vowel to end of string;
		str.erase(0,1);
		std::string output_string = str;	// create output string
		for(char& c : str) {				
			if (!is_vowel(c))	// If letter is not vowel, move to end of output
			{
				output_string += c;
				output_string.erase(0,1);
			}
			else 	// else string translates, return it
			{
				return output_string.append("ay");
			}
		}		
		return output_string;	// default return
	}
	else // Else append consonant and 'ay' to end and return
	{
		str += str[0];
		str.erase(0,1);
		str.append("ay");
		return str;
	}
	
}




/*
 * Main Function. Takes an input string and pig-latinizes it
 *
 * @param: argv[0] Program Name
 * @param: argv[1] Input String or phrase
 * 
 */
int main(int argc, char **argv) {
		
	//Output errors for incorrect number of parameters
	if (argc < 2) 
		std::cout << "Missing One or More Parameters, Please Supply a String or Phrase To Translate To Pig Latin";
	else if (argc == 2  || argc == 3)
	{
		bool alt = false;
		if (argc ==3) 
		{ 
			if (strcmp(argv[2], "-alt") == 0)
				alt = true;
			else 
			{	
				std::cout << "Parameter not recognised. Please use '-alt' to specify alternate translation\n";
				exit(0);
			}
		}
		std::stringstream iss((std::string)argv[1]);	//create stringstream for input string
		std::string output_string = "";	//create output variable
		std::string word; 	// Create variable for loop assignment

		while(iss >> word)	// While there are words left, translate them
		{
     		output_string += PigLatinWord(word, alt) +" " ;
		}
		
		output_string.erase(output_string.size()-1, 1); 	// remove final whitespace

		//output
		std::cout << "\nYour input string was: \"" << argv[1] << "\"";
		std::cout << "\nIn Pig-Latin this is: \"" << output_string << "\"" << std::endl;
	}
	else 
		std::cout << "Too Many Parameters, Please Supply a String or Phrase To Translate To Pig Latin";
}
