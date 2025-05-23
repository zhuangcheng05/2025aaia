//week14-4.cpp
//UVA11063 B2-Sequence
//part 1...part6
#include <stdio.h>
int main()
{
	int a[100];
	int n,t=1;
	while( scanf("%d",&n) == 1){//Part 1:Part 1
		int bad = 0;//part3:bad or nat bad
		for(int i=0;i<n;i++){//Part 1:Part 1
			scanf("%d",&a[i]);//Part 1:Part 1
			if(i>0 && a[i-1] >= a[i])bad=1;//part5:bigger-bigger
		}
		if(a[0]<1) bad =1;//part 3
		int table[20002] = {};//part 6:table not equal
		for(int i=0;i<n;i++){
			for(int j=i;j<n;j++){
				int now = a[i]+a[j];
				if(table[now]>0)bad=1;//part 6
				table[now]++;
			}


	//Part 2: Output,Part 4:if(bad==0)elas
	if(bad==0)	printf("Case #%d: It is a B2-Sequence.\n\n",t);
	else printf("Case #%d: It is not a B2-Sequence.\n\n",t);
	t++;
	}
}
