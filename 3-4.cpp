#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	string input;
	size_t maxlen = 0;
	size_t minlen = 0;
	string maxword;
	string minword;
	int isfirst = 1;

	cout << "Enter words (type 'exit' to finish):" << endl;

	while (cin >> input) {
		if (input == "exit") {
			break;
		}

		size_t len = input.length();

		if (isfirst == 1) {
			maxlen = len;
			minlen = len;
			maxword = input;
			minword = input;
			isfirst = 0;
		}

		else {
			if (len > maxlen) {
				maxlen = len;
				maxword = input;
			}

			if (len < minlen) {
				minlen = len;
				minword = input;
			}
		}
	}
	cout << "\n---------------\n" << endl;
	cout << "Longest word:"<< maxword 
		<< "\nLongest word length: " << maxlen << endl;
	cout << "Shortest word:" << minword 
		<<"\nShortest word length: " << minlen << endl;

	return 0;
}