#pragma once
#include <iostream>
#include <string>
using namespace std;

class Jarmu {
	string rendszam;
	string marka;
	string tipus;
public:
	Jarmu(string marka, string tipus, string rendszam);
	virtual ~Jarmu();
};