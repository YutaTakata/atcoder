#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;



int main()
{
    int N;
    cin >> N;
    vector<int> t(N);
    for(int i = 0; i < N; ++i) cin >> t[i];
    int ans = (int) 1e9;
    for(int bit = 0; bit < (1<<N); ++bit)
    {
        int sum1 = 0;
        int sum2 = 0;
        for(int i = 0; i < N; ++i)
        {
            if(bit & (1<<i)) sum1 += t[i];
            else sum2 += t[i];
        }
        ans = min(ans, max(sum1, sum2));
    }

    cout << ans << endl;
}