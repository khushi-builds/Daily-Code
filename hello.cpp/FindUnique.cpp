// Find Unique Element using XOR
// Problem: In an array where every element appears twice except one,
// find the unique element.
//
// Approach:
// XOR of two same numbers is 0.
// XOR of a number with 0 gives the number itself.
// So, XOR all elements of the array to get the unique element.
//
// Time Complexity: O(n)
// Space Complexity: O(1)


int findUnique(int *arr, int size)
{
    int ans = 0;

    for(int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }

    return ans;
}
