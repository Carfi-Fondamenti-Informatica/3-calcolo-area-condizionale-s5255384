#include <iostream>
using namespace std;

int main(){
    float a; float b;
    int opzione;

    cout<<"inserisci il valore a: "<<endl;
    cin>> a;
    cout<<"inserisci il valore di b: "<<endl;
    cin>>b;
    cout<<"inserire il numero corrispondente alla forma geometrica di cui calcolare l'area ( 0 Triangolo, 1 Quadrato, 2 Rettangolo): "<<endl;
    cin>>opzione;

    if(!cin or opzione>2){
        cout<<"Errore"<<endl;
        return -1;
    }

    switch(opzione){
        case 0:
            cout<< ((a*b)/2)<<endl;
            break;

        case 1:
            cout<<(a*a)<<endl;
            break;

        case 2:
            cout<<(a*b)<<endl;
            break;

        default:
            cout << "opzione non valida|\n";
    }
   return 0;
}
