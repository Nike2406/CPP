#include <iostream>
#include <string>
#include <fstream>

using std::cout;
using std::endl;
using std::string;
using std::ifstream;
using std::ofstream;
using std::getline;

void	fatality(void) {
	cout << "Wow! You're kidding me! Buy-buy =)\n";
		exit(1);
}


int	main(int argc, char **argv) {
	if (argc != 4)
		fatality();
	string	filename = argv[1];
	string	s1 = argv[2];
	string	s2 = argv[3];
	string	fileOutput = filename + ".replace";
	string	buf;

	if (!filename.length() || !s1.length() || !s1.length())
		fatality();
	ifstream inFile(filename);
	if (inFile.fail())
		fatality();
	ofstream outFile(fileOutput);
	if (outFile.fail())
		fatality();
	while (getline(inFile, buf))
	{
		while (buf.find(s1) != string::npos)
			buf.replace(buf.find(s1), s1.length(), s2);
		outFile << buf;
		outFile << endl;
	}
	outFile.close();
	inFile.close();
}
