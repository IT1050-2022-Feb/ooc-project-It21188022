#include <iostream>
#include "claim.h"
class Claim{
  private:
    int Claim_ID;
    char Claim_Type[10];
    int Claim_Amount;
  public:
    Claim();
    Claim(int cID, char cType[], int cAmount);
    void displayClaimDetails();
};

