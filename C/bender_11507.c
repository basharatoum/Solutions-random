#include <stdio.h>


int charToInt(char a[2]){
	int dir=0;
	if(a[0]=='+'&&a[1]=='x') dir=0;
	if(a[0]=='-'&&a[1]=='x') dir=1;
	if(a[0]=='+'&&a[1]=='y') dir=2;
	if(a[0]=='-'&&a[1]=='y') dir=3;
	if(a[0]=='+'&&a[1]=='z') dir=4;
	if(a[0]=='-'&&a[1]=='z') dir=5;
	return dir;
}
int main(){
	int L;
	char pos[2] = {'+','x'};

	scanf("%d",&L);
	while(L!=0){
		char a[2];
		pos[0]='+';
		pos[1]='x';
		for(int i=0;i<L-1;++i){
			scanf("%s",&a);
			if(a[0]!='N'){
				if(charToInt(pos)==0){
					if(charToInt(a)==2) {pos[1]='y';pos[0]='+';}
					
					if(charToInt(a)==3){ pos[1]='y'; pos[0]='-';}
					
					if(charToInt(a)==4) {pos[1]='z';pos[0]='+';}
			
					if(charToInt(a)==5){ pos[1]='z';pos[0]='-';}
					
				}else if(charToInt(pos)==1){
					if(charToInt(a)==2) { pos[1]='y'; pos[0]='-';}
					
					if(charToInt(a)==3) { pos[1]='y'; pos[0]='+';}
					
					if(charToInt(a)==4) { pos[1]='z';pos[0]='-';}
			
					if(charToInt(a)==5) { pos[1]='z'; pos[0]='+';}
					
				}else if(charToInt(pos)==2){
					if(charToInt(a)==2) { pos[1]='x'; pos[0]='-';}
					
					if(charToInt(a)==3){ pos[1]='x'; pos[0]='+';}
				}else if(charToInt(pos)==3){
					if(charToInt(a)==2) { pos[1]='x'; pos[0]='+';}
					
					if(charToInt(a)==3){ pos[1]='x'; pos[0]='-';}
				}else if(charToInt(pos)==4){
					if(charToInt(a)==4) { pos[1]='x'; pos[0]='-';}
					
					if(charToInt(a)==5){ pos[1]='x'; pos[0]='+';}
				}else if(charToInt(pos)==5){
					if(charToInt(a)==4) { pos[1]='x'; pos[0]='+';}
					
					if(charToInt(a)==5){ pos[1]='x'; pos[0]='-';}
				}

			}
		}
			printf("%c%c\n",pos[0],pos[1]);
		scanf("%d",&L);
	}
  return 0;
}