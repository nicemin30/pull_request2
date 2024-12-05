#include <iostream>
#include <stdlib.h>
using namespace std;


int main(){
    int i = 1;
    while(i < 101){
        cout << "rand Case " << i << " : " << (double)rand()/(double)RAND_MAX << endl;
        i += 1;
    }
return 0;
}