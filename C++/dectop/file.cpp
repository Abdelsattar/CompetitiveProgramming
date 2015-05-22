#include <fstream>
using namespace std;

int main()
{
	ofstream SaveFile("cpp-home.txt");
	SaveFile << "Hello World, from www.cpp-home.com and Loobian!";
	SaveFile.close();
	return 0;
}

