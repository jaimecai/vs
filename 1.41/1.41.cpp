// 1.41.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>

int mian() {
	int sum = 0, val = 1;
	while (val < 11) {
		sum += val;
		++val;
	}
	std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;
	return 0;
}