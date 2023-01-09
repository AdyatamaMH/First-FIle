#include <stdio.h>
#include "mylib/mylib.h"
#include <string.h>


int main(void) {
  char stop[10];
  int User_S, User_F, Oven_0, Oven_1, Oven_State;
  int nextState[2], result[2];
  int i, j;

  for (i = 1; i <= 1; ++j) {
  printf("This is an Automatic Oven Machine that will be simulated in C language\n");
  printf("Made by Adyatama Mahabarata_2602158626\n");
  printf("\n");

  printf("Enter an oven state that you want it to be on ([1] = ON): \n");
  scanf("%d", &User_S);
  if (User_S == 1){
    printf("Oven is On\n");
  }

  printf("\n");

  printf("Enter an oven state that you want it to be on ([1] = Standby): \n");
  scanf("%d", &User_F);
  if (User_F == 1){
    printf("Oven is in standby mode\n");
  }

printf("Enter an oven state that you want it to be on ([1] = Preheat), ([0] = COOK): \n");
  scanf("%d", &Oven_1);
  if (Oven_1 == 1){
    printf("Oven is preheating\n");
  }
  else if (Oven_1 == 0){
    printf("Oven is cooking the food\n");
  }

printf("Enter an oven state that you want it to be on ([1] = Cooling): \n");
  scanf("%d", &Oven_0);
  if (Oven_0 == 1){
    printf("Oven is cooling down and will turn off automatically\n");
  }

  printf("\n");

  Statecon(User_S, User_F, Oven_0, Oven_1, nextState);
  printf("Oven State: %d %d\n", nextState[1], nextState[0]);
  printf("\n");

    printf("Visualization of Oven Before: \n");
    printf(" _____________\n");
    printf("|   _______   |\n");
    printf("|  |       |  |\n");
    printf("|  |       |  |\n");
    printf("|  |  OFF  |  |\n");
    printf("|  |       |  |\n");
    printf("|  |_______|  |\n");
    printf("|             |\n");
    printf("|_____________|\n");

  if (User_F == 1 && Oven_1 == 1 && Oven_0 == 1) {
    printf("Visualization of Oven After: \n");
    printf(" _____________\n");
    printf("|   _______   |\n");
    printf("|  |       |  |\n");
    printf("|  |       |  |\n");
    printf("|  |Standby|  |\n");
    printf("|  |       |  |\n");
    printf("|  |_______|  |\n");
    printf("|             |\n");
    printf("|_____________|\n");
    printf("               \n");
    printf("       |       \n");
    printf(" _____________\n");
    printf("|   _______   |\n");
    printf("|  |       |  |\n");
    printf("|  |       |  |\n");
    printf("|  |Preheat|  |\n");
    printf("|  |       |  |\n");
    printf("|  |_______|  |\n");
    printf("|             |\n");
    printf("|_____________|\n");
    printf("              \n");
    printf("       |      \n");
    printf(" _____________\n");
    printf("|   _______   |\n");
    printf("|  |       |  |\n");
    printf("|  |       |  |\n");
    printf("|  |Cooling|  |\n");
    printf("|  |       |  |\n");
    printf("|  |_______|  |\n");
    printf("|             |\n");
    printf("|_____________|\n");
    printf("               \n");
    printf("       |       \n");
    printf(" _____________\n");
    printf("|   _______   |\n");
    printf("|  |       |  |\n");
    printf("|  |       |  |\n");
    printf("|  |  OFF  |  |\n");
    printf("|  |       |  |\n");
    printf("|  |_______|  |\n");
    printf("|             |\n");
    printf("|_____________|\n");        
  }

  else if (User_F == 1 && Oven_1 == 0 && Oven_0 == 1) {
    printf("Visualization of Oven After: \n");
    printf(" _____________\n");
    printf("|   _______   |\n");
    printf("|  |       |  |\n");
    printf("|  |       |  |\n");
    printf("|  |Standby|  |\n");
    printf("|  |       |  |\n");
    printf("|  |_______|  |\n");
    printf("|             |\n");
    printf("|_____________|\n");
    printf("               \n");
    printf("       |       \n");
    printf(" _____________\n");
    printf("|   _______   |\n");
    printf("|  |       |  |\n");
    printf("|  |       |  |\n");
    printf("|  |Cooking|  |\n");
    printf("|  |       |  |\n");
    printf("|  |_______|  |\n");
    printf("|             |\n");
    printf("|_____________|\n");
    printf("               \n");
    printf("       |       \n");
    printf(" _____________\n");
    printf("|   _______   |\n");
    printf("|  |       |  |\n");
    printf("|  |       |  |\n");
    printf("|  |Cooling|  |\n");
    printf("|  |       |  |\n");
    printf("|  |_______|  |\n");
    printf("|             |\n");
    printf("|_____________|\n");
    printf("               \n");
    printf("       |       \n");
    printf(" _____________\n");
    printf("|   _______   |\n");
    printf("|  |       |  |\n");
    printf("|  |       |  |\n");
    printf("|  |  OFF  |  |\n");
    printf("|  |       |  |\n");
    printf("|  |_______|  |\n");
    printf("|             |\n");
    printf("|_____________|\n");        
  }
  
  printf("Input 1 if you want to continue with the simulation. if not, enter 'stop': ");
    scanf("%s", stop);
    if(strcmp(stop, "stop") == 0){
      printf("The simulation will be stopped now");
      break;
    }
  return 0;

  }
}
