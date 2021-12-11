//
// Created by Francesco Dioda on 10/12/21.
//
#include <iostream>
#include "lib.h"
#include <cstring>
using namespace std;
void controllomaiuscola1(char arr1[10][20], char arr2[10]){
    for(int i=0;i<10;i++){
        for(int j=0;j<20;j++){
            if((int)arr1[i][j]<=90){
                arr1[i][j]=tolower(arr1[i][j]);
            }
        }
    }

    for(int i=0;i<10;i++){
        if((int)arr2[i]<=90){
            arr2[i]=tolower(arr2[i]);

        }}}
void confronto(char a1[10][20],char a2[10],int c) {
    for(int i=0;i<=10;i++) {
        if (strcmp(a2,a1[i]) == 0) {
            c=1;
            cout<<i+1;
            break;
        }

    }
    if (c!=1){
        cout<<"non presente.";
    }
}


