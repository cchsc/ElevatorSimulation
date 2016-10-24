#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

class Person
{
public:
    Person(int, int, int);
    ~Person();
    int source() const {return source_;}
    int & source() {return source_;}
    int destination() const {return destination_;}
    int & destination() {return destination_;}
    int id() const{return id_;}
    int & id(){return id_;}
    
private:
    int source_, destination_;
    int id_;
    
protected:
};

// std::cout << x 
// translates
// operator<<(std::cout, x)
//
// std::cout << x << y
// translates
// operator<<( operator<<(std::cout, x), y)

inline
std::ostream & operator<<(std::ostream & cout,
                          const Person & p) {
    cout << "\t<Source: " << p.source()
         << "\n\tDestination: " << p.destination()
         << "\n\tID: " << p.id() << ">\n";
    return cout;
}

#endif 

