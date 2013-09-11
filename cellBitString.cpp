#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>

#include "cellBitString.h"

using namespace std;

cellBitString::cellBitString()
{
	bases = 20;
	chromosome.resize(bases);
}

void cellBitString::showChromosome()
{
	for(int x=0;x<bases;x++)
	{
		cout << chromosome[x];
	}
	cout << endl;
}

//int main(){return 0;}
// Put this bit in to compile this thing by itself

