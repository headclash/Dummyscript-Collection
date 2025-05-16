#pragma once
#include <iostream>
#include "extraFunc.h"


/*This code will check if a student has a passing grade or if
they'll be sent to recovery.*/
void grade()
{
	setlocale(LC_ALL, "");


	double nota{};

	std::cout << "Insira a m�dia do aluno: ";
	std::cin >> nota;

	if (nota == 10) {
		std::cout << "O aluno tirou a nota m�xima! Parabens!";
	}

	else if (nota >= 7 && nota <= 10) {
		std::cout << "O aluno foi aprovado.";
	}

	else if (nota >= 1 && nota < 7) {
		std::cout << "O aluno ficou em recupera��o.";
	}

	else {
		std::cout << "O aluno foi reprovado.";
	}
}

/*This code will read three sides of a triangle, and verify if they're all
equal to each other.*/
void triangle()
{
	setlocale(LC_ALL, "");


	double l1{};
	double l2{};
	double l3{};

	std::cout << "Digite o valor de todas as laterais do tri�ngulo: \n";
	std::cin >> l1;
	std::cin >> l2;
	std::cin >> l3;

	if (l1 == l2 and l1 == l3) {
		std::cout << "O Triangulo � Equil�tero.";
	}
	else {
		std::cout << "O tri�ngulo n�o � equil�tero.";
	}
}

/*This code will analyze the inputted number, and output wether it is a
positive, negative, or zero.*/
void number()
{
	setlocale(LC_ALL, "");


	double n{};

	std::cout << "Insira um N�mero: ";
	std::cin >> n;

	if (n > 0) {
		std::cout << "\nO n�mero inserido � positivo.";
	}

	else if (n == 0) {
		std::cout << "\nO n�mero inserido � 0.";
	}

	else {
		std::cout << "\nO n�mero inserido � negativo.";
	}
}

/*This code will analyze the inputted age, and determine wether it corresponds
to a child, teenager, adult or elderly.*/
void age()
{
	setlocale(LC_ALL, "");


	int age{};

	std::cout << "Insira sua Idade: ";
	std::cin >> age;

	if (age >= 60) {
		std::cout << "Voc� � um idoso.";
	}

	else if (age >= 20) {
		std::cout << "Voc� � um adulto.";
	}

	else if (age >= 13) {
		std::cout << "Voc� � um adolescente.";
	}

	else {
		std::cout << "Voc� � uma crian�a.";
	}
}

/*This code will provide a list of options, and then provide a response based
on the selected option.*/
void chatbot()
{
	setlocale(LC_ALL, "");


	int option{};

	std::cout << "1) Elogio\n";
	std::cout << "2) Ofensa\n";
	std::cout << "3) Sair \n\n";
	std::cout << "Escolha uma op��o: ";
	std::cin >> option;
	clearConsole();

	switch (option) {
	case 1:
		std::cout << "Elogio.";
		break;

	case 2:
		std::cout << "Ofensa.";
		break;

	case 3:
		std::cout << " ";
		break;

	}
}