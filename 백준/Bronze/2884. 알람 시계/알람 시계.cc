#include <stdio.h>

int main(void) {
  int hour, min = 0;
  scanf("%d %d",&hour, &min);
  min = min - 45;
  if(min < 0){
    if(hour == 0){
      hour = 24;
    }
    min = 60 + min;
    hour --;
  }
  printf("%d %d",hour,min);
}