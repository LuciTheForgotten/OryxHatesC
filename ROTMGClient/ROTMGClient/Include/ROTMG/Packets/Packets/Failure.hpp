#include <string>
#include <fstream>
#include <iostream>

using namespace std;

class FailurePacket
{
	
public:
	int errorId;
	std::wstring errorDescription;

	void parseFromInput(ifstream *in);

	void writeToOutput(ofstream  *out);


private:
	void InitializeInstanceFields();

public:
	FailurePacket()
	{
		InitializeInstanceFields();
	}
};
