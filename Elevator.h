#ifndef ELEVATOR_H
#define ELEVATOR_H

#include <vector>
#include <string>
#include "Person.h"

class Elevator {
public:
    Elevator(const int, std::string);
    ~Elevator();

private:
    int source_, destination_;
    std::string id_;
    const int MAX_PPL_;
    std::vector<Person> person;
		
protected:
};

// Look ma, I did it!
/*inline
std::ostream & operator<<(std::ostream & cout,
                          const Person & p) {
    cout << "<Source: " << p.source()
         << "\nDestination: " << p.destination()
         << "\nID: " << p.id() << ">\n";
}
*/

#endif
