#include <fstream>

using namespace std;

#include "population.h"

Population::Population() :
	individuals(POPULATION_SIZE),
	id(INITIAL_POPULATION_ID)
{

}

//*************************************************************************************************************
//*************************************************************************************************************

Population::~Population() {
	individuals.clear();
}

//*************************************************************************************************************
//*************************************************************************************************************

void Population::initRandomIndividuals() {
	for (int indIdx = 0; indIdx < POPULATION_SIZE; ++indIdx) {
		individuals[indIdx].setRandomChromosome();
	}
}

//*************************************************************************************************************
//*************************************************************************************************************

void Population::printPopulationToFile() const {
	string fileName = POPULATION_FILE_NAME_PREFIX;
	string populationStrId = to_string(id);

	fileName.append(populationStrId);
	fileName.append(POPULATION_FILE_NAME_POSTFIX);

	ofstream outputFile;
	outputFile.open(fileName);

	outputFile << id << endl;

	for (int indIdx = 0; indIdx < POPULATION_SIZE; ++indIdx) {
		individuals[indIdx].printToFile(outputFile);

		if (indIdx < POPULATION_SIZE - 1) {
			outputFile << endl;
			outputFile << endl;
		}
	}

	outputFile.close();
}
