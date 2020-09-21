#include <iostream>
#include <string>
#include <stdio.h>
#include <string.h>
#include "Person.h"

class Personal: public Person {

  private:
    char relationship[254];
  
  public:
    Personal(string new_name, string new_phone, int new_age, string new_relationship):Person(new_name, new_phone, new_age) {
      setRelationship(new_relationship);
    }

    void setRelationship(string new_relationship) {
      strcpy(relationship,new_relationship.substr(0,254).c_str());
    }

    char* getRelationship() {
      return relationship;
    }

};