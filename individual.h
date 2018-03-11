#ifndef __INDIVIDUAL_H__
#define __INDIVIDUAL_H__

#include <fstream>

#include "chromosome.h"

class Individual {
public:
	Individual();
	~Individual();

	void setRandomChromosome();

	void printToFile(std::ofstream& outputFile) const;

private:
	Chromosome chromosome;
	float fitness;
};

#endif
