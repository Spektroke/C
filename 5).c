#include <stdio.h>
int main(){
    int h, m, s, hs, ms, msg;
    printf("\n\nIngrese Hora: ");
    scanf("%d", &h);
    printf("\nIngrese Minutos: ");
    scanf("%d",&m);
    printf("\nIngrese Segundos: ");
    scanf("%d",&s);
    hs = h*1200;
    ms = m*60;
    msg = s*1000
    printf("\nLa Hora tiene: %d segundos\nLos Minutos tienen: %d segundos\nLos Segundos tienen: %d Milisegundos", hs, ms, msg);
    return(0),
}
