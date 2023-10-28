#include <stdio.h>

// find the max value among 3 input numbers
int main(){

  int num01,num02, num03;

  printf("please input 3 integer numbers: ");
  scanf("%d %d %d", &num01, &num02, &num03);

          int max = num01;

  if( max < num02 )
  max = num02;

  if( max < num03)
  max = num03;

  

  printf("max in (%d, %d, %d) is %d\n", num01, num02, num03, max);
  
  return 0;
}
