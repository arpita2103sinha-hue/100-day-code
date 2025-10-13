#include <stdio.h>

int main() {
    int num;
    int binary[32]; 
    int i = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    int n = num; // store original number

    while(num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }

    printf("Binary of %d is: ", n);
    for(int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}

