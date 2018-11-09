
#include <iostream>
#include <string>
#include <cmath>

using namespace std;


int main()
{


  // ------------------------------ initialisation ---------------------------------
	cout.setf(ios::fixed);
  cout.precision(2);// it shows value only with two symbols after the point


	cout.setf(ios::fixed);
	cout.precision(2);

	char SymbolRRR;
	int NumRows, SeatsNechet;

	cin >> SymbolRRR;
	cin >> NumRows >> SeatsNechet;

	int SeatsChet = SeatsNechet + 2;
	int countNechet = 0;
	int countChet = 0;
	int counterche = -1;


  // ------------------------------ Loop for sorting first chars of alphabet for the last sector  ---------------------------------

	for (char SYM = 'A'; SYM <= SymbolRRR; SYM++) {

		counterche++;

  // ------------------------------ Loop for counting seats in first sector ---------------------------------

		for (int i = 1; i <= NumRows+counterche; i++) {
			
			if (i % 2 != 0) {
      
				for (int k = 1; k <= SeatsNechet; k++) {

					cout << SYM << i << static_cast<char>(k+96) << endl; // casting int to char 
					countNechet++;
				}
			}
			else {
				for (int m = 1; m <= SeatsChet; m++) {
					cout << SYM << i << static_cast<char>(m+96) << endl;
					countChet++;
				}

			}
		}

	}

	cout << countNechet + countChet << endl;
	system("pause");
    return 0;
}

