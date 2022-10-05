#include <iostream>
#include <string>
using namespace std;

void oddNum(int startingNo) {

	string setOne[20]{
		"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eigth", "Nine", "Ten",
		"Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixeteen", "Seventeen", "Eighteen", "Nineteen"
	};

	string setTwo[10]{
		"", "", "Twenty", "Thirty", "Fourty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"
	};

	for (int i = startingNo; i < 100; i++) {
		if (i < 20 && i > 0) {
			cout << i << " => " << setOne[i] << endl;
		}
		else {
			int ones = i % 10;
			int tens = (i - ones) / 10;

			if (ones == 0) {
				cout << i << " => " << setTwo[tens] << endl;
			}
			else {
				cout << i << " => " << setTwo[tens] << " " << setOne[ones] << endl;
			}
		}
	}
}

int main() {

	int startingNo;

	cout << "Enter a number from 1 to 99: ";
	cin >> startingNo;

	try {
		if (startingNo >= 1 && startingNo <= 99) {
			oddNum(startingNo);
		}
		else {
			throw(startingNo);
		}
	} 
	catch (int startingNo) {
		cout << startingNo << " is not included in the number range";
	}
	
	return 0;
}
