#include <iostream>
#include <string>
#include <vector>

 //using namespace ctch1330;
using namespace std;


int main()
{
	char choice;
	int ItemsBought;
	double orange = .75;
	double apple = .25;
	double cherry = 1.00;
	double watermelon = 2.00;
	double banana = .85;
	double pear = .85;
	double almondmilk = 4.00;
	double oatmilk = 3.50;
	double soymilk = 4.00;
	double twopmilk = 3.00;
	double goatmilk = 6.00;
	double chocomilk = 5.00;
	double frostedflake = 3.00;
	double pbcrunch = 3.50;
	double lifecereal = 4.00;
	double ctcrunch = 3.50;
	double luckycharm = 3.50;
	double eggs = 1.25;
	double pastureeggs = 3.00;
	double cheese = 2.00;
	double turkey = 4.50;
	double ham = 4.00;
	double bacon = 3.00;
	
	cout << "Welcome to the Farmer's Market!"<<endl;
	cout << "--------------------------------------"<<endl;
	cout << "What are you looking to purchase today?"<<endl;
	//cout << endl;
	cin >> ItemsBought;
	shoppingcart sc1;
	for (int i=0; i < ItemsBought; i++)
	{
		cout << "Menu:"<<endl;
		cout << "--------------------------------------"<<endl;
		cout << "A. Produce"<<endl;
		cout << "B. Non-Dairy"<<endl;
		cout << "C. Dairy"<<endl;
		cout << "D. Cereal"<<endl;
		cout << "E. Animal Products"<<endl;
		cout << "Please select the type of items you want to add to your cart"<<endl;
		cin >> choice;
		cout << endl;
		switch (choice)
		{
			case 'a':
			cout << "Menu:"<<endl;
			cout << "--------------------------------------"<<endl;
			cout << "1.Oranges -$ "<<orange<<endl;
			cout << "2.Apples -$ "<<apple<<endl;
			cout << "4.Watermelon -$ "<<watermelon<<endl;
			cout << "5.Bananas -$ "<<banana<<endl;
			cout << "6.Pears -$ "<<pear<<endl;
			cout << endl;
			cout << "Type the number that corresponds to the produce you would like to add to your cart"<<endl;
			



		}



	}






	
	return 0;
}

