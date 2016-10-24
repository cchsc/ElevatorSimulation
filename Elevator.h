#ifndef ELEVATOR_H
#define ELEVATOR_H

#include <vector>
#include <string>
#include "Person.h"

class Elevator {
public:
    Elevator(const int, int);
    ~Elevator();
    int at() const {return at_;}
    int & at() {return at_;}
    int destination() const {return destination_;}
    int & destination() {return destination_;}
    int id() const{return id_;}
    int & id(){return id_;}
    int  MAX_PPL() const{return MAX_PPL_;}
    std::vector<Person> people() const{return person_;}
    std::vector<Person> & people(){return person_;}

private:
    int at_, destination_;
    int id_;
    const int MAX_PPL_;
    std::vector<Person> person_;
		
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

inline
std::ostream & operator<<(std::ostream & cout,
                          const Elevator& e) {
    cout << "\n[\nAt: " << e.at()
         << "\nDestination: " << e.destination()
         << "\nID: " << e.id()
         << "\nMax PPL: " << e.MAX_PPL();

    cout << "\n\nPeople In Elevator:\n";

    for(int i = 0; i < e.people().size(); ++i)
    {
        cout << e.people().at(i) << "\n";
    }
    cout << "]\n";
    
    return cout;

}

#endif
