#include "Policy.h"


class Policy{
  private:
    int Policy_ID;
    char Policy_Name[10];
    char Policy_Description[100];
  public:
    Policy();
    Policy(int pID, char pName[], char pDesc[]);
    void displayPolicyDetails();
};
