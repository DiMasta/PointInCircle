#ifndef __GENETIC_ALGORITHM__
#define __GENETIC_ALGORITHM__

#include "population.h"

class GeneticAlgorithm {
public:
	GeneticAlgorithm();
	~GeneticAlgorithm();

	void run();
private:
	Population population;
};

#endif
