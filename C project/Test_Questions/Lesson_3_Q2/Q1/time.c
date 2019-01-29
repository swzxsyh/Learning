#include <stdio.h>

int main()
{
  int BTJ;

  scanf("%d",&BTJ);

  int hour,minutes;

  if(BTJ<=2359 && BTJ>=0)
  {
    hour = BTJ / 100;
    minutes = BTJ % 100;
    
     if(hour>=8)
        {
            hour = (hour - 8) * 100;
            printf("%d", hour+minutes);
        }
        else
        {
            hour = (24 - 8 + hour) * 100; 
            printf("%d", hour+minutes);  
        }


  }/*else{
    printf("wrong");
  }*/

  return 0;
}

//接收输入
//判断范围
//判断位数
//算出时与分
//去除BTJ的跨区时间，注意跨日
//输出