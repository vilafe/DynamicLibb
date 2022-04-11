#include "pch.h"
#include "Header.h"


int MyGroup(int group)
{
	return group;
}

void MyName(char* name)
{
	const char* str = "Wylian de Souza Ferreira";
	strcpy_s(name, strlen(str) + 1, str);
}