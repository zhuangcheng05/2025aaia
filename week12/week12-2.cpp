///week12-2.cpp
///費氏數列
///規則:前2項相加
#include <stdio.h>
int main(){///陣列的宣告，右邊有他的值，沒有寫的都放0
    int a[30]={0,1};///裡面放答案
    printf("1 ");///先印第一項
    for(int i=2; i<30;i++){///在印後面的項
        a[i]=a[i-1]+a[i-2];
        printf("%d ",a[i]);
    }
}
