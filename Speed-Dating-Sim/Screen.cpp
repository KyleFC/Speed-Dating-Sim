#pragma once
#include <vector>;
#include "Screen.h";
using namespace std;
using namespace scrn;

string* Screen::getCharacter(char letter)
{
	string* asciiLetter = NULL;
	//Finds out which character 'letter' is
	switch (letter)
	{
	case('A'):
		asciiLetter = A;
		break;
	case('B'):
		asciiLetter = B;
		break;
	case('C'):
		asciiLetter = C;
		break;
	case('D'):
		asciiLetter = D;
		break;
	case('E'):
		asciiLetter = E;
		break;
	case('F'):
		asciiLetter = F;
		break;
	case('G'):
		asciiLetter = G;
		break;
	case('H'):
		asciiLetter = H;
		break;
	case('I'):
		asciiLetter = I;
		break;
	case('J'):
		asciiLetter = J;
		break;
	case('K'):
		asciiLetter = K;
		break;
	case('L'):
		asciiLetter = L;
		break;
	case('M'):
		asciiLetter = M;
		break;
	case('N'):
		asciiLetter = N;
		break;
	case('O'):
		asciiLetter = O;
		break;
	case('P'):
		asciiLetter = P;
		break;
	case('Q'):
		asciiLetter = Q;
		break;
	case('R'):
		asciiLetter = R;
		break;
	case('S'):
		asciiLetter = S;
		break;
	case('T'):
		asciiLetter = T;
		break;
	case('U'):
		asciiLetter = U;
		break;
	case('V'):
		asciiLetter = V;
		break;
	case('W'):
		asciiLetter = W;
		break;
	case('X'):
		asciiLetter = X;
		break;
	case('Y'):
		asciiLetter = Y;
		break;
	case('Z'):
		asciiLetter = Z;
		break;
		//========================
	case('1'):
		asciiLetter = ONE;
		break;
	case('2'):
		asciiLetter = TWO;
		break;
	case('3'):
		asciiLetter = THREE;
		break;
	case('4'):
		asciiLetter = FOUR;
		break;
	case('5'):
		asciiLetter = FIVE;
		break;
	case('6'):
		asciiLetter = SIX;
		break;
	case('7'):
		asciiLetter = SEVEN;
		break;
	case('8'):
		asciiLetter = EIGHT;
		break;
	case('9'):
		asciiLetter = NINE;
		break;
	case('0'):
		asciiLetter = ZERO;
		break;
		//========================
	case(' '):
		asciiLetter = SPACE;
		break;
	case('.'):
		asciiLetter = PERIOD;
		break;
	case('?'):
		asciiLetter = QUESTIONMARK;
		break;
	case('!'):
		asciiLetter = EXCLAMATIONPOINT;
		break;
	case(','):
		asciiLetter = COMMA;
		break;
	case('\''):
		asciiLetter = APOSTROPHE;
		break;
		//========================
	default:
		asciiLetter = SPACE;
		break;
	}
	return asciiLetter;
}

/// <summary>
/// Internal function used to print a marquee of length 
/// lineLength*8
/// </summary>
/// <param name="lineLength">Number of Alphanumeric characters per line.</param>
void Screen::printMarquee(int lineLength)
{
	cout << " =";
	for (int i = 0; i < lineLength; i++)
	{
		cout << "========";
	}
	cout << endl;
}
	
/// <summary>
/// Takes a string of text, converts it to its
/// ASCII art equivalent, and prints to console.
/// </summary>
/// <param name="text">Some words, usually dialog</param>
void Screen::printDialog(string text)
{
	/*
		VARIABLES:
		------------------------------------------------------------------------------------
		Datatype  |Name        |Description
		------------------------------------------------------------------------------------
		const int  lineLength  : Determines how many characters can be typed per line
		int        textLength  : How long the text is that needs conversion
		int        lines       : How many lines of text will need to be printed
		int        padding     : How many spaces need to be appended to the text
									so that each line reaches the lineLength amount

		string[][] asciiMatrix : Used for storing ASCII text in the order that it
									will be printed
		string*    asciiLetter : Used to determine which character corresponse to
									which ASCII text character
		string     parcedText  : Contains individual line of text with char length
									determined lineLength
	*/
	const int lineLength = 15; //fuck this const, it only works if I put it in the function.
	//const int lineLength = length;
	int textLength = text.size();
	int lines = ((textLength) / lineLength) + 1;
	int padding = lineLength - ((textLength) % lineLength);


	//string  asciiMatrix[lineLength][6] = { {} };
	vector<vector<string>> asciiMatrix(6); //2D vector with 6 rows
	string* asciiLetter = NULL;
	string  parcedText = "";


	if (padding != 0) //Checks if we need to add any padding to the end of the text
	{
		lines -= 1;

		for (int i = 0; i < padding; i++)
		{
			text.append(" ");
		}
	}

	printMarquee(lineLength); //Prints top border

	for (int a = 0; a < lines + 1; a++)
	{
		cout << 'here';
		asciiMatrix[a] = vector<string>(lineLength); //specifies how many cols(characters) per line
		parcedText = text.substr((a * lineLength), lineLength);

		for (int i = 0; i < lineLength; i++)//Converts individual chars from string into Ascii Art
		{
			//Grabs letter
			char letter = toupper(parcedText.at(i));

			asciiLetter = getCharacter(letter);


			for (int j = 0; j < 6; j++) //Copies strings to Matrix 
			{
				asciiMatrix[i][j] = *(asciiLetter + j);
				cout << *(asciiLetter + j);
			}
		}
		for (int x = 0; x < 6; x++) //Prints line of text
		{
			cout << "| ";
			for (int y = 0; y < lineLength; y++)
			{
				cout << asciiMatrix[y][x];
			}
			cout << "|";
			cout << endl;
		}
	}
	printMarquee(lineLength); //Prints Bottom Border
}



void Screen::printOptions(string options[4])
{
	const int lineLength = 15;
	string  asciiMatrix[lineLength][6] = { {} };
	string* asciiLetter = NULL;
	string  parcedText = "";
	for (int a = 0; a < 4; a++)
	{

	}
	//char letter = toupper(parcedText.at());
}

};

