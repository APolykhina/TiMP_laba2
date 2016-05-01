// TiMP_laba2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main()
{
	char name[255];
	string s;
	int i = 1;
	string rezult;

	cin >> name;
	ifstream F(name);

	while (getline(F,s)) {
		if (s.find("\\func") !=string::npos) {
			cout << i << ". " << s.substr(s.find("\\func") + 6, s.find("*/") - s.find("\\func")-6) << endl;
			i++;
		}
	}
	system("pause");
    return 0;
}

