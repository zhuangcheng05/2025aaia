//week10-4.cpp
//1399. Count Largest Group
class Solution {
public:
    int countLargestGroup(int n) {
        int a[100]={};//�o�̭n��total�X�{�X��(�ΨӲέptotal�X�{�X��)
        int largest=0;//�����̤j���s�̭����X�Ӽ�?
        for(int i=1;i<=n;i++){//�H�����j��
            int now=i;//�{�b�n���
            int total=0;
            while(now>0){
                //�j����A��total�@���[�_��
                total += now%10;//���now%10�[��total
                now=now/10;//��֫�Anow�ܤp�F
            }
            a[total]++;//�j��᭱�A�n�έptotal�X�{�X��
            if(a[total]>largest)largest=a[total];
        }
        int ans=0;//�̤j�����s�����X�s?
        for(int i=0;i<100;i++){
            if (a[i]==largest)ans++;//�p�Ga[i]�O�̤j���ƨ��s�A�N�h1�s
        }
        return ans;
    }
};
