#include <stdio.h>

int main(void) {
int v[15], i = 0, smallestNum = 10000000000, biggestNum = 0;
  
  for(; i < 15; i++){
    printf("Enter an integer [%d]: ", i+1);
      scanf("%d",&v[i]);
    
    if (v[i] > biggestNum){
      biggestNum = v[i];
      }  
    else if (v[i] < smallestNum){
      smallestNum = v[i];
    }  
  }

  printf("------------------------------------\n");
  printf("The biggest number is: %d\n",biggestNum);
  printf("The smallest number is: %d\n",smallestNum);
    
  return 0;
}
