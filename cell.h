#ifndef CELL
#define CELL 

#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class cell
{
	private:
	int bases;
	vector<bool> chromosome;	

	public:
	cell();	
	void showChromosome();
};
#endif
