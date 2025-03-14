//week04-2.cpp
//SOIT107_Base_018
# include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        if(i%2==0) printf("%d ",i);
    }
    return 0;
}
