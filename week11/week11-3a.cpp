///week11-3a.cpp
///SOIT107_ADVANCE_001
#include <stdio.h>
int f(int a,int b){
	if(a<b) return -1;///this!
	if(a==b) return 0;///this!
	if(a>b) return 1;///this!
}
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d",f(a,b));
    return 0;
}
