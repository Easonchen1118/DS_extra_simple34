#include <stdio.h>
//標準體重計算https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30792
int main(){
    int height, gender;
    float oupt;
    while (scanf("%d %d", &height, &gender) != EOF) {
        if (gender == 1) {
            oupt = (height - 80) * 0.7;
        }
        else {
            oupt = (height - 70) * 0.6;
        }
        printf("%.1f\n", oupt);
    }
    return 0;
}
