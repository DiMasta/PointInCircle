#ifndef __POPULATION_H__
#define __POPULATION_H__

#include <vector>

#include "constants.h"
#include "individual.h"

typedef std::vector<Individual> Individuals;

class Population {
public:
	Population();
	~Population();

	void initRandomIndividuals();

	void printPopulationToFile() const;

private:
	Individuals individuals;
	int id;
};

#endif //__POPULATION_H__
