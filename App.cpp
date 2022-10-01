#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        // pointer/ number of unique elements
        int j = 1;

        // iterate through the array
        for (int i = 0; i < nums.size() - 1; i++) 
        {
            // if the number at index i is different than the number at index j
            if (nums[i] != nums[i + 1]) 
            {
                // update the element at index j & increment j for next unique number
                nums[j] = nums[i + 1];
                j++;
            }
        }
        // number of unique elements (index of last unique element)
        return j;
    }
};

int main()
{
    vector<int> vector_one{ 1, 1, 2};
    vector<int> vector_two{ 0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    vector<int> vector_three{0, 1, 2, 3, 4, 5};
    vector<int> vector_four{ 0, 1, 1, 1, 1, 1, 1, 2, 3, 4, 5};

    Solution solution;
    cout << "vector_one : " << solution.removeDuplicates(vector_one) << endl;
    cout << "vector_two : " << solution.removeDuplicates(vector_two) << endl;
    cout << "vector_three : " << solution.removeDuplicates(vector_three) << endl;
    cout << "vector_four : " << solution.removeDuplicates(vector_four) << endl;

    return 0;
}
