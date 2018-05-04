#include <iostream>
#include <string>
using namespace std;

void MightGoWrong();

int main() 
{
	try
	{
		MightGoWrong();
	}
	catch (int e)
	{
		cout << "Error code: " << e << endl;
	}
	catch (char const *e)
	{
		cout << "Error message: " << e << endl;
	}
	catch (string &e)
	{
		cout << "Error string message: " << e << endl;
	}

	cout << "Still running" << endl;

	return 0;
}

void MightGoWrong()
{
	bool error1 = false;
	bool error2 = true;

	if (error1)
	{
		//throws a const char* (pointer to an unbounded array of immutable characters)
		throw "Something is wrong here";
	}

	if (error2)
	{
		//throws a std::string object
		throw string("Something else is wrong");
	}
}
