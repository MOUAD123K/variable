#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include<math.h>
#include<stdbool.h>
/*
int main()
{
    float C;
    float K;
    printf("saisi la température en Celsius : ");
    scanf("%f",&C);
    printf("saisi  la transforme en Kelvin : ");
    scanf("%f",&K);
    K = C + 273.15;
    printf("voila! la resulte de transformation de celsius est %.2f : ",K);


    return 0;
}
*/
/*
int main()
{
    float KM ;
    float YD = 0.9144 ;
    printf("veuillez entrer la destance en kilometres : ");
    scanf("%f",&KM);
    YD = KM * 1093.61 ;
    printf("la transformation de kilometres en yards %f ",KM);


}
   return 0 ;
*/

/*
int main()
{
    float kmh, ms;
    printf("Entrez la vitesse en km/h : ");
    scanf("%f", &kmh);
    ms = kmh * 0.27778;
    printf("%.2f kmh est egal a %.2f ms \n",kmh,ms);

    return 0;
}
*/
/*
int main()
{


    float C;
    printf("veuillez saisi la température en Celsiu : ");
    scanf("%f",&C);
    if(C < 0)
        printf("Solide");
    else
        if(0 <= C && C < 100  )
         printf("Liquide");
    else
        if (C > 100)
        printf("Gaz");



    return 0;
}
*/
int main (){
    int A , B ;
    printf("donnes le nombre A : ");
    scanf("%d",&A);
    printf("donnes le nombre B : ");
    scanf("%d",&B);
    A + B ;
    A * B ;
    A - B ;
    A / B ;
    printf("A + B = %d \n" ,A + B);
    printf("A - B = %d \n",A - B);
    printf("A * B = %d \n",A / B);
    printf("A / B : %d \n",A * B);




    return 0;



}








