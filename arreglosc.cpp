
#include<iostream>

using namespace std;

const int capacidad = 10;
int n = 0;
int v[capacidad]; 
int vari;

void add(int dato){
    if(capacidad == n){
        cout<<"¡El vector está lleno!"<<endl;
    }else{
        v[n] = dato;
        n++;
    }

}

void insertar(int n, int dato){
    if(capacidad == n){
        cout<<"¡El vector está lleno!"<<endl;
    }else{
        v[n] = dato;
        n++;
    }
    
    
}

void print(){
    for(int i=0; i<n; i++){
        cout<<v[i]<<"\t";
    }
    cout<<endl;
}


int main()
{
    srand(time(0));
    for(int i=0; i<5; i++){
        add(rand()%100);
    }
    
    print();
    
    cout<<"Inserte la posición:";
    cin>>n;
    n -= 1;
    
    cout<<"Inserte el dato:";
    cin>>vari;
    
    insertar(n, vari);
    
    
    
    print();
    
    
    
    
    
    return 0;
}