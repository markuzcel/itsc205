#include <stdio.h>
#include <time.h>

int main(){
   
  int num = 1, primes = 0;
  int limit = 1000000;  

  for(num =1; num <= limit; num++){
    int i=2;
    while(i <= num){
      if(num %i == 0) 
        break;
      i++;
    }
    if(i == num)
      primes++;
  }

   return 0;
}
