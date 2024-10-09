#include <iostream>
#include "myheader.h"
#include <fstream>
#include <filesystem>

void dvoich()
{
	// path to file of input and output
	std::filesystem::path pathin = "file.bin";
	std::filesystem::path pathout = "out.bin";
	
	// open file of input  (inputfile - inf.)
	std::ifstream inf;
	inf.open(pathin, std::ios::binary|std::ios::in);
	
	// open file of output (outputfile - outf.)
	std::ofstream outf;
	outf.open(pathout, std::ios::binary|std::ios::out);
	
	
	// size of file and print
	int fSize = std::filesystem::file_size(pathin);
	std::cout << "Size of input file = " << fSize << std::endl;
	
	// creating of buffer
	char *buf = new char[fSize];
	
	// reading of file and printing
	inf.read(buf, fSize);
	int i;
	for(i=0; i<fSize; i++)
	{
		std::cout<<buf[i];
	}
	
	// writing all symbols to outputfile
	outf.write(buf, fSize);
	
	// deleting of buffer
	delete [] buf;
	
	// closing of files
	inf.close();
	outf.close();
}

