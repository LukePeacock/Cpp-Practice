//
//  vowel_counter.cpp
//  
//	This program will take a user input string and count the number of vowels
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
 * Count the number of vowels in the word
 *
 * @param: str: the word being counted
 */
int VowelCount(std::string str) {
	int count = 0;
	for(char& c : str) {				
		if (is_vowel(c))
			count += 1;
	}	
	return count;	
}



/*
 * Main Function. Takes an input string and counts the number of vowels
 *
 * @param: argv[0] Program Name
 * @param: argv[1] Input String or phrase
 * 
 */
int main(int argc, char **argv) {
		
	//Output errors for incorrect number of parameters
	if (argc < 2) 
		std::cout << "Missing One or More Parameters, Please Supply a String or Phrase To Count The Number of Vowels";
	else if (argc == 2)
	{	
		std::stringstream iss((std::string)argv[1]);	//create stringstream for input string
		int vowel_count = 0;	//create output variable
		std::string word; 	// Create variable for loop assignment

		while(iss >> word)	// While there are words left, count vowels in word
		{
     		vowel_count += VowelCount(word);
		}
	
		//output
		std::cout << "\nYour input string was: \"" << argv[1] << "\"";
		std::cout << "\nThere " << ((vowel_count == 1)? "is " : "are " )<< vowel_count;
		std::cout << ((vowel_count == 1)? " vowel" : " vowels") << " in this string" << std::endl;
	}
	else 
		std::cout << "Too Many Parameters, Please Supply a String or Phrase To Count The Number of Vowels";
}
