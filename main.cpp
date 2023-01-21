#include <iostream>
#include <ctime>
#include <chrono>
#include <thread>
using namespace std;

int main() {
	srand(time(0));
	this_thread::sleep_for(std::chrono::milliseconds(5000));
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
	this_thread::sleep_for(std::chrono::milliseconds(1000));
	cout << "*********************";
	
}