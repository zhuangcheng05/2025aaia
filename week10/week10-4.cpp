//week10-4.cpp
//1399. Count Largest Group
class Solution {
public:
    int countLargestGroup(int n) {
        int a[100]={};//這裡要放total出現幾次(用來統計total出現幾次)
        int largest=0;//紀錄最大那群裡面有幾個數?
        for(int i=1;i<=n;i++){//人類的迴圈
            int now=i;//現在要剝皮
            int total=0;
            while(now>0){
                //迴圈哩，把total一直加起來
                total += now%10;//剝皮now%10加到total
                now=now/10;//剝皮後，now變小了
            }
            a[total]++;//迴圈後面，要統計total出現幾次
            if(a[total]>largest)largest=a[total];
        }
        int ans=0;//最大的那群有哪幾群?
        for(int i=0;i<100;i++){
            if (a[i]==largest)ans++;//如果a[i]是最大的數那群，就多1群
        }
        return ans;
    }
};
