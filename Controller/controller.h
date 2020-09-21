#include "../Model/model.h"
#include "../View/view.h"

class Controller {
  private:
    Model model;
    View view;
  
  public:
  
    string modelEmployeeRecord() {
      return model.employeeRecord();
    }
    string modelPersonalRecord() {
      return model.personalRecord();
    }
    string modelSalesLeadRecord() {
      return model.salesLeadRecord();
    }
    
    void updateView(string personal, string saleslead, string employee) {
      view.printRecord(personal);
      view.printRecord(saleslead);
      view.printRecord(employee);
    }
};