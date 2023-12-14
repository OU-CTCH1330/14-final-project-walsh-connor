#include <iostream>

 //using namespace ctch1330;
using namespace std;

double apples;
double oranges;
double cherries;
double watermelons;
double wallet = 100;
float userchoice;




int main()
{
	while (wallet >= 0)
	{
		cout << "\n\n Welcome to the Farmer's Market!\n\n";
		cout << "Menu:\n\n";
		cout << "1     Apples          $2\n";
		cout << "2     Oranges         $3\n";
		cout << "3     Cherries        $4\n";
		cout << "4     Watermelons     $5\n\n";
		cout << "You have\n " << apples << "Apples\n " << oranges << "Oranges\n " << cherries << "Cherries\n " << watermelons << "Watermelons\n\n";
		cout << "You have $" << wallet << " left in your wallet.\n\n";
		cout << "Type in the number representing the type of fruit you want or type 5 to check out:";
		cin >> userchoice;

		if (userchoice == 1)
		{
			apples++;
			wallet = wallet - 2;
		}

		if (userchoice == 2)
		{
			oranges++;
			wallet = wallet - 3;
		}

		if (userchoice == 3)
		{
			cherries++;
			wallet = wallet - 4;
		}

		if (userchoice == 4)
		{
			watermelons++;
			wallet = wallet - 5;
		}

		if (userchoice == 5)
		{
			cout << "\n\n Thank you for shopping at the Farmer's Market! We hope to see you again soon!\n\n";
			cin.get();
			return 0;
		}
	}





	cin.get();
	return 0;
}

