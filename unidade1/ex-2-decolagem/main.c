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
    double v;
    //massa
    double m;
    //espaco percorrido
    double s;
    //trabalho mecanimo realizado
    double w;

    printf("Informe a massa do aviao (ton): ");
    scanf("%lf", &m);

    printf("Informe a acelaracao (m/s)2: ");
    scanf("%lf", &a);
    //a = sqrt(a);

    printf("Informe o tempo gasto na decolagem (s): ");
    scanf("%lf", &t);

    m = m * 1000;
    v = a * t;
    //s = v * t;
    s = a * pow(t, 2) / 2;
    w = m * pow(v, 2) / 2;
    v = v * 3.6;

    printf("Velocidade = %.2lf\n", v);
    printf("Espaco percorrido = %.2lf\n", s);
    printf("Trabalho realizado = %.2lf\n", w);

    return 0;
}
