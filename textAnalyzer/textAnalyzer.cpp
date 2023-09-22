
#include <iostream>
#include <cmath>
#include <cctype>
#include <fstream>
#include <iomanip>

using namespace std;


int main()
{


	ifstream(uahSample);
	uahSample.open("C:/Users/smith/source/repos/CS121/Data/UAH_Sample.txt");

	char word;
	int wordLength = 0;
	int wordLengths[11] = { 0 }; // word lengths stored in an array
	char letter;
	int letters;
	int letterCounts[26] = { 0 };  // letter counts stored in an array

	if (!uahSample)
	{
		cout << "Error opening the file." << endl;
		return 1;
	}

	while (uahSample.get(word))
	{
		
		if ((word >= 'a' && word <= 'z') || (word >= 'A' && word <= 'Z') || word == '\'' || (word == '-' && isalpha(uahSample.peek()))) {
			wordLength++;
		}
		
		else if (word == ' ' || word == '\n') {
			if (wordLength > 0 && wordLength <= 10) {
				wordLengths[wordLength]++;
			}
			wordLength = 0;
		}

	}


	if (wordLength > 0 && wordLength <= 10) {
		wordLengths[wordLength]++;
	}

	uahSample.close();
	uahSample.open("C:/Users/smith/source/repos/CS121/Data/UAH_Sample.txt");

	while (uahSample.get(letter))
	{
		if (isalpha(letter))
		{
			letter = toupper(letter);  // converts characters to uppercase 

			int index = letter - 'A';
			
			letterCounts[index]++;
		}
	}
	
	
	cout << left << setw(14) << "Word Length      Count" << endl;
	cout << "------------    -------" << endl;

	for (int i = 1; i <= 10; i++)
	{
		cout << left;
		cout << "     " << setw(14) << i << wordLengths[i] << endl;
	}

	cout << endl;

	cout << left << setw(14) << "Letter     Count" << endl;
	cout << "-------   -------" << endl;

	for (char letter = 'A'; letter <= 'Z'; letter++) {
		int index = letter - 'A';
		cout << left << "   " << setw(9) << letter << letterCounts[index] << endl;
	}

	cout << endl;

	system("PAUSE");

	return 0;


}

 