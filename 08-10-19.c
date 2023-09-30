#include <stdio.h>

int LeeControl( int, int );
void CARGA( int[]; float[]; int );
float SUTOTAL( float[], int );
float( MaximoSueldo( flaot[], int );
int Licencia( int[], float[], float );
int BUSQUEDA( int, int, int );

int main(){
    int leg[6], cont;
    float suel[6], max;
    CARGA( leg, suel, 6 );
    total = SUTOTAL( suel, 6 );
    max = MaximoSueldo( suel, 6 );
/* FALTA FUNCION INFO_EMPLEADOS */    
    cant = LICENCIA( suel, 6 );
    
    printf("\nIngrese Numero de Legajo a Consultar: ");
    scanf("%d",&num);
    while( num!=0 ){
        pos = BUSQUEDA( leg, num, 6 );
        if( pos>=0 ){
            suel[pos];
        }
        else{
            printf("ERROR Codigo");
        }
        printf("\nIngrese Numero de Legajo a Consultar: ");
        scanf("%d", &num);
   }
   /*______________________________________________________________*/
   int LeeControl( int li, int ls ){
        int dato;
        do{
            scanf("%d",&dato);
        }while( dato<li || dato>ls );
        return(dato);
   }
   /*______________________________________________________________*/
   void CARGA( int vl[], float vs[], int n ){
        int i;
        for( i=0; i<n; i++ ){
            printf("Ingrese Legajo %d ",i+1);
            vl[i] = LeeControl( 100, 999 );
            printf("Ingrese Sueldo");
            scanf("%f",&vs[i]),
        }
   }
   /*______________________________________________________________*/
   flaot SUTOTAL( float vs[], int n ){
        int i, total=0;
        for ( i=0; i<n; i++ ){
            total = vs[i] + total;
        }
        return(total);
   }
   /*______________________________________________________________*/
   flaot MaximoSueldo( float vs[], int n ){
        int i, max=0;
        for( i=0; i<n; i++ ){
            if( vs[i]>max ){
                max = vs[i];
            }
        }
        return(max);
   }
   /*______________________________________________________________*/
   int LICENCIA( float vs[], int n ){
        int i, cont=0;
        for( i=0; i<n; i+1 ){
            if( vs[i]==0 ){
                cont++;
            }
        }
        return(cont);
   }
        
   
   
   
   
