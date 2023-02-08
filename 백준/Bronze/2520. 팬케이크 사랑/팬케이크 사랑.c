#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    int s3[5];
    int s4[4];
    
    double s1[] = { 0.5, 0.5, 0.25, 0.0625, 0.5625 };

    int s2[] = { 1, 30, 25, 10 };

    for(int i=0;i<t;i++) {        
        int max = 1000000000;

        for (int i = 0; i < 5; i++) {
            scanf("%d", &s3[i]);
            int current = s3[i] / s1[i];
            if (max > current) max = current;
        }
        
        int count = 0;

        for (int i = 0; i < 4; i++) {
            scanf("%d", &s4[i]);
            count += (s4[i] / s2[i]);
        }

        if (max < count) {
            printf("%d\n", max);
        }
        else {
            printf("%d\n", count);
        }
    }
}