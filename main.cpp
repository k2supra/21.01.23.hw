#include <iostream>
#include <ctime>
#include <chrono>
#include <thread>
#include <Windows.h>
#include <fstream>
#include <string>
#include <random>


using namespace std;

int main() {
	srand(time(0));
	string line;
	int sumen, sumpl, numen1, numen11, numen12, numen2, numen3, numpl1, numpl2, numpl3;
	/*this_thread::sleep_for(std::chrono::milliseconds(5000));
	cout << "Hello ";
	this_thread::sleep_for(std::chrono::milliseconds(1500));
	cout << "and welcome to the Los Pollos Hermanos family. ";
	this_thread::sleep_for(std::chrono::milliseconds(2000));
	cout << "Ough shit, here we go again. ";
	this_thread::sleep_for(std::chrono::milliseconds(1000));
	cout << "Hello and welcome to this game. ";
	this_thread::sleep_for(std::chrono::milliseconds(1000));
	cout << "CUBES. ";
	this_thread::sleep_for(std::chrono::milliseconds(1000));
	cout << "Here some rules: ";
	this_thread::sleep_for(std::chrono::milliseconds(1500));
	cout << "\n1. Do not cheat (Idk how to cheat here=)). ";
	this_thread::sleep_for(std::chrono::milliseconds(3000));
	cout << "\n2. Do not close your console.";
	this_thread::sleep_for(std::chrono::milliseconds(3000));
	cout << "\n3. Wins a player who get more sum in 3 rounds.";
	this_thread::sleep_for(std::chrono::milliseconds(3000));
	cout << "\nThat`s all. I`ll hope you enjoy.";
	this_thread::sleep_for(std::chrono::milliseconds(3000));
	cout << "\nTo unblock secret text press [s] \nor skip it and press other button ";
	char symbol;
	cin >> symbol;
	this_thread::sleep_for(std::chrono::milliseconds(1000));
	if (symbol == 's')
	{
		cout << "\nHahaha, you realy thought that I will tell you a secret world? ";
		cout << "OK. Let`s move. Secret phrase isssssss....... ";
		cout << "I`hope you will lose)";
	}
	this_thread::sleep_for(std::chrono::milliseconds(5000));*/
	//cout << "\n!!!Let`s start!!!";
	//system("cls");
	///*this_thread::sleep_for(std::chrono::milliseconds(5000));*/
	//cout << "\n\t\tROUND 1";
	//this_thread::sleep_for(std::chrono::milliseconds(2000));
	//cout << "\nEnemy is throwing";
	//this_thread::sleep_for(std::chrono::milliseconds(750));
	//cout << ".";
	//this_thread::sleep_for(std::chrono::milliseconds(750));
	//cout << ".";
	//this_thread::sleep_for(std::chrono::milliseconds(750));
	//cout << ".\n";
	
	numen11 = rand() % 6 + 1;
	numen12 = rand() % 6 + 1;
	
	cout << "**" << numen11 << "/////" << numen12 << endl;
		
	if (numen11 == 1)
	{
		ifstream in("cubes\\1.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	if (numen11 == 2)
	{
		ifstream in("cubes\\2.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	if (numen11 == 3)
	{
		ifstream in("cubes\\3.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	if (numen11 == 4)
	{
		ifstream in("cubes\\4.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	if (numen11 == 5)
	{
		ifstream in("cubes\\5.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	if (numen11 == 6)
	{
		ifstream in("cubes\\6.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	if (numen12 == 1)
	{
		ifstream in("cubes\\1.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	if (numen12 == 2)
	{
		ifstream in("cubes\\2.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	if (numen12 == 3)
	{
		ifstream in("cubes\\3.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	if (numen12 == 4)
	{
		ifstream in("cubes\\4.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	if (numen12 == 5)
	{
		ifstream in("cubes\\5.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	if (numen12 == 6)
	{
		ifstream in("cubes\\6.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}

	
	
	/*numen1 = rand() % 7 + 1;
	numen1 = rand() % 7 + 1;
	cout << numen1;
	if (numen1 == 1)
	{
		ifstream in("cubes\\1.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}*/

	
	
	/*cout << "*********************";*/
	
}