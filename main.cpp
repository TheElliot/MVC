#include <iostream>
#include "Controller/controller.h"

int main() {
  Controller controller;
  controller.updateView(
    controller.modelPersonalRecord(), 
    controller.modelSalesLeadRecord(), 
    controller.modelEmployeeRecord()
  );
}