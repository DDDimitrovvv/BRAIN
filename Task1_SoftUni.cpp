

#include <iostream>
#include <string>
#include <cmath>

using namespace std;


int main()
{
	// ------------------------------ initialisation ---------------------------------
	cout.setf(ios::fixed);
	cout.precision(2);// it shows value only with two symbols after the point

	int ObshtBroiGosti, CounterPresents;
	int COUNTERAAA = 0;
	int COUNTERBBB = 0;
	int COUNTERVVV = 0;
	int COUNTERGGG = 0;

	char SymbolPR;

	cin >> ObshtBroiGosti >> CounterPresents;

	
	// ------------------------------ For loop to collect the  ---------------------------------

		for (int i = 1; i <= CounterPresents; i++) {
			cin >> SymbolPR;

			if (SymbolPR == 'A') {
				COUNTERAAA++;
			}
			else if (SymbolPR == 'B') {
				COUNTERBBB++;
			}
			else if (SymbolPR == 'V') {
				COUNTERVVV++;
			}
			else if (SymbolPR == 'G') {
				COUNTERGGG++;
			}

		}

	// ------------------------------ Calculating the each sector of "guests" in percent  to max 100%   ---------------------------------
	
	double PROC_A = double(COUNTERAAA) / double (CounterPresents) * 100;
	double PROC_B = double(COUNTERBBB) / double(CounterPresents) * 100;
	double PROC_V = double(COUNTERVVV) / double(CounterPresents) * 100;
	double PROC_G = double(COUNTERGGG) / double(CounterPresents) * 100;
	double PROC_daliPR = (double(CounterPresents) / double(ObshtBroiGosti)) * 100;

	cout << PROC_A << "%"<< endl;
	cout << PROC_B << "%" << endl;
	cout << PROC_V << "%" << endl;
	cout << PROC_G << "%" << endl;
	cout << PROC_daliPR << "%" << endl;

	
	system("pause");
    return 0;
}

