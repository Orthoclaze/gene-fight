#ifndef CELL_BIT_STRING_H
#define CELL_BIT_STRING_H

#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class cellBitString
{
	private:
	int bases;
	vector<bool> chromosome;	

	public:
	cellBitString();	
	void showChromosome();
};
#endif
