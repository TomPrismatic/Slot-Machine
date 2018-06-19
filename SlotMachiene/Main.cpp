#include <iostream>;
#include <string>;
#include <stdio.h>;
#include <string.h>;
#include <time.h>;
#include <Windows.h>;
#include <cwchar>;
#include <ctime>;

using namespace std;

int main()
{
	srand(time(NULL));

	//Variables

	int iPlayerMoney = 2000;
	string sMenuInput = "";
	int iMenuChoice = 0;
	string sBetInput = "";
	int iBetAmount = 0;
	int iWinnings = 0;
	int x1 = 0;
	int x2 = 0;
	int x3 = 0;
	int iSpinsNumber = 0;
	int iIntroPlays = 0;


	while ((iMenuChoice <= 0) | (iMenuChoice > 3))
	{
		//get user input
		system("cls");
		cout << "||**^^^^^^^^^^^^^^^^^^^^^^^**||" << endl;
		cout << "||        TOMS CASINO        ||" << endl;
		cout << "||                           ||" << endl;
		cout << "||   1. Slot Machines        ||" << endl;
		cout << "||   2. Credits              ||" << endl;
		cout << "||   3. Leave Casino         ||" << endl;
		cout << "||                           ||" << endl;
		cout << "||   Choose a menu option:   ||" << endl;
		cout << "" << endl;
		cout << "*** Current Funds $" << iPlayerMoney << " ***" << endl;

		//Intro Song
		
		if (iIntroPlays == 0)
		{
			Beep(1480, 200);
			Beep(1568, 200);
			Beep(1568, 200);
			Beep(1568, 200);
			Beep(734, 200);
			Beep(784, 200);
			Beep(784, 200);
			Beep(784, 200);
			Beep(370, 200);
			Beep(392, 200);
			Beep(370, 200);
			Beep(390, 200);
			Beep(390, 400);
			Beep(196, 400);
			++iIntroPlays;
		}

		getline(cin, sMenuInput);
		iMenuChoice = atoi(sMenuInput.c_str());
		cout << endl;
		cout << iMenuChoice << endl;

		if (iPlayerMoney == 0)
		{
			system("cls");
			cout << "I'm very sorry you have no money to continue!" << endl;
			cout << "Thanks for Playing" << endl;
			cout << "Press enter to exit:" << endl;
			iMenuChoice = 3;
			getchar();


		}

		if (iMenuChoice == 2)
		{
			system("cls");
			cout << "Created and Coded by Thomas Sheppard. Thanks For Playing!" << endl;
			cout << "Press enter to continue: " << endl;
			getchar();
			iMenuChoice = 0;
		}

		if (iMenuChoice == 3)
		{
			system("cls");
			cout << "Thank you for playing, Come again!";
			getchar();

		}
		
		if (iMenuChoice == 1)
		{
			system("cls");
			//Input Bet Amount
			cout << "||***************||" << endl;
			cout << "||***X***X***X***||" << endl;
			cout << "||***************||" << endl;
			cout << "Welcome to the slots! Your wallet currently contains $" << iPlayerMoney << endl;
			cout << "Please enter your chosen bet amount: ";
			Beep(523, 250); 
			Beep(587, 260);
			Beep(659, 270);
			Beep(698, 280);
			Beep(784, 290);
			Beep(860, 300);
			Beep(900, 310);
			getline(cin, sBetInput);
			iBetAmount = atoi(sBetInput.c_str());

			//Check to see if input is valid
			while (iBetAmount <= 0 | iBetAmount > iPlayerMoney)
			{
				system("cls");
				cout << "You must enter a valid bet!" << endl;
				cout << "Your wallet currently contains $" << iPlayerMoney << endl;
				cout << "Please enter your chosen bet amount: ";
				getline(cin, sBetInput);
				iBetAmount = atoi(sBetInput.c_str());
			}

			//Generates and displays 3 random numbers between 2 and 7 10 times to imitate spinning
			while (iSpinsNumber <= 10)
			{
				system("cls");
				x1 = rand() % 7 + 1;
				x2 = rand() % 7 + 1;
				x3 = rand() % 7 + 1;
				cout << "You insert $" << iBetAmount << " and pull the lever." << endl;
				cout << "" << endl;
				cout << "||***************||" << endl;
				cout << "||***" << x1 << "***" << x2 << "***" << x3 << "***||" << endl;
				cout << "||***************||" << endl;
				Sleep(700);
				++iSpinsNumber;
				
			}

			//Deduct iBetAmount from iPlayerMoney
			iPlayerMoney = iPlayerMoney - iBetAmount;

			//Checks to see if player won and adds funds if they did

			//Three of a kind 7's)
			if (x1 == x2 && x1 == x3 && x2 == x3 && x1 == 7)
			{
				system("cls");
				iWinnings = 10 * iBetAmount;
				iPlayerMoney = iPlayerMoney + iWinnings;
				cout << "" << endl;
				cout << "" << endl;
				cout << "||***************||" << endl;
				cout << "||***" << x1 << "***" << x2 << "***" << x3 << "***||" << endl;
				cout << "||***************||" << endl;
				cout << "" << endl;
				cout << "Congratulations you won the jackpot! Three 7's!!!" << endl;
				cout << "You won $" << iWinnings << endl;
				cout << "Your current balance is now $" << iPlayerMoney;
				cout << "" << endl;

				Beep(200, 200);
				Beep(360, 200);
				Beep(450, 200);
				Beep(580, 200);
				Beep(700, 400);
				Beep(900, 400);
				Beep(1000, 500);

				cout << "Press enter to continue: " << endl;
				getchar();
				iMenuChoice = 0;
				iSpinsNumber = 0;
				;


			}
			//three of a kind (Not 7)
			else if (x1 == x2 && x1 == x3 && x2 == x3)
			{
				system("cls");
				iWinnings = 5 * iBetAmount;
				iPlayerMoney = iPlayerMoney + iWinnings;
				cout << "" << endl;
				cout << "" << endl;
				cout << "||***************||" << endl;
				cout << "||***" << x1 << "***" << x2 << "***" << x3 << "***||" << endl;
				cout << "||***************||" << endl;
				cout << "" << endl;
				cout << "Congratulations you won! 3 Are the same!" << endl;
				cout << "You won $" << iWinnings << endl;
				cout << "Your current balance is now $" << iPlayerMoney;
				cout << "" << endl;

				Beep(200, 200);
				Beep(360, 200);
				Beep(450, 200);
				Beep(580, 200);
				Beep(700, 400);
				Beep(900, 400);
				Beep(1000, 500);

				cout << "Press enter to continue: " << endl;
				getchar();
				iMenuChoice = 0;
				iSpinsNumber = 0;
				;


			}
			//2 of a kind
			else if (x1 == x2 || x1 == x3 || x2 == x3)
			{
				system("cls");
				iWinnings = 3 * iBetAmount;
				iPlayerMoney = iPlayerMoney + iWinnings;
				cout << "" << endl;
				cout << "" << endl;
				cout << "||***************||" << endl;
				cout << "||***" << x1 << "***" << x2 << "***" << x3 << "***||" << endl;
				cout << "||***************||" << endl;
				cout << "" << endl;
				cout << "Congratulations you won! 2 Are the same!" << endl;
				cout << "You won $" << iWinnings << endl;
				cout << "Your current balance is now $" << iPlayerMoney;
				cout << "" << endl;

				Beep(200, 200);
				Beep(360, 200);
				Beep(450, 200);
				Beep(580, 200);
				Beep(700, 400);
				Beep(900, 400);
				Beep(1000, 500);

				cout << "Press enter to continue: " << endl;
				getchar();
				iMenuChoice = 0;
				iSpinsNumber = 0;
				


			}
			//Loss
			else 
			{
				system("cls");
				iWinnings = 0;
				iPlayerMoney = iPlayerMoney + iWinnings;
				cout << "" << endl;
				cout << "" << endl;
				cout << "||***************||" << endl;
				cout << "||***" << x1 << "***" << x2 << "***" << x3 << "***||" << endl;
				cout << "||***************||" << endl;
				cout << "" << endl;
				cout << "Sadly you didnt win. Try again next time!" << endl;
				cout << "Your current balance is now $" << iPlayerMoney;
				cout << "" << endl;
				cout << "Press enter to continue: " << endl;
				getchar();
				iMenuChoice = 0;
				iSpinsNumber = 0;
				;


			}






		}
	}


}