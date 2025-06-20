#include "draw.h"
#include "circle.h"
#include <math.h>
#include <stdio.h>

// code translated from geeksforgeeks
void print_circle(int radius){
  double distance;

  for (int i = 0; i <= 2 * radius; i++){
    for (int j = 0; j <= 2 * radius; j++){
      distance = sqrt((i - radius) * (i - radius) + (j - radius) * (j - radius));

      if (distance > radius - 0.5 && distance < radius + 0.5)
        printf("*");
      else
        printf(" ");
    }
    printf("\n");
  }
}
