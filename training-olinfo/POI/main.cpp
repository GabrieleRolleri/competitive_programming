#include <bits/stdc++.h>
#define CYC(i, a, b) for(int i=a; i<b; i++)
#define CYCI(i, a, b) for(auto i=a; i!=b; ++i)

using namespace std;

typedef vector<int> vi;
typedef vector<bool> vb;
typedef vector<long long> vll;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<long, long> pll;

struct punteggio{
    int ID;
    int numberOfTasksSolved;
    int score;
};

bool comp(punteggio a, punteggio b){
    if(a.score>b.score)
        return true;
    if(a.score<b.score)
        return false;
    if(a.numberOfTasksSolved>b.numberOfTasksSolved)
        return true;
    if(a.numberOfTasksSolved<b.numberOfTasksSolved)
        return false;
    if(a.ID<b.ID)
        return true;
    return false;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, T, P;
    cin>>N>>T>>P;
    vb tasksSolved[N];
    bool temp;
    CYC(i, 0, N){
        tasksSolved[i].resize(T);
        CYC(j, 0, T){
            cin>>temp;
            tasksSolved[i][j]=temp;
        }
    }
    vi scoreTasks(T);
    CYC(i, 0, T){
        scoreTasks[i]=N;
        CYC(j, 0, N){
            scoreTasks[i]-=tasksSolved[j][i];
        }
    }
    vector<punteggio> leaderboard(N);
    CYC(i, 0, N){
        leaderboard[i].ID=i+1;
        leaderboard[i].numberOfTasksSolved=0;
        leaderboard[i].score=0;
        CYC(j, 0, T){
            leaderboard[i].numberOfTasksSolved+=tasksSolved[i][j];
            if(tasksSolved[i][j])
                leaderboard[i].score+=scoreTasks[j];
        }
    }
    sort(leaderboard.begin(), leaderboard.end(), comp);
    CYC(i, 0, N){
        if(leaderboard[i].ID==P){
            cout<<leaderboard[i].score<<' '<<i+1;
        }
    }


    return 0;
}
