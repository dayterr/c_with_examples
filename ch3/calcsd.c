#include <stdio.h>
#include <math.h>

float calculateSD(float data[]) {
    float sum = 0.0;
    float mean = 0.0;
    float sd = 0.0;

    for (int i = 0; i < 10; i++) {
        sum += data[i];
    }

    mean = sum / 10;

    for (int i = 0; i < 10; i++) {
        sd += pow(data[i] - mean, 2);
    }

    return sqrt(sd / 10);
}

int main() {
    float arr[10];
    printf("enter 10 elements:");
    for (int i = 0; i < 10; i++) {
        scanf("%f", &arr[i]);
    }

    printf("sd: %f", calculateSD(arr));
}