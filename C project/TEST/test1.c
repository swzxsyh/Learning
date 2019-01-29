#include <stdio.h>
#include <math.h>

int gcd(int a,int b){
 if(a%b==0)
  return b;
 return gcd(b,a%b);
}
int main(void){
 int a=10,b=8;
 scanf("%d %d",&a,&b);
 printf("GCD: A=>%d, B=>%d (A,B)=%d\n",a,b,gcd(a,b));
 return 0;
}