// 1.43.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	int sum = 0, val = 0;
	while (std::cin >> val) {
		sum += val;
	}
	std::cout << "Sum is:" << sum << std::endl;
    return 0;
}

