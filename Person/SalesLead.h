#include <string>
#include <iostream>
#include "Person.h"

class SalesLead: public Person {

  private:
    string company;
  
  public:
    SalesLead(string new_name, string new_phone, int new_age, string new_company):Person(new_name, new_phone, new_age) {
      setCompany(new_company);
    }

    void setCompany(string new_company) {
      company = new_company;
    }

    string getCompany() {
      return company;
    }

};