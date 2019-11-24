//
//  String-Reverse.cpp
//  
//	This program will take a user input string and reverse it.
//
//  Created by Luke Peacock on 24/11/2019.
//  Copyright © 2019 Luke Peacock. All rights reserved.
//

#include <iostream>

std::string reverseStr(std::string inputString);

/**
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
	// if (argc > 3)
	// 	std::cout << "\nToo Many Arguments! Please Supply 2 Sets of Coordiantes e.g. 'x,y,z' 'x,y,z'" << std::endl;
	if (argc == 2)
	{
		std::string inputString = argv[1];
		// Reverse String
		std::string outputString = reverseStr(inputString);
			
		std::cout << "Your input string was: \"" << inputString << "\"";
		std::cout << "\n\"" << inputString << "\" reversed is: \"" << outputString << "\"" << std::endl;
	}
}

/*
 * @param: inputString: the string to be reversed; 
 */
std::string reverseStr(std::string inputString) {		
	reverse(inputString.begin(), inputString.end());
	return inputString;
}

