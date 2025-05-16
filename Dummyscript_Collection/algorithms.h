#pragma once
#include <iostream>
#include "extraFunc.h"

 /*Function to check if a student has a passing grade or if they'll be sent to 
 recovery*/
void grade()
{
    setlocale(LC_ALL, ""); // Set locale for proper character encoding

    double nota{}; // Variable to store the student's grade

    std::cout << "Insira a média do aluno: ";
    std::cin >> nota;

    if (nota == 10) {
        // If the grade is 10, the student achieved the maximum score
        std::cout << "O aluno tirou a nota máxima! Parabens!";
    }
    else if (nota >= 7 && nota <= 10) {
        // If the grade is between 7 and 10, the student is approved
        std::cout << "O aluno foi aprovado.";
    }
    else if (nota >= 1 && nota < 7) {
        // If the grade is between 1 and 7, the student is in recovery
        std::cout << "O aluno ficou em recuperação.";
    }
    else {
        // If the grade is less than 1, the student is failed
        std::cout << "O aluno foi reprovado.";
    }
}

// Function to check if a triangle is equilateral
void triangle()
{
    setlocale(LC_ALL, ""); // Set locale for proper character encoding

    double l1{}; // Variable to store the first side of the triangle
    double l2{}; // Variable to store the second side of the triangle
    double l3{}; // Variable to store the third side of the triangle

    std::cout << "Digite o valor de todas as laterais do triângulo: \n";
    std::cin >> l1;
    std::cin >> l2;
    std::cin >> l3;

    if (l1 == l2 && l1 == l3) {
        // If all three sides are equal, the triangle is equilateral
        std::cout << "O Triangulo é Equilátero.";
    }
    else {
        // Otherwise, the triangle is not equilateral
        std::cout << "O triângulo não é equilátero.";
    }
}

// Function to determine if a number is positive, negative, or zero
void number()
{
    setlocale(LC_ALL, ""); // Set locale for proper character encoding

    double n{}; // Variable to store the input number

    std::cout << "Insira um Número: ";
    std::cin >> n;

    if (n > 0) {
        // If the number is greater than 0, it is positive
        std::cout << "\nO número inserido é positivo.";
    }
    else if (n == 0) {
        // If the number is 0, it is zero
        std::cout << "\nO número inserido é 0.";
    }
    else {
        // If the number is less than 0, it is negative
        std::cout << "\nO número inserido é negativo.";
    }
}

// Function to determine the age category of a person
void age()
{
    setlocale(LC_ALL, ""); // Set locale for proper character encoding

    int age{}; // Variable to store the input age

    std::cout << "Insira sua Idade: ";
    std::cin >> age;

    if (age >= 60) {
        // If age is 60 or above, the person is elderly
        std::cout << "Você é um idoso.";
    }
    else if (age >= 20) {
        // If age is between 20 and 59, the person is an adult
        std::cout << "Você é um adulto.";
    }
    else if (age >= 13) {
        // If age is between 13 and 19, the person is a teenager
        std::cout << "Você é um adolescente.";
    }
    else {
        // If age is below 13, the person is a child
        std::cout << "Você é uma criança.";
    }
}

// Function to provide a chatbot-like interaction with options
void chatbot()
{
    setlocale(LC_ALL, ""); // Set locale for proper character encoding

    int option{}; // Variable to store the selected option

    // Display menu options
    std::cout << "1) Elogio\n";
    std::cout << "2) Ofensa\n";
    std::cout << "3) Sair \n\n";
    std::cout << "Escolha uma opção: ";
    std::cin >> option;
    clearConsole(); /* Clear the console(assumes clearConsole is defined in
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
