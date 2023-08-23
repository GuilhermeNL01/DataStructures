#include <stdio.h>
#include <math.h>

struct Ponto {
    double x;
    double y;
};

double calcularDistancia(struct Ponto p1, struct Ponto p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

double calcularInclinacao(struct Ponto p1, struct Ponto p2) {
    return (p2.y - p1.y) / (p2.x - p1.x);
}

int main() {
    struct Ponto ponto1 = {1.0, 2.0};
    struct Ponto ponto2 = {4.0, 6.0};

    printf("Distância entre os pontos: %.2f\n", calcularDistancia(ponto1, ponto2));
    printf("Inclinação da reta: %.2f\n", calcularInclinacao(ponto1, ponto2));

    return 0;
}
