// Copyright (c) 2023 Julien Lamoureux All rights reserved.
// .
// Created by: Julien Lamoureux
// Date: November 7, 2023
// This program program shows whether a letter is a vowel or consonant

#include <iostream>

int main() {
    // declare variables
    std::string alphabetGuessString, alphabetCharacter, wordIncludeOtherVowels;
    int alphabetGuessInt;

    // get the guess for the alphabet
    std::cout << "How many letters are in the alphabet?";
    std::cin >> alphabetGuessString;

    try {
        // convert  the user number to an integer
        alphabetGuessInt = std::stoi(alphabetGuessString);

        // if the user guessed 26, then tell them they were right
        if (alphabetGuessInt == 26) {
            std::cout << "Right! There are 26 letters in the alphabet!";
        } else {
            // otherwise tell them they are wrong
            std::cout << alphabetGuessString <<
            " is wrong! There are 26 letters in the alphabet!";
        }
        // get the user character for the alphabet
        std::cout << "\nChose a word, and pick a character out of it.";
        std::cout << "Enter it in the program and see if it is a vowel or not:";
        std::cin >> alphabetCharacter;

        //  if alphabet character is a, e, i, o, or u, say it is a vowel.
         if (
            alphabetCharacter == "a"
            || alphabetCharacter == "e"
            || alphabetCharacter == "i"
            || alphabetCharacter == "o"
            || alphabetCharacter == "u"
            || alphabetCharacter == "A"
            || alphabetCharacter == "E"
            || alphabetCharacter == "I"
            || alphabetCharacter == "O"
            || alphabetCharacter == "U"
        ) {
             std::cout << alphabetCharacter << " is a vowel\n";
         } else if (alphabetCharacter == "y" || alphabetCharacter == "Y") {
             // if the user enter y, ask how many other vowels are in their word
             std::cout << "Any other vowels in the word with y(yes/no)?";
             std::cin >> wordIncludeOtherVowels;

             // if there is more than 1 vowel in their word, y is a consonant
             if (wordIncludeOtherVowels == "yes") {
                 std::cout << alphabetCharacter << " is a consonant\n";
             } else if (wordIncludeOtherVowels == "no") {
                 // if there is 1 vowel in their word, y is a vowel
                 std::cout << alphabetCharacter << " is a vowel\n";
             } else {
                 // tell them to say yes or no
                 std::cout << "Please enter yes or no for this section\n";
             }
         } else {
             // otherwise their letter is a consonant
             std::cout << alphabetCharacter << " is a consonant\n";
         }
        } catch (std::invalid_argument) {
        // if the guess is not an int, then tell them their input is invalid
        std ::cout << alphabetGuessString << " is not a valid integer.\n";
        }
}
