/*
 * My_Menu.cpp
 *
 *  Created on: 31 May 2019
 *      Author: Dave
 */

#include<iostream>

using namespace std;

int main()
{
	cout << "Please choose from the following options:> " << endl;

	string answer;
	int choice;
	double burgerCost = 2.99f;
	double friesCost = 1.49f;
	double cokeCost = 0.99f;
	double milkshakeCost = 1.99f;
	double totalCost = 0;
	int count = 0;
	string orders[3];


	for(int i = 0; i < 3; i ++)
	{
		cout << endl << "1. Burger  		-		£2.99."
							"\n2. Fries		-		£1.49."
							"\n3. Coke			-		£0.99."
							"\n4. Milkshake		-		£1.99." << endl;

		cout << endl << ":> " << flush;

		cin >> choice;

		switch(choice)
		{
		case 1:
			cout << "You ordered a Burger." << endl;
			orders[i] = "Burger";
			totalCost += burgerCost;
			break;
		case 2:
			cout << "You ordered Fries." << endl;
			orders[i] = "Fries";
			totalCost += friesCost;
			break;
		case 3:
			cout << "You ordered a Coke." << endl;
			orders[i] = "Coke";
			totalCost += cokeCost;
			break;
		case 4:
			cout << "You ordered a milkshake." << endl;
			orders[i] = "Milkshake";
			totalCost += milkshakeCost;
			break;
		default:
			cout << "Oops, something went wrong." << endl;
		}

		cout << endl << "Would you like to order something else? :> " << flush;

		cin >> answer;

		count ++;

		if(answer == "no")
		{
			break;
		}
	}

	if(count == 1)
	{
		cout << "This works" << endl;

		orders [1] = "nothing else added";
		orders [2] = "nothing else added";
	}
	else if(count == 2)
	{
		orders [2] = "nothing else added";
	}

	cout << endl << "You ordered " << orders[0] << " with " << orders[1] << " and " << orders[2] << "." << endl;

	cout << endl << "Your total today will be £" << totalCost << endl;

	return 0;
}

