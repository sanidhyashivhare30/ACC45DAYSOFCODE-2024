#include <stdio.h>
int main(){
    int T;
    printf("The number of test cases: ");
    scanf("%d",&T);
    while(T--){
        int N, X;
        scanf("%d %d", &N, &X);
        int subscriptions = (N+5)/6;
        int total_cost = subscriptions*X;
        printf("%d/n",total_cost);
    }
    return 0;
}