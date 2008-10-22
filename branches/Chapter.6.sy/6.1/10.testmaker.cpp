#include<cstdio>
#include<cstdlib>
using namespace std;

const int N =   100000;
const int R =   10000;

int main(){
    printf("%d\n", N);
    for(int i=0; i<N; ++i){
        double a = rand()%R;
        double b = rand()%R + 1;
        double c = rand()%R;
        double d = rand()%R + 1;
        printf("%lf %lf\n", a/b, c/d);
    }
}
