#include <stdio.h>
#include <stdlib.h>

int priceCalc(float pGas, float pEtol);

int main() {
  printf("######### FuelWise ######### \n");

  float gasPrice, etolPrice;

  printf("What is the gasoline price? \n");
  scanf("%f", &gasPrice);

  printf("What is the ethanol price? \n");
  scanf("%f", &etolPrice);

  int result = priceCalc(gasPrice, etolPrice);

  if (result == 0) {
    printf("It pays to fill up with gasoline \n");
  }
  else if (result == 1) {
    printf("It pays to fill up with Ethanol \n");
  }
  else {
    printf("Both options are viable \n");
  }

  system("pause");

  return 0;  
}

int priceCalc(float pGas, float pEtol) {
  // Gasoline Price * 0.7 = Max Ethanol Price

  if ((pGas * 0.70) < pEtol ) {
    // Refuel with Gasoline
    return 0;
  }
  else if ((pGas * 0.70) > pEtol) {
    // Refuel with Ethanol
    return 1;
  }
  else {
    // Equivalent fuel values
    return 2;
  }
} 