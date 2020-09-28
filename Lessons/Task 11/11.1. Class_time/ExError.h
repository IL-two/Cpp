#pragma once
#include <string>
using namespace std;

class ExError
{
private:
	string exMessage;
public:
	ExError(string);
	void printError() const;
};

