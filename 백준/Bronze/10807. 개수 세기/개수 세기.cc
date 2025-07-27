#include <stdio.h>

int main(){
  int arr[100];
  int size=0, find=0, count=0;
  scanf("%d",&size);
  for(int i=0;i<size;i++)
    scanf("%d",&arr[i]);
  scanf("%d",&find);
  for(int i=0; i<size; i++){
    if(arr[i]==find) count++;
  }
  printf("%d",count);
}