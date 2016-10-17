#ifndef LOBBY_H
#define LOBBY_H

#include <vector>
#include "Person.h"

class Lobby {
    public:
    	Lobby(const int);
		~Lobby();
    private:
		const int MAX_PPL_;
		std::vector<Person> person;

    protected:
};

#endif
