// Letter number array thing.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;

int main()
{
	//                    0     1    2   3     4   5    6    7    8    9    10   11   12   13   14   15   16   17   18   19   20   21   22   23   24   25   26
	char letters[27] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', ' '};
	int keys[18] = {8, 26, 11, 8, 10, 4, 26, 15, 17, 14, 6, 17, 0, 12, 12, 8, 13, 6};

	for (int i = 0; i < (sizeof(keys)/4); i++) {
		cout << letters[keys[i]];
	}
	cout << "\n";
	cout << "\n";
	system("PAUSE");
    return 0;
}

