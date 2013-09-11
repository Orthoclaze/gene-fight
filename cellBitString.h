#ifndef CELL_BIT_STRING 
#define CELL_BIT_STRING 

#include <cstdlib>
#include <vector>

class cellBitString
{
	private:
	int bases;
	std::vector<bool> chromosome;	

	public:	
	void showChromosome();
};
#endif
