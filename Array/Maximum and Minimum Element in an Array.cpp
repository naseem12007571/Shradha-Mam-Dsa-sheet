class Solution
{
public:
    int findSum(int arr[], int n)
    {
        int ans = INT_MAX;
        int ans2 = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] < ans)
                ans = arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > ans2)
                ans2 = arr[i];
        }

        return ans + ans2;
    }
};
