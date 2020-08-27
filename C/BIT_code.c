#include <stdio.h>

int bit[1000]={0};
void add(int number,int index){
    while(index<1000){
        bit[index]+=number; 
        index+= index&-index;       
    }
}

int sum(int index){
    int s = 0;
    while (index>=1)
    {
        s+=bit[index];
        index-= index &-index;
    }
    return s;
}



int main(){
    for(int i=0;i<100;++i){
        add(1,1); 
    }

    printf("%d",sum(999));

    add(100,1);
    printf("%d",sum(999));
    
    return 0;
}