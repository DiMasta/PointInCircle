#include "chromosome.h"

using namespace std;

Chromosome::Chromosome() :
	genes(CHROMOSOME_SIZE)
{
}

//*************************************************************************************************************
//*************************************************************************************************************

Chromosome::~Chromosome() {
	genes.clear();
}

//*************************************************************************************************************
//*************************************************************************************************************

void Chromosome::setRandomGenes() {
	for (int geneIdx = 0; geneIdx < CHROMOSOME_SIZE; ++geneIdx) {
		genes[geneIdx].setRandom();
	}
}

//*************************************************************************************************************
//*************************************************************************************************************

void Chromosome::printToFile(ofstream& outputFile) const {
	for (int geneIdx = 0; geneIdx < CHROMOSOME_SIZE; ++geneIdx) {
		genes[geneIdx].printToFile(outputFile);

		if (geneIdx < CHROMOSOME_SIZE - 1) {
			outputFile << endl;
		}
	}
}
