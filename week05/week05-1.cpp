///week05-1.cpp
///�D�D:�}�CArray�t�Xfor�j��
#include <stdio.h>
int main ()
{///�}�C�ŧi4��A�̭���l��4�ӭȡA�j�A��
    int a[4]={10,20,30,40};
    for(int i=0;i<4;i++)
    {
        printf("%d ",a[i]);
    }///�q����for�j��,�q0�}�l
    printf("\n");///����

    a[0]=99;
    for(int i=0;i<4;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
