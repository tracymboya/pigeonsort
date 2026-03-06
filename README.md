##pigeonsort
Name:Tracy Mboya
RegNo:EB3/64680/23

##Description
Sorting 10 million numbers using pigeonhole sort:
This project implements Counting Sort (a variant of Pigeonhole Sort) in C++. It sorts non-negative integers (0 to 10,000,000) by counting occurrences and printing them in order.

##How It Works
User inputs the number of elements n.
Each element’s count is incremented in a static array.
The array is traversed to print numbers in sorted order.

##Time Complexity
Best/Average/Worst Case: O(n + k), where n = number of elements, k = range (0–10,000,000).
##Space Complexity: 
O(k) — requires a static array of size MAX+1.

##Limitations
Only works for non-negative integers within a fixed range.
High memory usage for very large ranges.
Not suitable for floats or negative numbers.

##Sample Input:
Enter number of elements: 5
Enter numbers (0 to 10000000):
3 1 4 2 0
Output:
0 1 2 3 4

Sorted numbers:
0 1 2 3 4
