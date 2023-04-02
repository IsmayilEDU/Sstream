
#include <iostream>
using namespace std;

#include<vector>

#include"functionsForContact.h"
#include"classContact.h"
#include"classDatabase.h"



int main()
{
	try
	{
		Contact c1 = Contact("I", "Kerimzade", "ismayil@gmail.com", "0709879099");
		c1.showSpecifications();
	}
	catch (const exception& ex)
	{
		cout << ex.what() << endl;
	}
}
