/*
Determinar en un conjunto de n números naturales:
¿ Cuántos son menores que 15 ?
¿ Cuántos son mayores que 50 ?
¿ Cuántos están en el rango entre 25 y 45 ?

*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    //Variables
    int n,numeros;
    //Contadores
    int c=0,rango_c15=0,rango_c50=0, rango_c2545=0;

    cout<<"Ingresa la cantidad de datos a poner: "; cin>>n;

    do{
        cout<<c+1<<"- Ingresa el numero: "; cin>>numeros;

        if(numeros<15){
            rango_c15++;
        }
        if(numeros>50){
            rango_c50++;
        }
        if(numeros>=25 && numeros<=45){
            rango_c2545++;
        }

        //contador general
        c++;
    }while(c<n);

    cout<<"Menores que 15: "<<rango_c15<<endl;
    cout<<"Mayores que 50: "<<rango_c50<<endl;;
    cout<<"Rango entre 25 y 45: "<<rango_c2545<<endl;

    system("pause");
    return 0;
}