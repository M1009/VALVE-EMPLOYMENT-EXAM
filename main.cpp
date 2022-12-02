// VALVE EMPLOYMENT WINDOWS.cpp : PLEASE THE GABEN SO HE MAY DISTRUBTE HIS LOVE THROUGH STEAM SALES.......
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <fstream>

using namespace std;

int i;
void wrong() { cout << "WRONG!\n" << endl;
	cout << "Trick!! 2 is in fact the largest number in the universe.\n\nThanks for your interest in Valve, we regret to inform you....\nThe Gaben is displeased. You now work at EA's Origin, so sad.\n";
	cout << "GAME OVER!\n";
}
void correct() { std::string line;
	std::ifstream GABE;
	cout << "CORRECT!\n";
	cout << "Congratulations, you know the truth.\nThanks for your interest in Valve.\n\nCongratulations! We have selected you for a interview with the Gaben......\n";
	GABE.open("Gaben.txt");
	getline(GABE, line);
	// This loop handles the prize for victory condition.
	if (GABE.is_open()) {
		while (getline(GABE, line)) {
			cout << line << endl;
		} GABE.close();
	} else { cout << "ERROR: Unable to open file\n";
	}
	cin.get();
}


int main() { cout << "Valve employment exam: Please enter a number in integer format...\nAny number that exists at all....\n";
	cin >> i;
	cout << i << "?!?! Thats your answer?!\n\n";
	// This IF/ELSEIF/ELSE loop handles the victory/defeat condition.
	if (i >= 3) { wrong();
	} else { correct();
	}
	cin.get();
}
