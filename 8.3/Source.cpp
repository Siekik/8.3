#include <iostream>
#include <string>
using namespace std;

int countVowel(string str);

int main() {
	string str;

	while (true) {
		cout << "Enter a string or Q to quit: ";
		getline(cin, str);
		if (str == "q") {
			break;
		}
		cout << "Word count: " << countVowel(str) << endl;
	}
}
int countVowel(string str) {
	int letter;
	int words = 1;

	for (int letter = 0; letter < str.size(); ++letter) {
		if (str[letter] == ' ' && str[letter + 1] != ' ') {
			words++;
		}
	}
	int total = words;
	return total;
}