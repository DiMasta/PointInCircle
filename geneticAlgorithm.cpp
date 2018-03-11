#include "geneticAlgorithm.h"

GeneticAlgorithm::GeneticAlgorithm() :
	population()
{
}

//*************************************************************************************************************
//*************************************************************************************************************

GeneticAlgorithm::~GeneticAlgorithm() {
}

//*************************************************************************************************************
//*************************************************************************************************************

void GeneticAlgorithm::run() {
	population.initRandomIndividuals();
	population.printPopulationToFile();
}
