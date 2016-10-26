#ifndef ELEVATOR_H
#define ELEVATOR_H

#include <vector>
#include <string>
#include "Person.h"

class Elevator {
public:
    Elevator(const int, const int, int);
    ~Elevator();
    int at() const {return at_;}
    int & at() {return at_;}
    int destination() const {return destination_;}
    int & destination() {return destination_;}
    int id() const{return id_;}
    int & id(){return id_;}
    int MAX_PPL() const{return MAX_PPL_;}
    int MAX_WEIGHT() const{return MAX_WEIGHT_;}
    std::vector<Person> people() const{return person_;}
    std::vector<Person> & people(){return person_;}

private:
    int at_, destination_, id_;
    const int MAX_WEIGHT_;
    const int MAX_PPL_;
    std::vector<Person> person_;
		
protected:
};

std::ostream & operator<<(std::ostream & cout,
                          const Elevator& e);

#endif
