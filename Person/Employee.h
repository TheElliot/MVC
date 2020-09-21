#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

class Employee: public Person {

  private:
    string id;
  
  public:
    Employee(string new_name, string new_phone, int new_age, string new_id):Person(new_name, new_phone, new_age) {
        setID(new_id);
    }
    
    void setID(string new_id) {
      id = new_id;
    }

    string getID() {
      return id;
    }
};