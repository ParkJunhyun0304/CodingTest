#include <stdio.h>

int main(){
  int n1,n2 = 0;
  scanf("%d",&n1);
  scanf("%d",&n2);
  if(n1>0){
    if(n2>0) printf("1");
    else printf("4");
  } 
  else{
    if(n2>0) printf("2");
    else printf("3");
  }
}