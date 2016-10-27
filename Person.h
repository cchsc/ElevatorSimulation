#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

class Person
{
public:
    Person(int, int, int, const int);
    ~Person();
    int source() const {return source_;}
    int & source() {return source_;}
    int destination() const {return destination_;}
    int & destination() {return destination_;}
    int id() const{return id_;}
    int & id(){return id_;}
    int WEIGHT() const{return WEIGHT_;}
    
private:
    int source_, destination_, id_;
    int WEIGHT_;
    
protected:
};

// std::cout << x 
// translates
// operator<<(std::cout, x)
//
// std::cout << x << y
// translates
// operator<<( operator<<(std::cout, x), y)
// std::cout << x << y
// translates
// operator<<( operator<<(std::cout, x), y)



std::ostream & operator<<(std::ostream &,
                          const Person &);

#endif
 
