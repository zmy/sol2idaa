#include<cstdio>
#include<algorithm>
using namespace std;

const int MAXN  =   250000+10;
const int MAXL  =   50;

int N;
char word[MAXN][MAXL];
char express[MAXN][MAXL];
int list[MAXN];

void init(){
    scanf("%d", &N);
    for(int i=0; i<N; ++i)
        scanf("%s", word[i]);
    for(int i=0; i<N; ++i){
        strcpy(express[i], word[i]);
        sort(express[i], express[i]+strlen(express[i]));
        list[i] = i;
    }
}

void output(int s,int t){
    static int setcnt = 0;
    if(t - s <= 10)return;
    printf("Set %d:\n", ++setcnt);
    for(; s<t; ++s)
        printf("%s\n", word[list[s]]);
}

bool cmp(int a,int b){
    return strcmp(express[a], express[b]) < 0;
}

void solve(){
    sort(list, list+N, cmp);
    for(int j,i=0; i<N; i=j){
        for(j=i+1; j<N; ++j)
            if(cmp(list[i], list[j]))break;
        output(i, j);
    }
}

int main(){
    init();
    solve();
}
