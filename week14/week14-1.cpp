///week14-1.cpp
///��p�������A�N�O��̤j���]��
#include <stdio.h>
int main(){
    printf("�п�J���la�Bzp ����b(ex:69 92)");
    int a,b;
    scanf("%d%d",&a,&b);
    int ans;
    for(int i=1;i<=a;i++){
        if (a%i==0 && b&i==0) ans =i;///�i�㰣
    }
    printf("�̤j���]�ƬO:%d\n",ans);
    printf("%d/%d����%d/%d\n",a,b,a/ans,b/ans);
}
