#include <iostream>
#include "Screen.cpp"
using namespace std;
using namespace scrn;

int main()
{
	string text = "She wont stop farting like real stinky tho.";
	string options[4] = {"A.Marry her", "b.Flirt", "c.Cry", "d.Talk about the downfall of the Holy Roman Empire"};
	Screen myScreen;
	myScreen.printDialog(text);
	myScreen.printOptions(options);
	
	return 0;
}
