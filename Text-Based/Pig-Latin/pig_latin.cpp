//
//  Pig-Latin.cpp
//  
//	This program will take a user input string and produce a Pig-Latin variant.
//
//  Created by Luke Peacock on 24/11/2019.
//  Copyright © 2019 Luke Peacock. All rights reserved.
//

#include <iostream>


// checks if the character 'c' is a vowel and returns either true of false
bool is_vowel(char c) 
{
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}


/* 
 * Reverse the input string
 *
 * @param: inputString: the string to be reversed; 
 */
std::string PigLatinWord(std::string str, bool alt) {
	// If word begins with vowel and default translation, append 'way' to end and return
	std::cout << alt;
	if (is_vowel(str[0]) && !alt)
		return str.append("way");
	// If word begins with vowel and alternate translation, append vowel, and consanant group to end plus 'ay' and return
	else if (is_vowel(str[0]) && alt)
	{
		std::cout << "\nvowel alt";
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
		std::cout << "\nconsonant";
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
	if (argc >= 2)
	{
		std::string input_string = argv[1];
		std::string output_string = "";
		// while(std::cin >> inputString)
		// {
     		// DO STUFF.
			if (argc == 3)
				if (strcmp(argv[2], "-alt") == 0)
					output_string += PigLatinWord(input_string, true);
				else 
					std::cout << "Parameter not recognised. Please use '-alt' to specify alternate translation";
     		else 
     			output_string += PigLatinWord(input_string, false);
		//}
			
		std::cout << "\nYour input string was: \"" << input_string << "\"";
		std::cout << "\nIn Pig-Latin this is: \"" << output_string << "\"" << std::endl;
	}
}
