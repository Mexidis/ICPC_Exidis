#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int tmp = nums[0];
    int tmppos;
    for (int i = 1; i < n; i++)
    {
        if (abs(nums[i]) < abs(tmp)){
            tmp = nums[i];
        } else if (abs(nums[i]) == abs(tmp)) {
            int maximo = max(nums[i], tmp);
            tmp = maximo;
        }
    }


    cout << tmp << endl;


    return 0;
}
