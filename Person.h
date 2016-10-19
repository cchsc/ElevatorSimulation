#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

class Person
{
public:
    Person(int, int, std::string);
    ~Person();
    int source() const {return source_;}
    int & source() {return source_;}
    int destination() const {return destination_;}
    int & destination() {return destination_;}
    std::string id() const{return id_;}
    std::string & id(){return id_;}
    
private:
    int source_, destination_;
    std::string id_;
    
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
    cout << "<Source: " << p.source()
         << "\nDestination: " << p.destination()
         << "\nID: " << p.id() << ">\n";
    return cout;
}

#endif 

