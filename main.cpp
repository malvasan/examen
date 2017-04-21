#include <iostream>

using namespace std;
/*
void cambio_valor(int x)
{
    x=x+1;
    cout<<"EL valor de y: "<<x<<endl;
}

int main()
{
    int y=5;
    cambio_valor(y);
    cout << "El valor de y: "<<y<< endl;
    return 0;
}
*/
/*
void cambio_referencia(int &x)
{
    x=x+1;
    cout<<"EL valor de y: "<<x<<endl;
}

int main()
{
    int y=5;
    cambio_referencia(y);
    cout << "El valor de y: "<<y<< endl;
    return 0;
}
*/
////////////////EJERCICIO 2/////////////////////////////////////
/*
int suma_recursiva(int x[],int tamano)
{
    if(tamano==1)
        return x[0];
    return x[tamano-1]+suma_recursiva(x,tamano-1);
}

int main()
{
    int x;
    cout <<"Ingresa el tamano: "<<endl;
    cin>>x;
    int arreglo[x];
    cout<<"Ingresa los elemntos: "<<endl;
    for(int i=0;i<x;++i){
        cin>>arreglo[i];
    }
    cout<<suma_recursiva(arreglo,x);
    return 0;
}
*/
/////////////////EJERCICIO 3///////////////////////////////////

/*
void multi(int matriz1[][2], int matriz2[][2], int fila,int matriz3[][2])
{
    for(int i=0;i<fila;++i){
        for(int j=0;j<fila;++j){
            matriz3[i][j]=0;
        }
    }
    for(int i=0;i<fila;++i){
        for(int j=0;j<fila;++j){
            for(int k=0;k<fila;++k)
                matriz3[i][j]+=(matriz1[i][k])*(matriz2[k][j]);
        }
    }
    return ;
}

int main()
{
    int matriz1[2][2]={{1,0},{0,1}};
    int matriz2[2][2]={{1,0},{0,1}};
    int matriz3[2][2];
    multi(matriz1,matriz2,2,matriz3);
    for(int i=0;i<2;++i){
        for(int j=0;j<2;++j){
            cout<<matriz3[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/
/////////////////EJERCICIO 4///////////////////////////////////

int tamano(char cadena[])
{
    int cont=0;
    for(int i=0;cadena[i]!='\0';++i){
        cont++;
    }
    return cont;
}

void inver(char cadena[],int tamano1,int zero=0)
{
    if(zero==(tamano(cadena)/2))
        return;
    char temp;
    temp=cadena[zero];
    cadena[zero]=cadena[tamano1-1];
    cadena[tamano1-1]=temp;
    return inver(cadena,tamano1-1,zero+1);
}

int main()
{
    char cadena[]="manita";
    int tam1=tamano(cadena);
    inver(cadena,tam1);
    cout<<cadena<<endl;
    inver(cadena,tam1);
    cout<<cadena<<endl;
    return 0;
}

