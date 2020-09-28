#include "ExError.h"
#include <string>
#include <iostream>

using namespace std;

ExError::ExError(std::string eMsg)
{
    ExError::exMessage = eMsg;
}

void ExError::printError() const { cout << exMessage << endl; }
