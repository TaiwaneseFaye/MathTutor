//Chris SUn
//C++ COSC 1320
//math tutor that lets the user select a problem and solve to see if they solved right or wrong

#include "pch.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;


int main()
{
	srand(time(NULL));		//initializing the random number genrator
	
	//variables
	double n1;
	double n2;
	double correctAnswer;
	double studentAnswer;
	int choice;

	do {
		cout << "Math Tutorial Menu" << endl;
		cout << "------------------" << endl;
		cout << "\n(1)Addition";
		cout << "\n(2)Subtraction";
		cout << "\n(3)Multiplication";
		cout << "\n(4)Division";
		cout << "\n(5)Quit" << endl;
		cin >> choice;
		cout << "\n\n";

		//validate their choice
		while (choice < 1 || choice >5)
		{
			cout << "Please select a valid choice." << endl;
			cin >> choice;
		}

		switch (choice) {
		case 1:										//Addition problem
			n1 = 1 + rand() % 1000;					//getting a random number for the first number
			n2 = 1 + rand() % 1000;					//getting a random number for the second number
			correctAnswer = n1 + n1;				//calculating the correct answer
			cout << " " << setw(4) << n1 << endl;	//outputting the math problem to the user
			cout << "+" << setw(4) << n2 << endl;
			cout << "------" << endl;
			break;
		case 2: 									//Subtraction problem
			n1 = 1+rand()%1000;						//first random number
			n2 = 1+rand()%1000;						//second random number
			if (n1 > n2) {							//if statement so that the smaller number gets subtracted from the larger
				cout << " " << setw(4) << n1 << endl;
				cout << "-" << setw(4) << n2 << endl;
				cout << "------" << endl;
				correctAnswer = n1 - n2;
			}
			else {
				cout << " " << setw(4) << n2 << endl;
				cout << "-" << setw(4) << n1 << endl;
				cout << "------" << endl;
				correctAnswer = n2 - n1;
			}
			break;
		case 3: 									//Multiplication problem
			n1 = 1 + rand() % 1000;					//first random number
			n2 = 1 + rand() % 1000;					//second random number
			correctAnswer = n1 * n2;					
			if (n1 > n2) {							//if statement so that it shows the larger number on top
				cout << " " << setw(4) << n1 << endl;
				cout << "x" << setw(4) << n2 << endl;
				cout << "------" << endl;
			}
			else {
				cout << " " << setw(4) << n2 << endl;
				cout << "x" << setw(4) << n1 << endl;
				cout << "------" << endl;
			}
			break;
		case 4: 									//Division problem	
			n1= 1 + rand() % 1000;					//first random number
			n2 = 1 + rand() % 101;					//second random number
			if (n1 > n2) {							//if statement so that the larger number gets divided by the smaller number
				cout << setw(4) << n1 << endl;
				cout << "-----  =" << endl;
				cout << setw(4) << n2 << endl;
				correctAnswer = n1 / n2;
			}
			else {
				cout << setw(4) << n2 << endl;
				cout << "-----  =" << endl;
				cout << setw(4) << n1 << endl;
				correctAnswer = n2 / n1;
			}
			break;
		case 5: cout << "Good work." << endl;	  //menu to quit the tutorial
			break;

		}

		if (choice >= 1 && choice <= 4) {		//if statement to check students answer with correct answer
			cin >> studentAnswer;
			if (studentAnswer == correctAnswer) {
				cout << "Correct!" << endl;
			}
			else
				cout << "Incorrect. Correct answer: " << correctAnswer << "\n\n" << endl;

		}
			


	} while (choice != 5);	//end of do loop

	
	return 0;
}
