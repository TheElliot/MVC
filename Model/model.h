#include <string>
#include "../Person/Personal.h"
#include "../Person/Employee.h"
#include "../Person/SalesLead.h"

using namespace std;

class Model {
  private:
    Employee johnSmith = Employee("John Smith","920-227-3248",18,"id-abc-123");
    SalesLead judySmith = SalesLead("Judy Smith","920-227-3249",19,"Apple");
    Personal bruceSpringsteen = Personal("Bruce Springsteen","920-227-3249",19,"BFF");
  public:
    string employeeRecord() {
      return johnSmith.getName();
    }
    string salesLeadRecord() {
      return judySmith.getName();
    }
    string personalRecord() {
      return bruceSpringsteen.getName();
    }
};
  