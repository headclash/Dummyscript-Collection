﻿#pragma once
#include <cstdlib>

static void clearConsole() {
#ifdef _WIN32
	system("cls");
#else
	system("clear");
#endif
}