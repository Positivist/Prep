// Preparing.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int i=0;
	for (i=0;i<9; ++i) { 
		cout << i;
	}

	_getch();
    return 0;
}

