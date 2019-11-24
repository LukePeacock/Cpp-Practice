# Palindrome Checker

This program takes an input string or phrase and tells the user if it is a palindrome, e.g.

```
./palindrome_checker hello

Your input string was: "hello"
This string is not a palindrome
```

The program uses a built in C++ function `isalnum` which returns true if the given character is an alphanumeric character. This allows the program to quickly check for and remove and non-alphanumeric characters. This means that allowances are made for punctuation, capitalisation, and word-dividers.


This program is called by: `./palindrome_check <string>` where `<string>` is the user input string. To test if a single word is a palindrome you do not need to use quotation marks, e.g.:

```
./palindrome_check racecar

Your input string was: "racecar"
With punctiation removed this became: "racecar"
This string is a paldindrome
```

To check if a phrase is a palindrome use quotation marks around the phrase, e.g.
```
 ./palindrome_check "A man, a plan, a canal, Panama!"

Your input string was: "A man, a plan, a canal, Panama!"
With punctiation removed this became: "amanaplanacanalpanama"
This string is a paldindrome
```



