# Pig Latin Translator

This program takes an input string or phrase and translates it to Pig Latin, e.g. 

```
./pig_latin pig

Your input string was: "pig"
In Pig-Latin this is: "igpay"
```

Pig Latin is a game in which words in English are altered by adding a fabricated suffix to the end of the word, typically 'ay' or 'way'.For example, "Pig" would become "igpay" (the "P" is moved from the beginning and has "ay" appended to create a suffix), another example "banana" becomes "ananabay". For words which begin with a vowel, such as "another", a suffix 'way' is added to the end. An alternate translation involves moving the initial vowel and its consonant cluster to the end of the string, and then appending the suffix 'ay' as with other words. For an alternate translation, "another" becomes "otheranay".


This program is called by: `./pig_latin <string> <options>` where `<string>` is the user input string, and `<options>` is an optional parameter allowing alternative translations. 

To use standard transation you use
```
./pig_latin <string>
```
For example:
```
./pig_latin every

Your input string was: "every"
In Pig-Latin this is: "everyway"
```


For alternative translations use:
```
./pig_latin <string> -alt
```
For example:
```
./pig_latin every -alt

Your input string was: "every"
In Pig-Latin this is: "eryevay"
```



The program also works for phrases e.g.
```
./pig_latin "hello hello"

Your input string was: "hello hello"
In Pig-Latin this is: "ellohay ellohay"
```
