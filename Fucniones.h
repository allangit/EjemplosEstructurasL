#ifndef FUCNIONES_H_INCLUDED
#define FUCNIONES_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
using namespace std;



void Grafo(){

    int n,m; /*vertices aristas*/

    int x,y;

    /*Declarar la matriz de adyacencia*/

    vector <vector<int> > G(n);/*grafo G(n)*/

    /*rellenar el grafo*/

    for(int i=0 ; i<n ; i++){

        for(int j=0; j< m; j++){

            cin>>x>>y;

            G[x].push_back(y);
            G[y].push_back(x);
        }
    }

    /*Imprimir el grafo*/

    for(int i=0 ; i<n ; i++){

            cout<<"Vertices Adyacentes a "<<i<<"::";

        for(int j=0; j< G[i].size(); j++){

            cout<<G[i][j]<<' ';

        }

        cout<<endl;
}


#endif // FUCNIONES_H_INCLUDED
