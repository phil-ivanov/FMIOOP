// FileStreaming.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include <fstream>


using namespace std;

int main()
{
	string location = "D:\\FMI\\OOP\\FileStreaming\\test.txt";
	ofstream out(location);

	if (!out.is_open())
	{
		cout<<"No file found";
		return 1;
	}
	if(out.is_open())
		cout<<"Oppened\n";

	char buffer[20];

	while (cin>>buffer && strcmp(buffer, "end"))
	{
		out << buffer << "\n";
	}
	out.close();

	return 0;
}


