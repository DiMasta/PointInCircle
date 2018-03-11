#ifndef __CONSTANTS_H__
#define __CONSTANTS_H__

#include <string>

static const float INVALID_COORD = -1.f;
static const float INVALID_FITNESS = -1.f;
static const float MIN_COORD = 0.f;
static const float MAX_COORD = 500.f;

static const int POPULATION_SIZE = 20;
static const int CHROMOSOME_SIZE = 2;
static const int INITIAL_POPULATION_ID = 0;

static const std::string POPULATION_FILE_NAME_PREFIX = "population";
static const std::string POPULATION_FILE_NAME_POSTFIX = ".txt";

static const std::string POINT = "POINT";
static const std::string CIRCLE = "CIRCLE";
static const std::string RED = "RED";

#endif //__CONSTANTS_H__
