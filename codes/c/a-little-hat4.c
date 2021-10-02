#include <stdio.h>
int main(void) {
  int x=1;
  char letter='A';
 for(int i=0;i<=5;i++){
   for(int j=0;j<=5-i;j++){
     printf("  ");
   }
   for(int k=0;k<2*i-1;k++){
     printf("%c ",letter);
     letter++;
    
   }
   printf("\n");
    
 }
 
  return 0;
}