
#include<iostream>

using namespace std;

int main()
{
    int clave;
    int claveT;
    int i;
    i = 0;

    cout<<"Digite la contraseña de su cuenta:"<<endl;
    cin>>claveT;
    
    cout<<"Digite su clave:"<<endl;
    cin>>clave;

    while (clave != claveT){
        cout<<"Intento fallido, vuelva a escribir su clave: ";
        cin>>clave;
        i += 1;
    }
    
    if (clave != claveT){
        cout<<"Cuenta bloqueada por superar los intentos: ";
    }else{
        cout<<"Bienvenido a su cuenta";
    }
    
    
    return 0;
}
