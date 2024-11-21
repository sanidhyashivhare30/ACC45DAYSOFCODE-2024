#include <stdio.h>
#include <string.h>

void encodeDNA(char*binarystring, int length, char*encodedDNA) {
    for(int i = 0; i < length; i += 2) {
        if(binarystring[i] == '0' && binarystring[i + 1] == 0) {
            encodedDNA[i / 2] = 'A';
        } else if(binarystring[i] == '0' && binarystring[i + 1] == '1') {
            encodedDNA[i / 2] = 'T';
        } else if(binarystring[i] == '1' && binarystring[i + 1] == '0') {
            encodedDNA[i / 2] = 'C';
        } else if(binarystring[i] == '1' && binarystring[i + 1] == '1') {
            encodedDNA[i / 2] = 'G';
        }
    }
    encodedDNA[length / 2] = '\0';
}

int main() {
    int T;
    printf("The number of test cases: ");
    scanf("%d", &T);

    while(T--) {
        int N;
        scanf("%d", &N);
        char binarystring[N + 1];
        scanf("%s", binarystring);
        char encodedDNA[N / 2 + 1];
        encodeDNA(binarystring, N, encodedDNA);
        printf("%s\n", encodedDNA);
    }

    return 0;
}