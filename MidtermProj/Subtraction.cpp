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

	/************************START main program************************/

 // Ask the user a question for the sum using randomly generated numbers
	for (int i = 0; i < 10; i++)
	{
		//Random numbers
		int A = (rand() % 10 + 1);
		int B = (rand() % 10 + 1);

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
			cout << "Incorrect" << A << " - " << B << " = " << Difference << endl << endl;
			wrong++;
		}
		//Display percentage of how many wrong and how many right
		cout << "You got " << correct << " right and " << wrong << " wrong" << endl << endl;
	}
	system("PAUSE");
}

/************************END main program************************/