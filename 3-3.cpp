#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	vector<string> words;
	vector<int> counts;
	string input;

	cout << "Enter words (type 'exit' to finish):" << endl;

	while (cin >> input && input != "exit") {
		int found = 0;

		for (int i = 0; i < words.size(); i++) {
			if (words[i] == input) {
				counts[i]++;
				found = 1;
				break;
			}
		}

		if (found == 0) {
			words.push_back(input);
			counts.push_back(1);
		}
	}

	cout << "\n---------------\n" << endl;
	for (int i = 0; i < words.size(); i++) {
		cout << words[i] << ": " << counts[i] << endl;
	}

	return 0;
	}