///weel10-2.cpp
#include <stdio.h>
int main(){
    printf("�п�J1�Ӿ��:");
    int n;
    scanf("%d",&n);
    ///printf("�Ӧ�Ʀr�O %d\n",n%10);
    ///printf("�Q��Ʀr�O %d\n",n/10 %10);
    ///printf("�ʦ�Ʀr�O %d\n",n/100 %10);
    while(n>0){///�p�G���ѤUn�N�~��
        printf("�Ʀr %d ��ּ��X:%d\n",n,n%10);///���
        n=n/10;///�Ʀr�ܤp�F ��1/10
    }
}
