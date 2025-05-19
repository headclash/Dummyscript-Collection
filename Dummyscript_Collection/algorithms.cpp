#include <iostream>
#include <LOCALE>
#include "algorithms.h"
#include "extraFunc.h"
#include <windows.h>

/*Function to check if a student has a passing grade or if they'll be sent to
 recovery*/
void Algorithms::grade()
{

	float nota{}; // Variable to store the student's grade

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

	float l1{}; // Variable to store the first side of the triangle
	float l2{}; // Variable to store the second side of the triangle
	float l3{}; // Variable to store the third side of the triangle

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

	float n{}; // Variable to store the input number

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

// Code related to the <exchange> function
void Algorithms::exchange()
{
	float rate{};
	int dir{};
	float usd{};
	float brl{};

	std::cout << "Insira a cotação do Dólar: ";
	std::cin >> rate;

	std::cout << "Você deseja converter o valor em Real para Dólar,"
		"ou Dólar para real?\n";
	std::cout << "1) Real para Dólar\n";
	std::cout << "2) Dólar para Real\n";
	std::cin >> dir;
	switch (dir) {
	case 1:
		std::cout << "Insira o valor em Real: ";
		std::cin >> brl;
		usd = brl / rate;
		std::cout << "O valor em Dólar é de $: " << usd << "\n";
		break;

	case 2:
		std::cout << "Insira o valor em Dólar: ";
		std::cin >> usd;
		brl = usd * rate;
		std::cout << "O valor em Real é de R$ : " << brl << "\n";
		break;

	default:
		std::cout << "Opção inválida. Tente novamente.\n";
		break;
	}
}

// Code related to the <circumference> function
void Algorithms::circle()
{
	static float pi = (3.14159f);
	float area{};
	float radius{};

	std::cout << "Insira o valor do ráio em m²: ";
	std::cin >> radius;
	area = pi * (radius * radius);
	std::cout << "\nA área da circumferência é de: " << area << "m²\n";
}

// Code related to the <centenary> function
void Algorithms::centenary()
{
	int age{};
	int dist100{};

	std::cout << "Insira sua idade: ";
	std::cin >> age;
	dist100 = 100 - age;

	std::cout << "Você completará 100 anos em: " << dist100 << " anos.\n";


}

void Algorithms::gradeMedian()
{
	float g1{};
	float g2{};
	float g3{};
	float median{};

	std::cout << "Insira as três notas do aluno, em sequencia: \n";
	std::cin >> g1;
	std::cin >> g2;
	std::cin >> g3;
	median = (g1 + g2 + g3) / 3;

	std::cout << "A média do aluno é de: " << median << "\n";
}

void Algorithms::bulkPurchase()
{
	std::string name{};
	float p{};
	float q{};
	float pT{};

	std::cout << "Insira o nome do produto: ";
	std::cin >> name;

	std::cout << "Insira o preço do produto: ";
	std::cin >> p;

	std::cout << "Insira quantas unidades serão compradas: ";
	std::cin >> q;

	pT = (p * q);
	std::cout << "O preço final da sua compra de " << name << " será de: R$ " <<
		pT << "\n";


}

void Algorithms::salaryRange()
{
	float salary{};

	std::cout << "Insira o seu salário: ";
	std::cin >> salary;

	if (salary >= 5000) {
		std::cout << "Alta renda.";
		return;
	}

	if (salary >= 1500) {
		std::cout << "Média renda.";
		return;
	}

	if (salary < 1500) {
		std::cout << "Renda baixa.";
		return;
	}

}

void Algorithms::temperature()
{
	int temp{};

	std::cout << "Insira a temperatura em Celsius: ";
	std::cin >> temp;

	if (temp >= 30) {
		std::cout << "A temperatura está quente.";
		return;
	}

	if (temp >= 15) {
		std::cout << "A temperatura está agradável.";
		return;
	}

	if (temp < 15) {
		std::cout << "A temperatura está fria.";
		return;
	}

}

void Algorithms::productList()
{
	int prodCode{};

	std::cout << "Insira o código do produto: ";
	std::cin >> prodCode;

	switch (prodCode) {
	case 1:
		std::cout << "Alimento.";
		break;

	case 2:
		std::cout << "Bebida.";
		break;

	case 3:
		std::cout << "Limpeza.";
		break;

	case 4:
		std::cout << "Eletrônico.";
		break;

	case 5:
		std::cout << "Vestuário.";
		break;

	default:
		std::cout << "Código inválido, tente novamente.";
		Sleep(2000);
		clearConsole();
		return productList();
	}
}
