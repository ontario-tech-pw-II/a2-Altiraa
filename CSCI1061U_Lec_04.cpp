#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[])
{
 	ifstream fin;
 	ofstream fout;
	
	// check if there are enough arguments
	if (argv[1] == NULL && argv[2] == NULL){
		cerr << "Input error. Please input the proper amount and format for the requested file names. (2 file names with '.txt' included at the end)" << endl;
	}
	else if(argv[3] != NULL){
		cerr << "Input error. Too many file names have been inputted." << endl; 
	}
	
	// open the first file
 	
	char c;
	
	fin.open(argv[1]);	
 	if (fin.fail()) // check if it is successful 
 	{
 		cerr << " Cannot open the input file!" << endl;
 		return 1;
 	}
 	

	// open the second file
	
	fout.open(argv[2]);
 	if (fout.fail())
 	{
 		cerr << " Cannot open the output file!" << endl;
 		return 1;
 	}
 	
 	while(fin.get(c)) 
	{
		fout << c;
		cerr << c;
	}
 	
	cerr << endl;
	
 	fin.close(); 

 	fout.close();

 	 return 0;

 } 