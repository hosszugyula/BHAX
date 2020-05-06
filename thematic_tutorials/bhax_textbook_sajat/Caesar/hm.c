#include <stdio.h>
#include <stdlib.h>

int main()
{

    double **tm;
    
    tm = (double **) malloc(5*sizeof(double *)); //kasztolom, size_of-al megadom a double * méretét
    for(int i = 0; i<5; ++i)
        tm[i] = malloc((i+1)*sizeof(double)); //helyet foglalok a tm-nek, (i+1) ciklusváltozó + 1
        
    for(int i = 0; i<5; ++i) //végig megyek a sorokon
        for(int j=0; j<i+1; ++j) //j0-tol végigmegyek i+1-ig
            tm[i][j] = i;
            
   *(*(tm+1)+1) = 42.0; //második sor második oszlopa, értékül adjuk neki pl. az 42-öt
    
    for(int i = 0; i<5; ++i)
    {   printf("\n"); //soremelés mátrix szerű kiiráshoz
        for(int j=0; j<i+1; ++j)
            printf("%f ", tm[i][j]); //lebegőpontos számok ezért %f
    }
    
    for(int i = 0; i<5; ++i)
         free(tm[i]);  //felszabadítjuk  a tm[i]-t

    free(tm); //felszabadítjuk a tm[i]-t

    return 0;
}
