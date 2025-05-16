#include <iostream>  // For input and output operations  
#include <locale>    // For setting the locale  
#include <windows.h> // For Windows-specific functions like Sleep  
#include "extraFunc.h" // Custom header file for additional functions  
#include "algorithms.h" // Custom header file for algorithm implementations  

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
   std::cout << "1 - Student Grade Algorithm.\n"; // Option 1: Grade calculation  
   std::cout << "2 - Triangle Sides Algorithm.\n"; // Option 2: Triangle validation  
   std::cout << "3 - Number Identifier Algorithm.\n"; // Option 3: Number identification  
   std::cout << "4 - Age Verification Algorithm.\n"; // Option 4: Age verification  
   std::cout << "5 - Chatbot Algorithm.\n"; // Option 5: Chatbot interaction  
   std::cout << "6 - Not yet implemented.\n"; // Placeholder for future implementation  
   std::cout << "7 - Not yet implemented.\n"; // Placeholder for future implementation  
   std::cout << "8 - Not yet implemented.\n"; // Placeholder for future implementation  
   std::cout << "9 - Not yet implemented.\n"; // Placeholder for future implementation  
   std::cout << "10 - Not yet implemented.\n"; // Placeholder for future implementation  

   // Prompt the user to pick an algorithm by entering a number.  
   std::cout << "Pick one: ";  
   std::cin >> menuOPT; // Read the user's input into menuOPT.  
   clearConsole(); // Clear the console screen (defined in extraFunc.h).  

   // Use a switch statement to handle the user's menu selection.  
   switch (menuOPT) {  
   case 1:  
       grade(); // Call the grade algorithm function.  
       break;  

   case 2:  
       triangle(); // Call the triangle algorithm function.  
       break;  

   case 3:  
       number(); // Call the number identifier algorithm function.  
       break;  

   case 4:  
       age(); // Call the age verification algorithm function.  
       break;  

   case 5:  
       chatbot(); // Call the chatbot algorithm function.  
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