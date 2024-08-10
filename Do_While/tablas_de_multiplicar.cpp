
#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){

    //variables


    //Contador
    int num,limite,i,multi;

    cout<<"Ingresa limite a multiplicar: "; cin>>limite;
    cout<<"Ingresa numero a multiplicar: "; cin>>num;

    i=1;
    do{
        
        cout<<num<<" X "<<i<<" = "<<num*i<<endl;
        i++;
    }while(i<=limite);

    system("pause");
    return 0;
}