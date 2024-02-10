Problem statement: Given an array of unsorted elements, the idea is to find the length of the longest subsequence whose elements are in ascending order (from lowest to highest).
                  The elements in the subsequence do not necessarily have to appear in consecutive positions in the initial array, and the solution of LIS is not always unique.


Example: For elements {-3, 10, 5, 11, 15,21} we identify the following increasing subsequences.

    -3, 10, 11, 15, 21
    -3, 5, 11, 15, 21
    10, 11, 15, 21
    5, 11, 15, 21
    11, 15, 21

As we can see from the list, the longest increasing subsequence is {-3, 5, 11, 15, 21} with length 5. However, it’s not the only solution, as {-3, 10, 11, 15, 21} is also the longest increasing subsequence with equal length


NOTE: The file lis.c cosists code , I have wrote is to find the length longest increasing subsequence(more accurately non decreasing subsequence)
