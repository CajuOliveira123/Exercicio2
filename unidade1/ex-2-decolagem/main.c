#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //acelaracao
    double a;
    //tempo
    double t;
    //velocidade atingida
    double va;
    //massa
    double m;
    //espaco percorrido
    double s;
    //trabalho mecanimo realizado
    double w;

    printf("Informe a massa do aviao (ton): ");
    scanf("%lf", &m);
    m = m * 1000;

    printf("Informe a acelaracao (m/s)2: ");
    scanf("%lf", &a);
    a = sqrt(a);
    //a = a * 3.6;

    printf("Informe o tempo gasto na decolagem (s): ");
    scanf("%lf", &t);

    va = a * t;
    printf("Velocidade = %lf\n", va);

    s = (a * t) * (a * t) / 2;
    //s = pow(a * t, 2) / 2;
    printf("Espaco percorrido = %lf\n", s);

    w = (m * va) * (m * va) / 2;
    printf("Trabalho realizado = %lf\n", w);



    return 0;
}
