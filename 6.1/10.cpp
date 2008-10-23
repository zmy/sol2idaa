#include<cstdio>
#include<algorithm>
using namespace std;

const int MAXN  =   100000+10;

int N;
double pos[MAXN*2];
int list[MAXN*2];

void init(){
    scanf("%d", &N);
    for(int i=0; i<N; ++i)
        scanf("%lf%lf", &pos[i<<1], &pos[(i<<1)-1]);
}

bool cmp(int a,int b){
    if(pos[a] != pos[b])return pos[a] < pos[b];
    return a&1 && !(b&1);
}

void solve(){
    for(int i=0; i<N+N; ++i)
        list[i] = i;
    sort(list, list+N+N, cmp);
    
    int res = 0,cover=0;
    for(int i=0; i<N+N; ++i){
        if(list[i]&1)--cover;
        else ++cover;
        res = max(res, cover);
    }
    printf("%d\n", res);
}

int main(){
    init();
    solve();
}
