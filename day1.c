#include<stdio.h>
int main() {
    int x;
    printf("Enter points scored by a team: ");
    scanf("%d",&x);
    if (x>=1 && x<=20){
    if (x>=12){
        printf("Yes\n");
    } else{
        printf("No\n");
    }
  }
  return 0;
}