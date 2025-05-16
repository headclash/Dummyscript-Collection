 //this is a multi-program file. code is manually activated/deactivated with 
 //comments because i don't know how to properly execute multiple sources lmao.

#include <iostream>
#include <locale>
#include "extraFunc.h"
#include "algorithms.h"

int menuOPT{};

// This is the program's startup screen. Providing a list with many algorithms.
int main()
{
	setlocale(LC_ALL, "");


	std::cout << "1 - Student Grade Algorithm.\n";
	std::cout << "2 - Triangle Sides Algorithm.\n";
	std::cout << "3 - Number Polarity Algorithm.\n";
	std::cout << "4 - Age Verification Algorithm.\n";
	std::cout << "5 - Chatbot Algorithm.\n";
	std::cout << "6 - \n";
	std::cout << "7 - \n";
	std::cout << "8 - \n";
	std::cout << "9 - \n";
	std::cout << "10 - \n";
	std::cout << "Pick one:";
	std::cin >> menuOPT;
	clearConsole();

	switch (menuOPT) {
	case 1:
		grade();
		break;
		

	case 2:
		triangle();
		break;
		

	case 3:
		number();
		break;
		

	case 4:
		age();
		break;
		

	case 5:
		chatbot();
		break;
		
	}

	return 0;

}