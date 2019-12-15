/*
TASK: p1store.cpp
LANG: C++
AUTHOR: Teetat Wisanuyotin
COMPUTER NO: 019
*/

#include <bits/stdc++.h>

using namespace std;

int sum[100001];
int price[100001];
long long int money;
int n,q;
int question[1000];
int sumk[10000];
int maxx;
int checkprice[1000][1000];
int ans[1000];
int moneyleft[1000];
int main () {
   // freopen("6.in", "r", stdin);
    //ios_base::sync_with_stdio(false);
    //cin.tie(0);

    int i,j;
    cin>>n>>money>>q;
    for(i=0;i<n;i++) {
        cin>>price[i];
        if(i==0) sum[i]=price[i];
        else sum[i]=sum[i-1]+price[i];
    }
    for(i=0;i<q;i++) {
        cin>>question[i];
        question[i]--;
    }
    /*for(i=0;i<n;i++) {
        cout<<sum[i]<<" ";
    }*/
    for(i=0;i<q;i++) {
        for(j=0;j<n;j++) {
            if(j==0) checkprice[i][j]=price[question[i]];
            else {
                if(question[i]+j>=n || question[i]-j<0) {
                    ans[i]=j-1;
                    moneyleft[i]=money-checkprice[i][j-1];
                    break;
                }
                else {
                    checkprice[i][j]=checkprice[i][j-1]+price[question[i]+j]+price[question[i]-j];
                    if(checkprice[i][j]>money) {
                        ans[i]=j-1;
                        moneyleft[i]=money-checkprice[i][j-1];
                        break;
                    }

                }
            }
        }
    }

    for(i=0;i<q-1;i++) {
        cout<<ans[i]<<" "<<moneyleft[i]<<endl;
    }
    cout<<ans[q-1]<<" "<<moneyleft[q-1];


}
