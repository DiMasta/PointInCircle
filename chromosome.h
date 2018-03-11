#ifndef __CHROMOSOME_H__
#define __CHROMOSOME_H__

#include <vector>
#include <fstream>

#include "Gene.h"

typedef std::vector<Gene> Genes;

class Chromosome {
public:
	Chromosome();
	~Chromosome();

	void setRandomGenes();

	void printToFile(std::ofstream& outputFile) const;

private:
	Genes genes;
};

#endif //__CHROMOSOME_H__