// Dec_to_unbTernary.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

void Dec_to_uT_Conversion(vector<int>& UT, int& a) {


	// Variables to hold temporary results and remainders
	int res_temp;
	int rem_temp;

	// ACTUAL CONVERSION -----------------------------
	// Conversion happens like this:
	// 

	res_temp = a / 3;
	rem_temp = a % 3;

	UT.push_back(rem_temp);

	while (true)
	{
		rem_temp = res_temp % 3;
		res_temp = res_temp / 3;
		

		UT.push_back(rem_temp);

		if (res_temp == 0)
		{
			break;
		}
	}
		

	

	// --------------------------------------------------


}

int main()
{
	// Vector to hold value of unb. ternary number, each element is a trit:
	vector <int> UT;
	// Creating a reference to the ternary nr:


	// Variable to hold value of input decimal number:
	int x;
	
	// Getting input nr from user:
	cout << "Input decimal number: ";
	// Assigning input number to variable:
	cin >> x;
	// Creating a reference to the input nr:
	//int& ref_x = x;

	// Convert decimal number to unbalanced ternary:
	Dec_to_uT_Conversion(UT, x);

	// Display the ternary number:
	for (auto i = UT.crbegin(); i != UT.crend(); ++i)
	{
		cout << *i << " ";

	}

	
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
