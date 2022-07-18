#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int countPrimes(int n) {
        vector<bool> prime(n+1,true);
        int c=0;
        prime[0]=prime[1]=false;
        for(int i=2;i<n;i++)
        {
            if(prime[i])
            {     c++;
            for(int j=2*i;j<n;j+=i)
                prime[j]=0;
            
        }
        }
        return c;
    }
};