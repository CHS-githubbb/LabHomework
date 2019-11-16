#include <iostream>
#include<regex>
#include<fstream>
#include<string>

using namespace std;


int main() {
	ifstream infile;
	infile.open("name.txt");//check the property of name.txt and change

	ofstream outfile;
	outfile.open("result.txt");//change when neccesary

	string pattern("[a-z]{1}[a-zA-Z\-_]{4,19}");
	regex reg(pattern);


	int total = 0;
	if (infile && outfile) {
		while (infile.get() != EOF) {
			string str = "";
			char x;
			while ((x = infile.get()) != ')')//assume infile is not empty
				continue;
			while ((x = infile.get()) != '(' && x != EOF)
				str += x;
			if (regex_match(str, reg)) {
				outfile << str << endl;
				++total;
			}
			if (x == EOF)
				break;
		}
	}
	
	outfile << endl << "total valid names: " << total;

	infile.close();
	outfile.close();
}
