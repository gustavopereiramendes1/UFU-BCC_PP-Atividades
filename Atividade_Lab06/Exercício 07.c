#include <stdio.h>
#include <math.h>

struct polar{
    float raio;
    float argumento;
};

struct cartesianas{
    float  x;
    float y;
};

typedef struct polar polar;
typedef struct cartesianas cartesianas;
int main(){
    polar ponto1;
    cartesianas ponto2;

    printf("Digite o raio e o argumento: ");
    scanf("%f %f" , &ponto1.raio, &ponto1.argumento);

    ponto2.x = ponto1.raio * cos(ponto1.argumento);
    ponto2.y = ponto1.raio * sin(ponto1.argumento);

    printf("As coordenadas cartesianas correspondentes sao: (%.2f, %.2f)\n", ponto2.x, ponto2.y );

    return 0;
}