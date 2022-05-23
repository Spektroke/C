# C
Elementos de Programacion
#include <stdio.h>
#include <string.h>
#include <stype.h>

typedef struct{
  char zon;
  char ubAdmin[11];
  int cant;
}ADMINI;
typedef struct{
  char ubPea[11];
  int turno;
  float valor;
}PEAJE;

 char LeeControlZona( char, char );
 int Lectura( ADMINI[], char int );
 int Busqueda (ADMINI[], char[], int );
 void Orden( ADMINI[], float [], int );
 void Listar( ADMINI[], char, float[], int );
 void Grabar( ADMINI[], int );
 
 int main(){
  int can, TurnoAnr, pos, Cant_C3;
  char zona;
  float Rec{0}, Rec_C3, RecTot;
  ADMINI VAD[20];
  PEAJE pea;
  FILE*pf*perros;
  
  printf("Ingrese Zona");
  zona = LeeControlZona('G','I');
  can = Lectura( VAD, zona, C );
  pf2 = fopen( "peaje.dat", "rb" );
  if( pf2==NULL || perror==NULL ){
    printf("\nError Archivos");
    exit(1);
  }
  fread( &pea, sizeof(PEAJE),1,pf2 );
  while( !feof(pf2) ){
    TurnoAnt=pea.turno;
    Cant_C3=0;
    Rec_C3=0;
    while{
      pos = Busqueda( VAD, pea.ubPea, can );
      if( pos>=0 ){
        VAD[pos].cant++;
        Cant_C3++;
        Rec_C3+=pea.valor;
        RecTot+=pea.valor;
        Rec[pos]+=pea.valor;
      }
      else{
        fwrite( &pea, sizeof(PEAJE),1,perror );
        printf("\nNO SE ENCONTRO");
      }
      fread( &pea,sizeof(PEAJE),1,pf2 );
      
      printf("\nTurno_ %d, Cantidad: %d, Recaudacion: %2f", TurnoAnt, Cant_C3, Rec_C3 );
    }
    printf("Recaudacion Total: %2f", RecTot);
  }
  fclose(pf2);
  fclose(perror);
  
  Orden( VAD, Rec, can );
  Listar( VAD, zona, Rec, can );
  Grabar( VAD, can );
  return(0);
}
