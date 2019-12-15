#include <stdio.h>
#include <stdlib.h>
int pole[21][510];
int main(){
    int q,n,p1,p2,i,j,ans,k;
    scanf("%d",&q);
    for(i=1;i<=q;i++){
        ans=p1=p2=pole[i][0]=0;
        scanf("%d",&n);
        for(j=1;j<=n;j++) scanf("%d",&pole[i][j]);
        p1=pole[i][1],ans++;
        for(j=1;j<=n;j++){
            int lena=1000,lenb=1000;
            if(pole[i][j]==p1||pole[i][j]==p2) ans+=0;
            else{
                for(k=j+1;k<=n;k++){
                if(pole[i][k]==p1&&lena==1000) lena=k-j;
                if(pole[i][k]==p2&&lenb==1000) lenb=k-j;
            }
            //printf("lena=%d lenb=%d\n",lena,lenb);
            if(lenb>=lena) {p2=pole[i][j]; ans++;}
            else{p1=pole[i][j]; ans++;}
            }
            //printf("%d %d\n",p1,p2);
        }
        printf("%d\n",ans);
    }
}