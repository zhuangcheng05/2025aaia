///week08-2.cpp �w�w�ƧǪk Bubble Sort
#include <stdio.h>
int main()
{
    int a[100];
    for(int i=0;i<100;i++)
        scanf("%d",&a[i]);

    for(int k=0;k<99;k++){
        for(int i=0;i<99;i++){
            if(a[i]>a[i+1]){
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
    for(int i=0;i<100;i++)printf("%d ",a[i]);
}
