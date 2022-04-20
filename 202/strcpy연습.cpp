#include<iostream>
#include<string>
#include<stdio.h>


int main(void)
{
	char cMunja[20];
	const char a[5] = "Hi";
	strcpy(cMunja, "c_insert");
	printf("%s \n", cMunja);
	strcat(cMunja, cMunja);
	printf("%s \n", cMunja);
	strcpy(cMunja, "Hello");
	printf("%s \n", cMunja);
	

	//cpp
	std::string cppMunja;
	cppMunja = "cpp_insert";
	std :: cout << cppMunja << std :: endl;
	cppMunja = "++"+cppMunja;
	std::cout << cppMunja << std::endl;

	cppMunja = "Hello";
	std::cout << cppMunja << std::endl;

	return 0;
}