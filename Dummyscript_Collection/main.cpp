#include <iostream>  // For input and output operations  
#include <locale>    // For setting the locale  
#include <windows.h> // For Windows-specific functions like Sleep  
#include "extraFunc.h" // Custom header file for additional functions  
#include "algorithms.h" // Custom header file for algorithm implementations 

Algorithms* algorithms = new Algorithms();

// Define the menuOPT variable, used to store the user's menu selection.  
int menuOPT{};

// This is the program's startup screen, providing a list of available  
// algorithms.  
int main()
{
	// Set the locale to the system's default for proper character encoding.  
	setlocale(LC_ALL, "");

	// Display the list of available algorithms to the user.  
	std::cout << "Available Algorithms: \n";
	std::cout << "1 - Student Grade Algorithm.\n";
	std::cout << "2 - Triangle Sides Algorithm.\n";
	std::cout << "3 - Number Identifier Algorithm.\n";
	std::cout << "4 - Age Verification Algorithm.\n";
	std::cout << "5 - Chatbot Algorithm.\n";
	std::cout << "6 - USD <-> BRL Exchange Algorithm.\n";
	std::cout << "7 - Circle Area Algorithm.\n";
	std::cout << "8 - Distance to age 100 Algorithm.\n";
	std::cout << "9 - Median Grade Algorithm.\n";
	std::cout << "10 - Bulk Purchase Algorithm.\n";
	std::cout << "11 - Salary Range Algorithm.\n";
	std::cout << "12 - Temperature Algorithm.\n";
	std::cout << "13 - Product List Algorithm.\n";

	// Prompt the user to pick an algorithm by entering a number.  
	std::cout << "\nPick one: ";
	std::cin >> menuOPT; // Read the user's input into menuOPT.  
	clearConsole(); // Clear the console screen (defined in extraFunc.h).  

	// Use a switch statement to handle the user's menu selection.  
	switch (menuOPT) {
	case 1:
		algorithms->grade(); // Call the grade algorithm function.  
		break;

	case 2:
		algorithms->triangle(); // Call the triangle algorithm function.
		break;

	case 3:
		algorithms->number(); // Call the number identifier algorithm function.  
		break;

	case 4:
		algorithms->age(); // Call the age verification algorithm function.  
		break;

	case 5:
		algorithms->chatbot(); // Call the chatbot algorithm function.  
		break;

	case 6:
		algorithms->exchange(); // Call the currency exchange algorithm function.
		break;

	case 7:
		algorithms->circle(); // Call the circle area algorithm function.;
		break;

	case 8:
		algorithms->centenary();
		break;

	case 9:
		algorithms->gradeMedian();
		break;

	case 10:
		algorithms->bulkPurchase();
		break;

	case 11:
		algorithms->salaryRange();
		break;

	case 12:
		algorithms->temperature();
		break;

	case 13:
		algorithms->productList();
		break;

	default:
		// Handle invalid or unimplemented menu options.  
		std::cout << "Error: Selected algorithm is not yet implemented! "
			"Returning to selection screen.\n";
		Sleep(2000); // Pause for 2 seconds before clearing the screen.  
		clearConsole(); // Clear the console screen.  
		main(); // Restart the program by calling main() again.  
		break;
	}

	return 0; // Exit the program.  
}