///week12-2.cpp
///�O��ƦC
///�W�h:�e2���ۥ[
#include <stdio.h>
int main(){///�}�C���ŧi�A�k�䦳�L���ȡA�S���g������0
    int a[30]={0,1};///�̭��񵪮�
    printf("1 ");///���L�Ĥ@��
    for(int i=2; i<30;i++){///�b�L�᭱����
        a[i]=a[i-1]+a[i-2];
        printf("%d ",a[i]);
    }
}
