#include <stdio.h>

int main(int argc, char const *argv[])
{
  int n,m;;
  int i;
  n=101;
  m=199;
  i=n;
  int number=0;
  int a[100]={};

  for(i=n;i<=m;i++){
    a[number]=i;
    number++;

  }
  int num_array;
  num_array=sizeof(a)/sizeof(a[0]);
  printf("%d\n",num_array);

  int j;
  for(j=0;j<99;j++){
    printf("%d\t",a[j]);
    printf("%d\n",j);
  }

  printf("%d\n",a[0]);
  printf("%d\n",a[num_array]);

  /* code */
  return 0;
}

