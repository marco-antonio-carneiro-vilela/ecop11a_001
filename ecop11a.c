#include "volume.h"
#define PI 3.14159265359

float cubo(float aresta) {
    return aresta * aresta * aresta;
}

float paralelepipedo(float largura, float profundidade, float altura) {
    return largura * profundidade * altura;
}

float esfera(float raio) {
    return (4.0 / 3.0) * PI * raio * raio * raio;
}

float cilindro(float raio, float altura) {
    return PI * raio * raio * altura;
}

float piramide(float largura, float profundidade, float altura) {
    return (largura * profundidade * altura) / 3.0;
}