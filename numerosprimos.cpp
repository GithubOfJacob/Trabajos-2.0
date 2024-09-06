
#include<iostream>

using namespace std;

int main()
{
/*
    int t = 10;
    int n = 5;
    int i = 0;
    
    while(i<n){
        cout<<"Repetición #"<<i<<endl;
        i++;
        break;
    }
    
    for(int j = 5; j < t; j++){
        if (j == 7){
            continue;
        }
        cout<<"Repetición #"<<j<<endl;
        j++;
        
    }
*/

    int x;
    int i = 2;
    
    cout<<"Dijite x";
    cin>>x;
    
    while (i < x && x%i != 0){
        i++;
    }
    

    if (i < x){
        cout<<"El numero no es primo"<<endl;
        
    }else{
        cout<<"El numero es primo"<<endl; 
        
    }

    
    
    
    
    
    return 0;
}
