//week03-1.cpp �G�X�@��C++����
//Leetcode 2579.Count Total Number of Colored Cells
class Solution {
public:
    long long coloredCells(int n) {
        long long ans = n;//�n�h�g�o��A��Ʀr�ɯšA�K64�줸{�ܪ��ܪ������}
        return ans*ans+(ans-1)*(ans-1);//C/C++/Java/C#�����[����
    }
};
