#include <stdio.h>
#include <algorithm>
int sum[100][100]={0};

int getSum(int n1,int m1,int n2,int m2, int  sum[100][100]){
    int f1,f2,f3;
    if(n1==0&&m1==0){
        f3 = 0;
        f2 =0;
        f1 =0;
    }else if(n1==0){
        f1 = 0;
        f3 = 0;
        f2 = sum[n2][m1-1];
    }else if(m1==0){
        f2 = 0;
        f3 = 0;
        f1 = sum[n1-1][m2];
    }else{
        f1 = sum[n1-1][m2];
        f2 = sum[n2][m1-1];
        f3 = sum[n1-1][m1-1];
    }

    return sum[n2][m2]-f1-f2+f3;
}

int main(){
    int N,M,n1,m1,n2,m2,a[100][100]={0};
    scanf("%d %d",&N,&M);
    
    for(int i=0;i<N;i++){
        for (int j=0;j<M;j++){
            sum[i][j] = 0;
            scanf("%d",&a[i][j]);
            if(i==0&&j!=0){
                sum[i][j]=sum[i][j-1]+a[i][j];
            }else if(j==0 && i!=0){
                sum[i][j]=sum[i-1][j]+a[i][j];
            }else if(j ==0 && i==0){
                sum[i][j] = a[i][j];
            }else{
                sum[i][j] = sum[i-1][j]+sum[i][j-1]+a[i][j]-sum[i-1][j-1];
            }     
        }
    }

    scanf("%d %d %d %d",&n1,&m1,&n2,&m2);
    printf("sum of sub matrix is %d",getSum(n1,m1,n2,m2,sum));

    //cumulative sum

}