#include "stdafx.h"
#include<iostream>
#include <fstream>


using namespace std;


int main()
{
	//Initialize StreamWriter
	ifstream in("test.txt");
	if (!in)
	{
		cout<<"ERROR\n";
		return 1;
	}

	int cc = 0, cw = 0, cR = 0;
	char c;
	bool isInWord = false;

	c = in.get();
	while (in)
	{
		if (c == ' ' || c == '\t' || c == '\n')
		{
			if (c == '\n')
			{
				cR++;
			}
			if (isInWord)
			{
				cw++;
				isInWord = false;
			}
		}
		else
		{
			isInWord = true;
		}
		cc++;
		c = in.get();
	}
	cout<<"Row Count "<<cR<<'\n';
}