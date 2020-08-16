#include <stdio.h>
#include <math.h>
int main(){
    int N=0,X,Y;
    char str[500];
    scanf("%d %d",&X,&Y);
    int i=0;

    scanf("%s",str);
    while(str[i]!='\0'){
        i++;
    }
    int len=i-1;
    for(int j=i-1;j>=0;j--){
        int value;
        if(str[j]>=65){
            value=str[j]-64+9;
        }else{
            value=str[j]-'0';
        }

        N+=pow(Y,len-j)*value;
    }
    printf("%d\n",N);
    return 0;
}