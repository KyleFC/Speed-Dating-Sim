#pragma once
#include <vector>;
using namespace std;

class Screen
{
private:
	const int lineLength = 15;
	//Alphabet in Ascii art form
	string A[6]
		= { "  ___   ", " / _ \\  ", "/ /_\\ \\ ", "|  _  | ", "| | | | ", "\\_| |_/ " };
	string B[6]
		= { "______  ", "| ___ \\ ", "| |_/ / ", "| ___ \\ ", "| |_/ / ", "\\____/  " };
	string C[6]
		= { " _____  ", "/  __ \\ ", "| /  \\/ ", "| |     ", "| \\__/\\ ", " \\____/ " };
	string D[6]
		= { "______  ", "|  _  \\ ", "| | | | ", "| | | | ", "| |/ /  ", "|___/   " };
	string E[6]
		= { " _____  ", "|  ___| ", "| |__   ", "|  __|  ", "| |___  ", "\\____/  " };
	string F[6]
		= { "______  ", "|  ___| ", "| |_    ", "|  _|   ", "| |     ", "\\_|     " };
	string G[6]
		= { " _____  ", "|  __ \\ ", "| |  \\/ ", "| | __  ", "| |_\\ \\ ", " \\____/ " };
	string H[6]
		= { " _   _  ", "| | | | ", "| |_| | ", "|  _  | ", "| | | | ", "\\_| |_/ " };
	string I[6]
		= { " _____  ", "|_   _| ", "  | |   ", "  | |   ", " _| |_  ", " \\___/  " };
	string J[6]
		= { "   ___  ", "  |_  | ", "    | | ", "    | | ", "/\\__/ / ", "\\____/  " };
	string K[6]
		= { " _   __ ", "| | / / ", "| |/ /  ", "|    \\  ", "| |\\  \\ ", "\\_| \\_/ " };
	string L[6]
		= { " _      ", "| |     ", "| |     ", "| |     ", "| |____ ", "\\_____/ " };
	//string M[6]
		//= { "___  ___ ", "|  \\/  | ", "| .  . | ", "| |\\/| | ", "| |  | | ", "\\_|  |_/ " };
	string M[6]
		= { "__  ___ ", "| \\/  | ", "|.  . | ", "||\\/| | ", "||  | | ", "\\|  |_/ " };
	string N[6]
		= { " _   _  ", "| \\ | | ", "|  \\| | ", "| . ` | ", "| |\\  | ", "\\_| \\_/ " };
	string O[6]
		= { " _____  ", "|  _  | ", "| | | | ", "| | | | ", "\\ \\_/ / ", " \\___/  " };
	string P[6]
		= { "______  ", "| ___ \\ ", "| |_/ / ", "|  __/  ", "| |     ", "\\_|     " };
	string Q[6]
		= { " _____  ", "|  _  | ", "| | | | ", "| | | | ", "\\ \\/' / ", " \\_/\\_\\ " };
	string R[6]
		= { "______  ", "| ___ \\ ", "| |_/ / ", "|    /  ", "| |\\ \\  ", "\\_| \\_| " };
	string S[6]
		= { " _____  ", "/  ___| ", "\\ `--.  ", " `--. \\ ", "/\\__/ / ", "\\____/  " };
	string T[6]
		= { " _____  ", "|_   _| ", "  | |   ", "  | |   ", "  | |   ", "  \\_/   " };
	string U[6]
		= { " _   _  ", "| | | | ", "| | | | ", "| | | | ", "| |_| | ", " \\___/  " };
	string V[6]
		= { " _   _  ", "| | | | ", "| | | | ", "| | | | ", "\\ \\_/ / ", " \\___/  " };
	//string W[6]
		//= { " _    _  ", "| |  | | ", "| |  | | ", "| |/\\| | ", "\\  /\\  / ", " \\/  \\/  " };
	string W[6]
		= { " _   _  ", "||  | | ", "||  | | ", "||/\\| | ", "\\ /\\  / ", " V  \\/  " };
	string X[6]
		= { "__   __ ", "\\ \\ / / ", " \\ V /  ", " /   \\  ", "/ /^\\ \\ ", "\\/   \\/ " };
	string Y[6]
		= { "__   __ ", "\\ \\ / / ", " \\ V /  ", "  \\ /   ", "  | |   ", "  \\_/   " };
	string Z[6]
		= { " ______ ", "|___  / ", "   / /  ", "  / /   ", "./ /___ ", "\\_____/ " };
	
	//Numbers
	string ONE[6]
		= { "  __    ", " /  |   ", " `| |   ", "  | |   ", "  | |   ", " \\___/  " };
	string TWO[6]
		= { " _____  ", "/ __  \\ ", "`' / /' ", "  / /   ", "./ /___ ", "\\_____/ " };
	string THREE[6]
		= { " _____  ", "|____ | ", "    / / ", "    \\ \\ ", ".___/ / ", "\\____/  " };
	string FOUR[6]
		= { "   ___  ", "  /   | ", " / /| | ", "/ /_| | ", "\\___  | ", "    |_/ " };
	string FIVE[6]
		= { " _____  ", "|  ___| ", "|___ \\  ", "    \\ \\ ", "/\\__/ / ", "\\____/  " };
	string SIX[6]
		= { "  ____  ", " / ___| ", "/ /___  ", "| ___ \\ ", "| \\_/ | ", "\\_____/ " };
	string SEVEN[6]
		= { " ______ ", "|___  / ", "   / /  ", "  / /   ", "./ /    ", "\\_/     " };
	string EIGHT[6]
		= { " _____  ", "|  _  | ", " \\ V /  ", " / _ \\  ", "| |_| | ", "\\_____/ " };
	string NINE[6]
		= { " _____  ", "|  _  | ", "| |_| | ", "\\____ | ", ".___/ / ", "\\____/  " };
	string ZERO[6]
		= { " _____  ", "|  _  | ", "| |/' | ", "|  /| | ", "\\ |_/ / ", " \\___/  " };

	//Special Characters
	string SPACE[6]
		= { "        ", "        ", "        ", "        ", "        ", "        " };
	string PERIOD[6]
		= { "        ", "        ", "        ", "        ", " _      ", "(_)     " };
	string QUESTIONMARK[6]
		= { " ___    ", "|__ \\   ", "   ) |  ", "  / /   ", " |_|    ", " (_)    " };
	string EXCLAMATIONPOINT[6]
		= { " _      ", "| |     ", "| |     ", "| |     ", "|_|     ", "(_)     " };
	string COMMA[6]
		= { "        ", "        ", "        ", " _      ", "( )     ", "|/      " };
	string APOSTROPHE[6]
		= { " _      ", "( )     ", "|/      ", "        ", "        ", "        " };

	string* getCharacter(char letter)
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
	void printMarquee()
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
	void printText(string text)
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
		//const int lineLength = 15; //fuck this const, it only works if I put it in the function.
		//const int lineLength = length;
		int textLength = text.size();
		int lines = ((textLength) / lineLength) + 1;
		int padding = lineLength - ((textLength) % lineLength);


		//string  asciiMatrix[lineLength][6] = { {} };
		vector<vector<string>> asciiMatrix(lineLength); //2D vector with 6 rows
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

		for (int a = 0; a < lines + 1; a++)
		{

			parcedText = text.substr((a * lineLength), lineLength);

			for (int i = 0; i < lineLength; i++)//Converts individual chars from string into Ascii Art
			{
				//Grabs letter
				char letter = toupper(parcedText.at(i));

				asciiLetter = getCharacter(letter);
				asciiMatrix[i] = vector<string>(6); //specifies how many cols(characters) per line

				for (int j = 0; j < 6; j++) //Copies strings to Matrix 
				{
					asciiMatrix[i][j] = *(asciiLetter + j);
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
	}

public:


	void printDialog(string text)
	{
		printMarquee();
		printText(text);
		printMarquee();
	}

	/// <summary>
	/// Prints potential actions the player can take
	/// </summary>
	/// <param name="options">List of 4 options the player can select.</param>
	void printOptions(string options[4])
	{
		for(int a = 0; a < 4; a++)
		{
			printText(options[a]);
		}
		printMarquee();
	}

};

