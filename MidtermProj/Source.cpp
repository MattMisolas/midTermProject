#include <ctime>
#include <cstdlib>
#include <iomanip>
#include <string>
#include <fstream>
#include <iostream>
using namespace std;

void addGame();
void subGame();
void divGame();
void multGame();
void gameMenu();

int main()
{

	int choice;

	do
	{
		cout << "Arithmetic Practice" << endl;
		cout << "1. Interactive Work" << endl;
		cout << "2. Generate Practice Sheets" << endl;
		cout << "3. Quit" << endl;

		cin >> choice;

		switch (choice)
		{
		case 1:
			gameMenu();
			break;

		default:
			cout << "ERROR: Choose Again " << endl;
		}

	} while (choice != 3);

	system("PAUSE");

	return 0;
}

void gameMenu()
{
	int pick;
	do
	{
		cout << "Choose your operand." << endl;
		cout << "1. Addition" << endl;
		cout << "2. Subtraction" << endl;
		cout << "3. Multiplication" << endl;
		cout << "4. Division" << endl;
		cout << "5. Mixed" << endl;
		cout << "6. Exit" << endl;

		cin >> pick;

		switch (pick)
		{
		case 1:
			addGame();
			break;

		case 2:
			subGame();
			break;

		case 3:
			multGame();
			break;

		case 4:
			divGame();
			break;

		case 5:
			cout << "PLACEHOLDER" << endl;
			break;

		default:
			cout << "ERROR: Choose Again" << endl;
		}
	} while (pick != 6);

	return;
}

void addGame()

{
	//local variables
	int Sum;
	int Answer;
	int correct = 0;
	int wrong = 0;

	//local constants
	const int QUIT = -1;
	int MAX = 10;

	// Seed the random number generator.
	unsigned seed = (unsigned)time(NULL);
	srand(seed);

	// Allows user to select the upper bound of the number of digits for the problems
	cout << "Please select the upper bound of the number of digits for the problems." << endl;
	cin >> MAX;

 // Ask the user a question for the sum using randomly generated numbers
	for (int i = 0; i < 10; i++)
	{
		//Random numbers
		int A = (rand() % MAX + 1);
		int B = (rand() % MAX + 1);

		cout << "What is " << A << " + " << B << " = ";
		cin >> Answer;

		//Product Equals
		Sum = A + B;

		//If the answer equals the sum
		if (Answer == Sum)
		{
			//Display correct message
			cout << "Correct" << endl << endl;
			correct++;
		}
		//else tell the user that the answer was wrong and display correct answer
		else {
			cout << "Incorrect " << A << " + " << B << " = " << Sum << endl << endl;
			wrong++;
		}
		//Display percentage of how many wrong and how many right
		cout << "You got " << correct << " right and " << wrong << " wrong" << endl << endl;
	}
	system("PAUSE");
}

void divGame()

{
	//local variables
	int Quotient;
	int Answer;
	int correct = 0;
	int wrong = 0;

	//local constants
	const int QUIT = -1;
	const int MAX = 10;

	// Seed the random number generator.
	unsigned seed = (unsigned)time(NULL);
	srand(seed);

	// Allows user to select the upper bound of the number of digits for the problems
	cout << "Please select the upper bound of the number of digits for the problems." << endl;
	cin >> MAX;

 // Ask the user a question for the sum using randomly generated numbers
	for (int i = 0; i < 10; i++)
	{
		//Random numbers
		int A = (rand() % MAX + 1);
		int B = (rand() % MAX + 1);

		cout << "What is " << A << " / " << B << " = ";
		cin >> Answer;

		//Product Equals
		Quotient = A % B;

		//If the answer equals the sum
		if (Answer == Quotient)
		{
			//Display correct message
			cout << "Correct" << endl << endl;
			correct++;
		}
		//else tell the user that the answer was wrong and display correct answer
		else {
			cout << "Incorrect " << A << " / " << B << " = " << Quotient << endl << endl;
			wrong++;
		}
		//Display percentage of how many wrong and how many right
		cout << "You got " << correct << " right and " << wrong << " wrong" << endl << endl;
	}
	system("PAUSE");
}

void multGame()

{
	//local variables
	int Product;
	int Answer;
	int correct = 0;
	int wrong = 0;

	//local constants
	const int QUIT = -1;
	const int MAX = 10;

	// Seed the random number generator.
	unsigned seed = (unsigned)time(NULL);
	srand(seed);

	// Allows user to select the upper bound of the number of digits for the problems
	cout << "Please select the upper bound of the number of digits for the problems." << endl;
	cin >> MAX;

 // Ask the user a question for the sum using randomly generated numbers
	for (int i = 0; i < 10; i++)
	{
		//Random numbers
		int A = (rand() % MAX + 1);
		int B = (rand() % MAX + 1);

		cout << "What is " << A << " * " << B << " = ";
		cin >> Answer;

		//Product Equals
		Product = A * B;

		//If the answer equals the sum
		if (Answer == Product)
		{
			//Display correct message
			cout << "Correct" << endl << endl;
			correct++;
		}
		//else tell the user that the answer was wrong and display correct answer
		else {
			cout << "Incorrect " << A << " * " << B << " = " << Product << endl << endl;
			wrong++;
		}
		//Display percentage of how many wrong and how many right
		cout << "You got " << correct << " right and " << wrong << " wrong" << endl << endl;
	}
	system("PAUSE");
}

void subGame()

{
	//local variables
	int Difference;
	int Answer;
	int correct = 0;
	int wrong = 0;

	//local constants
	const int QUIT = -1;
	const int MAX = 10;

	// Seed the random number generator.
	unsigned seed = (unsigned)time(NULL);
	srand(seed);

	// Allows user to select the upper bound of the number of digits for the problems
	cout << "Please select the upper bound of the number of digits for the problems." << endl;
	cin >> MAX;

 // Ask the user a question for the sum using randomly generated numbers
	for (int i = 0; i < 10; i++)
	{
		//Random numbers
		int A = (rand() % MAX + 1);
		int B = (rand() % MAX + 1);

		cout << "What is " << A << " - " << B << " = ";
		cin >> Answer;

		//Product Equals
		Difference = A - B;

		//If the answer equals the sum
		if (Answer == Difference)
		{
			//Display correct message
			cout << "Correct" << endl << endl;
			correct++;
		}
		//else tell the user that the answer was wrong and display correct answer
		else {
			cout << "Incorrect " << A << " - " << B << " = " << Difference << endl << endl;
			wrong++;
		}
		//Display percentage of how many wrong and how many right
		cout << "You got " << correct << " right and " << wrong << " wrong" << endl << endl;
	}
	system("PAUSE");
}