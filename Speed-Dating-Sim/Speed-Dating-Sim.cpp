#include <iostream>
#include "Screen.h"
using namespace std;

int main()
{
	string text = "a1234567890a!!!!!?.,'asdf";
	string options[4] = {"Marry her", "Flirt", "Cry", "Talk about the downfall of the Holy Roman Empire"};
	Screen myScreen;
	myScreen.printDialog(text);
	//myScreen.printOptions(options);
	
	return 0;
}
