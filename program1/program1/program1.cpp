// program1.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;


void order_vector(vector<string> vec)  //Function that order each vector_letter
{

}

vector <string> extract_letter(char letter, ifstream &file) //Function that extracts each letter to a different vector
{
	vector <string> words_beggin_letter;
	
	int i=0;
	while (!file.fail)
	{
		if (i==100)
		{
			i=0;
			cout << ".";
		}

	}

	/*
	//Code of the function: We will do this later
	
	filter_vector (words_beggin_letter)  //Function that remove all the words that are repeated 
	(maybe this function works better after the extraction of all letter, so that the number of letters become easier to count)
	The next function (order_vector) will always folloe the filter_vector function */
	order_vector (words_beggin_letter);
	return words_beggin_letter;
}

int main()
{
	//First Part Of The Program: Open The File Where The Dictionary Is
	ifstream dictionary ("file.txt");

	//Usar vetor de vetores onde cada posição do vetor é um vetor em que todas as strings começam pela mesma letra
	vector <vector <string>> words;
	
	//Extração das Palavras
	int letter_A = (int) 'A';

	for (int i = 0; i <= (int) 'Z' - letter_A; i++)
	{
		words[i] = extract_letter((char)letter_A + i, dictionary) ;
	}

    return 0;
}
