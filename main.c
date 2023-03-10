#include <stdio.h>

int main(void) {
  printf("Let's learn about pointers \n");

  int a = 10;
  int *p = &a;  

  // value of a
  printf("%d \n",a); 

  //unsigned value of addr a
  printf("%u \n",&a);

  //value of pointer p which points to addr of a
  printf("%u \n",p); 

  // value of pointer
  printf("%d \n",*p); 
  //addr of pointere
  printf("%u \n",&p); 

  //null pointer for initiation
  int *nulptr = NULL;
  printf("%u \n",nulptr); 
  return 0;
}