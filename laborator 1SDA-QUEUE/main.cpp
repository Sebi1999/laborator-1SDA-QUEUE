#pragma once
#include "ShortTest.h"
#include "ExtendedTest.h"
#include <Windows.h>
#include"Queue.h"
#include<iostream>
#include<exception>
#include<vector>

int main() {

	testAll();
	testAllExtended();
	system("pause");
	return 0;
}