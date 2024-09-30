#include <stdio.h>
int main(){
    int T;
    printf("The number of test cases: ");
    scanf("%d",&T);
    while(T--){
        int X, Y;
        scanf("%d %d", &X, &Y);
        int total_hours = (X*4)+Y;
        printf("%d\n",total_hours);
    }
    return 0;
}