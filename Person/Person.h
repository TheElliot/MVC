#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

using namespace std;

class Person {
  private: 
    string name;
    string phone_number;
    int age;

 protected: 
    Person() {
      setName("");
      setPhoneNumber("");
      setAge(0);
    }

    Person(string new_name) {
      Person();
      setName(new_name);
    }
    
    Person(string new_name, string new_phone_number) {
      Person();
      setName(new_name);
      setPhoneNumber(new_phone_number);
    }
  
    Person(string new_name, string new_phone_number, int new_age) {
      Person();
      setName(new_name);
      setPhoneNumber(new_phone_number);
      setAge(new_age);
    }
  
    void setPhoneNumber(string new_phone_number) {
      phone_number = new_phone_number;
    }
    
    void setAge(int new_age) {
      age = new_age;
    }
    
    void setName(string characterName) {
      name = characterName;
    }

  public:
    string getPhoneNumber() {
      return phone_number;
    }

  public:
    string getName() {
      return name;
    }
    
    int getAge() {
      return age;
    }

};

#endif