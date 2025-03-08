class Solution
{
public:
    // Combine function to combine both parts in sorted order
    void merge(vector<int> &arr, int start, int mid, int end)
    {
        int i = start;
        int j = mid + 1;

        // Result array
        vector<int> resultArray;

        while (i <= mid && j <= end)
        {
            if (arr[i] <= arr[j])
            {
                resultArray.push_back(arr[i]);
                i++;
            }
            else
            {
                resultArray.push_back(arr[j]);
                j++;
            }
        }

        // Remaining elements from the first part
        while (i <= mid)
        {
            resultArray.push_back(arr[i]);
            i++;
        }

        // Remaining elements from the second part
        while (j <= end)
        {
            resultArray.push_back(arr[j]);
            j++;
        }

        // Copy elements from resultArray to Original Array
        int index = start;
        for (int k = 0; k < resultArray.size(); k++)
        {
            arr[index] = resultArray[k];
            index++;
        }
    }

    // To divide the array into 2 parts
    void mergeSort(vector<int> &arr, int start, int end)
    {
        // Base case
        if (start >= end)
        {
            return;
        }

        // Recursive case
        int mid = (start + end) / 2;

        // Start to mid -> first part of array
        mergeSort(arr, start, mid);

        // Mid+1 to end -> second part of array
        mergeSort(arr, mid + 1, end);

        // Combine function to combine both parts in sorted order
        merge(arr, start, mid, end);
    }
    vector<int> sortArray(vector<int> &arr, int start, int end)
    {
        mergeSort(arr, start, end);
        return arr;
    }
};
