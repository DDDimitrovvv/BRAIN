
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <tuple>
#include <fstream>


using namespace std;



string result; // global



string SortingWords(const string &src)
{
	// ---------------------------------- function initialization  ----------------------------------------
	if (src.empty()) return "";

	typedef string::const_iterator const_iterator;
	typedef tuple<const_iterator, const_iterator, int> WordTuple; // |tuple| is an object capable to hold a collection of elements
	vector<WordTuple> words;

	const_iterator i = src.begin(), j;
	int code;
	string SorteWord;

	// ---------------------------------- infiniteve loop while  ----------------------------------------
	while (1)
	{
		code = 0;
		for (j = i; j != src.end() && *j != ' '; ++j) // reading a string src (source) and spliting the string from |space| deliminiter  ----------
		{
			code += *j;
		}

		words.push_back(WordTuple(i, j, code));

		if (j == src.end())
			break;

		i = j + 1;
	}


	// ---------------------------------- sorting the vector in ascending order ----------------------------------------
	sort(words.begin(), words.end(), [](const WordTuple &t1, const WordTuple &t2) { return get<2>(t1) < get<2>(t2); });

	


	//string result;
	result.reserve(src.size());



	// ---------------------------------- for loop writing strings in a string result with delimiter ----------------------------------------
	for (auto it = words.begin(); ; )
	{
		result.insert(result.end(),   get<0>(*it),    get<1>(*it));

		++it;
		if (it == words.end())
			break;
		result.push_back(',');// new delimiter char ','

	}

	
	
	return result;
}




int main()
{

	// ---------------------------------- basic introduction ----------------------------------------

	cout << "This is a basic prototype programm in C++." << endl;
	cout << "You can put some strings, after that the result will be ordered data (strings) in ascending order." << endl;
	cout << endl;
	cout << "There are some options to enter strings:" << endl;
	cout << "NOW Choose the right method of entering of strings: " << endl;
	cout << "1. Enter a string (string list) in one line." << endl;
	cout << "2. Enter more than one string, if you want to stop reading strings just type STOP on a new line." << endl;
	cout << "3. EXIT" << endl;

	string NumChoiceSTR, textSTR;
	int NumChoice;


	getline(cin, NumChoiceSTR);
	NumChoice = stoi(NumChoiceSTR);




	// ---------------------------------- if statement for option | 1 | ----------------------------------------
	if (NumChoice == 1) {

		cout << "Your choice is: " << NumChoice << endl;
		cout << "Please enter a sentence: " << endl;
		getline(cin, textSTR);

		cout << endl;
		cout << "Result: " << endl;
		cout << SortingWords(textSTR) << endl;
		cout << endl;

		ofstream out("outputFILE_1.csv"); // writing a string (result) to a exernal file ----------
		out << result;
		out.close();
	}


	// ----------------------------------  else if statement for option | 2 | ----------------------------------------
	else if (NumChoice == 2) {
		cout << "Your choice is: " << NumChoice << endl;
		cout << "Please enter a word (string):" << endl;
		cin >> textSTR;
		string SorteWord = textSTR;
		sort(SorteWord.begin(), SorteWord.end());
		cout << "Result: " << SorteWord << endl;
		cout << endl;

		ofstream out("outputFILE_2.csv"); // writing a string (result) to a exernal file ----------
		out << SorteWord;
		out.close();
	}


	// ----------------------------------  else if statement for option | 3 | ----------------------------------------
	else if (NumChoice == 3) {
		cout << "Bye Bye!" << endl;
		cout << endl;
		system("pause");
		return 0;
	}

	


	system("pause");
	return 0;


}
