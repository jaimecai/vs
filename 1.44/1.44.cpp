// 1.44.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
//ͳ������ÿ��ֵ�������ֵĴ���

int main()
{
	int currVal = 0, val = 0;
	if (std::cin >> currVal) {
		int cnt = 1;
		while (std::cin >> val) {
			if (val == currVal) {
				++cnt;
			}
			else {
				std::cout << currVal << " occurs " << cnt << " times" << std::endl;
				currVal = val;
				cnt = 1;
			}
		}
		std::cout << currVal << " occurs " << cnt << " times" << std::endl;
	}
    return 0;
}

