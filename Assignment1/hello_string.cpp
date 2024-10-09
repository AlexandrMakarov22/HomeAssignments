#include <iostream>
#include "myheader.h"

void hello_string()
{
	std::string str;
	std::getline(std::cin, str);
	std::cout << "Hello, " << str << std::endl;
}
