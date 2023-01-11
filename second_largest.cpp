#include <iostream>
using namespace std;

int largestElementIndex(int array[], int size)
{
    int max = INT16_MIN;
    int maxindex = -1;
    for (int i = 0; i < size; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
            maxindex = i;
        }
    }
    return maxindex;
}

int main()
{
    int array[]= {1, 2, 4, 5, 7, 9};
    int indexOfLargest = largestElementIndex(array,6);
    array[indexOfLargest] = -1;

    int secondLargestIndex = largestElementIndex(array,6);
    cout<<array[secondLargestIndex]<<endl;
    return 0;
}