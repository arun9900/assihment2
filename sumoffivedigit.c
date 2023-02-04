#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    int sum;
    scanf("%d", &n);
    while(n>0)
    {
     int lastdigit=n%10 ;
      sum=sum+lastdigit; 
     n=n/10;   
        
    }
    printf("%d",sum);
    return 0;
}
