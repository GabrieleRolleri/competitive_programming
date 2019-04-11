 #include <bits/stdc++.h>

using namespace std;

typedef __int128_t ll;

int main(){

    ll N, C1, C2;
    long long Nt, C1t, C2t;
    cin>>Nt>>C1t>>C2t;
    N=Nt;
    C1=C1t;
    C2=C2t;
    ll t;
    bool flag=false;
    if(C1>C2) {
        t = C1;
        C1=C2;
        C2=t;
        flag=true;
    }
    ll s=0, r=C2;
    ll old_s=1, old_r=C1;
    ll quotient, temp, x, y;
    while(r!=0){
        quotient=old_r/r;

        temp=r;
        r=old_r-quotient*temp;
        old_r=temp;

        temp=s;
        s=old_s-quotient*temp;
        old_s=temp;
    }
    if(C2!=0)
        y=(old_r-old_s*C1)/C2;
    x=old_s;
    ll GCD=old_r;
    x=x*(N/GCD);
    y=y*(N/GCD);
    ll u=C1/GCD, v=C2/GCD;
    ll aMin=LONG_LONG_MAX/2-100, bMin=LONG_LONG_MAX/2-100;
    ll sX, sY;
    for (ll k = (-x+1)/v; k < (-x+1)/v+10; k++) {
        sX = x + k * v;
        sY = y - k * u;
        if (sX + sY < aMin + bMin && sX > 0 && sY > 0) {
            aMin = sX;
            bMin = sY;
        }
    }
    long long aMint=aMin, bMint=bMin;
    if(!flag)
        cout<<aMint<<' '<<bMint;
    else
        cout<<bMint<<' '<<aMint;

    return 0;
}