// Chapter4exercise16.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string> // i added this too in the hypothesis 

int main()
{

    // Given a string find the word that appears the most times 
    // create an array for each letter setting the value of each element to 0 
    // we will convert the string to all uppercase or all lowercase 
    // loop over each letter in the string and add 1 to the corresponding bucket in the array 
  /* std::string sentence("Given a string, find the letter that occurs the most times in the string.");
    int letter[26];
    for (int i = 0; i < 26; i++)
        letter[i] = 0;
    for (int l = 0; l < sentence.length(); l++) {
        int index = (int)sentence.at(l) - 65;
        if (index >= 32) index -= 32; // handle the lower case letter
        if (index > 0 && index < 26) {
            letter[index] = 1;
        }
        else {
            // anything else that isnt a letter that number
        }
        int modeIndex = -1;
        int modeValue = -1;
        int minIndex = -1;
        int maxIndex = -1;
        for (int i = 0; i < 26; i++) {
            if (letter[i] > modeValue) {
                modeIndex = i;
                modeValue = letter[i];

                  } //if this letter has more
            if (minIndex == -1 && letter[i] > 0) minIndex = i;
            if (letter[i] > 0) maxIndex = i;
        } //for each letter
        
    }//for (int l = 0; l < sentence.length(); l++)*/

std::string sentence("Given a string find the word that appears the most times");
int letter[26];

for (int i = 0; i < 26; i++)
    letter[i] = 0;
for (int l = 0; l < sentence.length(); l++) {
    int index = (int)sentence.at(l) - 65;
    if (index >= 32) index -= 32; // handle the lower case letter
    if (index >= 0 && index < 26) {
        //letter[index] = 1;
        letter[index]++;
    }
    else {
        // anything else that isnt a letter that number 
    }//else
  } // for loop denoted as sentence length 
    // rhythm
    // [0,0,0,0,0,0,0,2,0,0,0,0,1,0,0,0,0,1,0,1,0,0,0,0,1,0]
int modeIndex = -1;
int modeValue = -1;
int minIndex = 0;

for (int i = 0; i < 26; i++) {
    if (letter[i] > modeValue) {
        modeIndex = i;
        modeValue = letter[i];

    } // if this letter has more
    if (letter[i]<letter[minIndex]) minIndex = i; // Guts of the if  before ::minIndex == -1 && letter[i] > 0
    //if (letter[i] > 0) maxIndex = i;
} // for each letter
char maxletter = modeIndex + 65;
std::cout << "the most frequent letter is " << maxletter << ". It occurs " << modeValue << " times." << std::endl;
char minletter = minIndex + 65;
std::cout<<"the least frequent letter is " << minletter << ". It occurs " << letter[minletter] << " times." << std::endl;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
