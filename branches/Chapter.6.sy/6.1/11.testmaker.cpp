#include<cstdio>
#include<cstdlib>
using namespace std;

const int N     = 10000;
const int MAXL  = 20;

int main(){
    printf("%d\n", N);
    for(int i=0; i<N; ++i){
        int l = rand() % MAXL + 1;
        for(int j=0; j<l; ++j)
            printf("%c", (rand() % 26) + 'A');
        printf("\n");
    }
}
