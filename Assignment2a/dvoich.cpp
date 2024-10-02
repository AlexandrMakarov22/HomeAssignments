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
	int *buf = new int[fSize];
	
	
	
	// closing of files
	inf.close();
	outf.close();
}

