#ifndef ELEVATOR_H
#define ELEVATOR_H

#include <vector>
#include "Person.h"

class Elevator {
	public:
		Elevator(const int);
		~Elevator();

	private:
		int source_, destination_;
		const int MAX_PPL_;
		std::vector<Person> person;
		
	protected:
};

#endif
