#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int valid(char *date)
{
int tmp=0,tmp1=0,tmp2=0,flag=0;
if(strlen(date)<=10){
tmp=(date[0]-'0')*10+(date[1] - '0');
if(tmp > 0 && tmp <32) flag++;
tmp1=(date[3]-'0')*10+(date[4]-'0');
if(tmp1 > 0 && tmp1 <13) flag++;
tmp2=(((date[6]-'0')*10+(date[7]-'0'))*10+(date[8]-'0'))*10+(date[9]-'0');
if(tmp2 > 2000) flag++;
}
return flag==3 ? 1 : 0;

}
  main()
  {
  char xx[20];
  gets(xx);
  printf("data valida %d?", valid(xx));
  }

