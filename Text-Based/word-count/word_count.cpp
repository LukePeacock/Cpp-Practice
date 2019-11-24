//
//  word_count.cpp
//  
//	This program will take a user input string and count the number of words
//
//  Created by Luke Peacock on 24/11/2019.
//  Copyright © 2019 Luke Peacock. All rights reserved.
//

#include <iostream>
#include <sstream>


/* 
 * Count the number of word in the string
 *
 * @param: str: the string being counted
 */
int WordCount(std::string str) {

	std::stringstream iss(str);	//create stringstream for input string
	int count = 0;	//create output variable
	std::string word; 	// Create variable for loop assignment

	while(iss >> word)	// While there are words left, count vowels in word
	{
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
		int word_count = WordCount((std::string)argv[1]);
		
	
		//output
		std::cout << "\nYour input string was: \"" << argv[1] << "\"";
		std::cout << "\nThere " << ((word_count == 1) ? "is " : "are " )<< word_count;
		std::cout << ((word_count > 1)? " words" : " word") <<" in this string" << std::endl;
	}
	else 
		std::cout << "Too Many Parameters, Please Supply a String or Phrase To Count The Number of Vowels";
}
