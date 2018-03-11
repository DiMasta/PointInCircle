#ifndef __GENE_H__
#define __GENE_H__

#include <fstream>

#include "constants.h"

class Gene {
public:
	Gene();
	~Gene();

	void setRandom();

	void printToFile(std::ofstream& outputFile) const;

private:
	float coord;
};

#endif //__GENE_H__
