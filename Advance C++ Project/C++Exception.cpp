#include <iostream>
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

	return 0;
}

void MightGoWrong()
{
	bool error = true;

	if (error)
	{
		throw 8;
	}
}
