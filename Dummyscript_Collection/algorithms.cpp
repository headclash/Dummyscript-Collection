#include "algorithms.h"

/*Function to check if a student has a passing grade or if they'll be sent to
 recovery*/
void Algorithms::grade()
{
	setlocale(LC_ALL, ""); // Set locale for proper character encoding

	double nota{}; // Variable to store the student's grade

	std::cout << "Insira a média do aluno: ";
	std::cin >> nota;

	if (nota > 10 || nota < 0) {
		std::cout << "Nota inválida. Tente novamente.\n";
		return grade();
	}

	if (nota == 10) {
		// If the grade is 10, the student achieved the maximum score
		std::cout << "O aluno tirou a nota máxima! Parabéns!";
		return;
	}

	if (nota >= 7) {
		std::cout << "O aluno foi aprovado.";
		return;
	}

	if (nota >= 1) {
		std::cout << "O aluno ficou em recuperação.";
		return;
	}
}

// Function to check if a triangle is equilateral
void Algorithms::triangle()
{
	setlocale(LC_ALL, ""); // Set locale for proper character encoding

	double l1{}; // Variable to store the first side of the triangle
	double l2{}; // Variable to store the second side of the triangle
	double l3{}; // Variable to store the third side of the triangle

	std::cout << "Digite o valor de todas as laterais do triângulo: \n";
	std::cin >> l1;
	std::cin >> l2;
	std::cin >> l3;

	if (l1 != l2 || l2 != l3) {
		std::cout << "O triângulo não é equilátero.";
		return;
	}
	if (l1 == l2 && l2 == l3) {
		// If all three sides are equal, the triangle is equilateral
		std::cout << "O triângulo é equilátero.";
		return;
	}

}

// Function to determine if a number is positive, negative, or zero
void Algorithms::number()
{
	setlocale(LC_ALL, ""); // Set locale for proper character encoding


	double n{}; // Variable to store the input number

	std::cout << "Insira um número: ";
	std::cin >> n;

	if (n > 0) {
		// If the number is greater than 0, it is positive
		std::cout << "\nO número inserido é positivo.";
		return;
	}

	if (n == 0) {
		// If the number is 0, it is zero
		std::cout << "\nO número inserido é 0.";
		return;
	}

	if (n < 0) {
		// If the number is less than 0, it is negative
		std::cout << "\nO número inserido é negativo.";
	}
}

// Function to determine the age category of a person
void Algorithms::age()
{
	setlocale(LC_ALL, ""); // Set locale for proper character encoding

	int age{}; // Variable to store the input age

	std::cout << "Insira sua idade: ";
	std::cin >> age;

	if (age <= 0) {
		// If the age is negative/zero, it is invalid
		std::cout << "Idade inválida.";
		return;
	}
	if (age >= 60) {
		// If age is 60 or above, the person is elderly
		std::cout << "Você é um idoso.";
		return;
	}
	if (age >= 20) {
		// If age is between 20 and 59, the person is an adult
		std::cout << "Você é um adulto.";
		return;
	}
	if (age >= 13) {
		// If age is between 13 and 19, the person is a teenager
		std::cout << "Você é um adolescente.";
		return;
	}
	if (age > 0) {
		// If age is below 13, the person is a child
		std::cout << "Você é uma criança.";
	}
}

// Function to provide a chatbot-like interaction with options
void Algorithms::chatbot()
{
	setlocale(LC_ALL, ""); // Set locale for proper character encoding

	int option{}; // Variable to store the selected option

	// Display menu options
	std::cout << "1) Elogio\n";
	std::cout << "2) Ofensa\n";
	std::cout << "3) Sair \n\n";
	std::cout << "Escolha uma opção: ";
	std::cin >> option;
	clearConsole(); /* Clear the console (assumes clearConsole is defined in
	extraFunc.h)*/

	switch (option) {
	case 1:
		// Option 1: Compliment
		std::cout << "Elogio.";
		break;
	case 2:
		// Option 2: Offense
		std::cout << "Ofensa.";
		break;
	case 3:
		// Option 3: Exit
		std::cout << " ";
		break;
	}
}
