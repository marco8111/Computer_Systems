#include <stdio.h>
/*Programa que calcula area do triangulo*/

float area_triangle(float base, float altura){
    float b = base;
    float a = altura;
    return (b*a)/2;
}
void main(){
        float b2, a2, area;
        area = area_triangle(b2, a2); 
        printf("Insira os valores de base e altura: ");
        scanf("%f %f", b2, a2);
        area = area_triangle(b2, a2); 
        printf("A area do triangulo é %1.2f ", area);
    }
    