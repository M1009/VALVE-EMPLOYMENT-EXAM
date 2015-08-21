// Valve Employment Exam.cpp: PLEASE THE GABEN SO HE MAY DISTRUBTE HIS LOVE THROUGH STEAM SALES.......
#include <iostream>
#include <stdio.h>
#include <fstream>

using namespace std;

int main(){ // main function for program.
	int i;
	printf("Valve employment exam: Please enter a number in integer format...\nAny number that exists at all....\n");
	cin >> i;
	cout << i << "?!?! Thats your answer?!\n\n";

	if (i >= 3) {cout << "WRONG!\n" << endl; /* This IF/ELSEIF/ELSE loop handles the victory/defeat conditions. */
		printf("Trick!! 2 is in fact the largest number in the universe.\n\nThanks for your interest in Valve, we regret to inform you....\nThe Gaben is displeased. You now work at EA's Origin, so sad.\n");
		printf("GAME OVER!");
		getchar();
	}   else {printf("CORRECT!\n");
		printf("Congratulations, you know the truth.\nThanks for your interest in Valve.\n\nCongratulations! We have selected you for a interview with the Gaben......\n");
		cin:getline();
		string line;
		ifstream GABE;
		GABE.open("Gaben.txt");
    	if (GABE.is_open()){ // This loop handles the prize for victory condition.
        	while (getline (GABE,line)){
		cout << line << '\n';
    	}  	GABE.close();
    	} else cout << "ERROR: Unable to open file\n";
	}
    cout << "GAME OVER!" << endl;
	return 0;
	}




