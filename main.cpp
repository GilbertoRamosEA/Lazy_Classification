#include "DataSet.h"
#include "DiscreteMaths.h"
#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main()
{
    DataSet ds;
    DiscreteMaths dm;
    double Xi, Yi;

    vector<double>x;
    vector<double>y;
    vector<double>d;

    x = ds.getX();
    y = ds.getY();
    d = ds.getD();

    vector<double> distanciaE = {0,0,0,0,0,0,0,0,0,0,0};

    cout << "Ingrese la edad: ";
    cin >> Xi;
    cout << "Ingrese la cantidad del prestamo: ";
    cin >> Yi;
    cout<<endl;

    for(int i = 0; i<x.size(); i++){
        distanciaE[i] = sqrt(((Xi-x[i])*(Xi-x[i]))+((Yi-y[i])*(Yi-y[i])));
    }

    int P1, P2, P3, P4;
    double KP = 0;

    for(int i = 0; i<distanciaE.size(); i++){
        if(distanciaE[i]>KP){
            KP = distanciaE[i];
        }
    }

    vector<int> defaultYN {2,2,2,2,2};
    vector<double> Keys {KP, KP, KP, KP, KP};

    for(int i = 0; i<distanciaE.size(); i++){
        if(distanciaE[i]<Keys[0]){
            Keys[0] = distanciaE[i];
            P1 = i;
            defaultYN[0] = d[i];
        }
    }

    for(int i = 0; i<distanciaE.size(); i++){
        if(distanciaE[i]<Keys[1] && i!=P1 ){
            Keys[1] = distanciaE[i];
            P2 = i;
            defaultYN[1] = d[i];
        }
    }

    for(int i = 0; i<distanciaE.size(); i++){
        if(distanciaE[i]<Keys[2] && i!=P1 && i!=P2){
            Keys[2] = distanciaE[i];
            P3 = i;
            defaultYN[2] = d[i];
        }
    }

    for(int i = 0; i<distanciaE.size(); i++){
        if(distanciaE[i]<Keys[3] && i!=P1 && i!=P2 && i!=P3){
            Keys[3] = distanciaE[i];
            P4 = i;
            defaultYN[3] = d[i];
        }
    }

    for(int i = 0; i<distanciaE.size(); i++){
        if(distanciaE[i]<Keys[4] && i!=P1 && i!=P2 && i!=P3 && i!=P4){
            Keys[4] = distanciaE[i];
            defaultYN[4] = d[i];
        }
    }

    int Yes = 0, No = 0;

    for(int i = 0; i<defaultYN.size(); i++){
        if(defaultYN[i] == 1){
            Yes++;
        }
        else{
            No++;
        }
    }


    if(Yes>No)
    {
        cout << "Prestamo Aprovado!!!" <<endl;
    }

    else{
        cout << "Prestamo rechazado :(" <<endl;
    }

    return 0;
}
