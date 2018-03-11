CMAKE_MINIMUM_REQUIRED (VERSION 2.6)
PROJECT(PointInCircle)

ADD_SUBDIRECTORY(GamePrinter)

INCLUDE_DIRECTORIES(GamePrinter)

SET (
	EXTRA_LIBS
	GamePrinter
)

SET (
	HEADER_FILES
	chromosome.h
	constants.h
	gene.h
	geneticAlgorithm.h
	individual.h
	population.h
)

SET (
	SOURCE_FILES
	chromosome.cpp
	gene.cpp
	geneticAlgorithm.cpp
	individual.cpp
	main.cpp
	population.cpp
)

ADD_EXECUTABLE(PointInCircle ${HEADER_FILES} ${SOURCE_FILES})
TARGET_LINK_LIBRARIES(PointInCircle ${EXTRA_LIBS})