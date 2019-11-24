//
//  String-Reverse.cpp
//  
//	This program will take a user input string and reverse it.
//
//  Created by Luke Peacock on 24/11/2019.
//  Copyright © 2019 Luke Peacock. All rights reserved.
//

#include <iostream>

std::string reverseStr(std::string input_string);

/*
 * Main Function. Takes an input string and reverses it
 *
 * @param: argv[0] Program Name
 * @param: argv[1] Input String 
 * 
 */
int main(int argc, char **argv) {
		
	//Output errors for incorrect number of parameters
	if (argc < 2) 
		std::cout << "\nMissing One or More Parameters, Please Supply a String To Reverse" << std::endl;
	if (argc == 2)
	{
		std::string input_string = argv[1];
		// Reverse String
		std::string output_string = reverseStr(input_string);
			
		std::cout << "Your input string was: \"" << input_string << "\"";
		std::cout << "\n\"" << input_string << "\" reversed is: \"" << output_string << "\"" << std::endl;
	}
}

/* 
 * Reverse the input string
 *
 * @param: inputString: the string to be reversed; 
 */
std::string reverseStr(std::string input_string) {		
	reverse(input_string.begin(), input_string.end());
	return input_string;
}

