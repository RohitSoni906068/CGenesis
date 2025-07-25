#include <stdio.h>

int main(){
    // condition ? expression-if-true : expression-if-false
    int r = 345;
    int s= 345452;
    r>s?printf(" %d is greater.\n",r):printf(" %d is greater.\n",s);
    return 0;
}