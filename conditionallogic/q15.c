#include <stdio.h>

int main() {
    int physics, chemistry, math, total, totalmathphysics;

    printf("Input the marks obtained in Physics: ");
    scanf("%d", &physics);
    
    printf("Input the marks obtained in Chemistry: ");
    scanf("%d", &chemistry);
    
    printf("Input the marks obtained in Mathematics: ");
    scanf("%d", &math);

    total = physics + chemistry + math;
    totalmathphysics = physics + math;

    printf("Total marks of Maths, Physics, and Chemistry: %d\n", total);
    printf("Total marks of Maths and Physics: %d\n", totalmathphysics);

    if ((math >= 65 && physics >= 55 && chemistry >= 50 && total >= 190) || totalmathphysics >= 140) {
        printf("The candidate is eligible.\n");
    } else {
        printf("The candidate is not eligible.\n");
    }
}
