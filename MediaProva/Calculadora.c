#include <stdio.h>

int main() {
    int n1, n2, n3, n4;
    int divi = 4;
    int calc = 0;

    printf("Adicione as Notas ao sistema.\n");
    printf("Nota 1\n");
    scanf("%d", &n1);
    printf("Nota 2\n");
    scanf("%d", &n2);
    printf("Nota 3\n");
    scanf("%d", &n3);
    printf("Nota 4\n");
    scanf("%d", &n4);

    calc = (n1 + n2 + n3 + n4) / divi;

    printf("%d", calc);

}