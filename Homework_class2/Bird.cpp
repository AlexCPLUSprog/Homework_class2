#include "Bird.h"

Bird::Bird(int weight) {
	std::cout << "Memory allocated" << std::endl;
	_unknown = new int(weight);
}

Bird::~Bird() {
	std::cout << "Memory deleted" << std::endl;
	delete[] _unknown;
}
