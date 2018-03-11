#include "individual.h"

using namespace std;

Individual::Individual() :
	chromosome(),
	fitness(INVALID_FITNESS)
{
}

//*************************************************************************************************************
//*************************************************************************************************************

Individual::~Individual() {
}

//*************************************************************************************************************
//*************************************************************************************************************

void Individual::setRandomChromosome() {
	chromosome.setRandomGenes();
}

//*************************************************************************************************************
//*************************************************************************************************************

void Individual::printToFile(ofstream& outputFile) const {
	outputFile << POINT << endl;
	outputFile << RED << endl;
	chromosome.printToFile(outputFile);
}
