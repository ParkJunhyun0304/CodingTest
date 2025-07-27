#include <stdio.h>

int main(void) {
  int die[3] = {0,} ,count=0 ,num=0;
  for(int i=0; i<3; i++) scanf("%d",&die[i]);
  for(int i=0; i<2; i++){
    if(die[i] == die[i+1]){
      count++;
      num = die[i];
      }
  }
  
  if(die[0] == die[2]){
    count++;
    num = die[0];
    }
  
  if(count == 0){
    num = die[0];
    for(int i=1; i<3; i++) if(num < die[i]) num = die[i];
    printf("%d",num*100);
  }
  else if(count == 1){
    printf("%d",num*100+1000);
  }
  else printf("%d",num*1000+10000);
}