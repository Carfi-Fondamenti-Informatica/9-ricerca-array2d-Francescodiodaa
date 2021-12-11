#include <iostream>
#include "string.h"
#include "lib.h"

using namespace std;
int main() {
char array[10][20];
char mat[20];
        for (int i = 0; i <10; i++) {
            cin >> array[i];

        }
        for(int i=0;i<1;i++){
            cin>>mat;
        }
        controllomaiuscola1(array,mat);
        confronto(array,mat,0);


    return 0;
    }


