#include <stdio.h>

int main() {
    int T;
    printf ("The number of test cases :");
    scanf("%d", &T);

    while (T--) {
        int N, K, M;
        scanf("%d %d %d", &N, &K, &M);
         
         int capacity_per_bag = K * M;

         int min_bags = (N + capacity_per_bag - 1) / capacity_per_bag;
         printf("%d\n", min_bags);
    }

    return 0;
}