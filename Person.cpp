#include "Person.h"


Person::Person(int source, int destination,
               int id, const int WEIGHT) 
    : source_(source), destination_(destination), id_(id),
      WEIGHT_(WEIGHT)
{
    
}

Person::~Person()
{

}

std::ostream & operator<<(std::ostream & cout,
                          const Person & p) {
    cout << "\t<Person Source: " << p.source()
         << "\n\tDestination: " << p.destination()
         << "\n\tID: " << p.id()
         << "\n\tWEIGHT: " << p.WEIGHT() << ">\n";
    return cout;
}
