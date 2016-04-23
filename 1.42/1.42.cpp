// 1.42.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
int main() {
	int sum = 0;
	for (int val = 1; val <= 10; ++val) {
		sum += val;		
	}
	std::cout << "Sum of 1 to 10 inclusive is" << sum << std::endl;
	return 0;
}