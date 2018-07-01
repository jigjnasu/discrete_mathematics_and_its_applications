![problem 1]()
### Solution -- O(1)
[solution_1.h]()

[solution_1].cpp]()

![output 1]()


![problem 2]()
### Solution -- O(n ^ 2)
[solution_2.h]()

[solution_2.cpp]()

![output 2]()


![problem 3]()
### Solution -- O(n ^ 2)
[solution_3.h]()

[solution_3.cpp)]()

![output 3]()


![problem 4]()
### Solution -- O(lg n)
[solution_4.h]()

[solution_4.cpp]()

![output 4]()


![problem 5]()
### Solution -- O(n)
[solution_5.h]()

[solution_5.cpp]()

![output 5]()


![problem 6]()
### Solution -- O(1)
[solution_6.h]()

[solution_6.cpp]()

![output 6]()

### Solution -- 6(b)
![solution 6 b]()


![problem 7]()
### Solution
##### Linear Search, will always have worst case scenario 4 comparrisons. Therefore the O(1)
##### Binary Search, will have O(lg n), because of divide and conquer. So lg(32) is 5.
[solution_7.h]()

[solution_7.cpp]()

![output 7]()


![problem 8]()
### Solution
##### Naive Iterative Power Algorithm, will always have worst case of n multiplication,
therefore, when n grows, the time complexity grows with n as well. But this is not the best solution
to calculate the power of base to the exponent. We can have a divide and conquer method.

##### Divide and Conquer Power Algortim, will have O(lg n) because of divide and conquer.
So when n grows time complexity will grow by lg n, which will me very efficient than n.

[solution_8.h]()

[solution_8.cpp]()

![output 8]()


![problem 9]()
###Solution
##### As it is a simple iterative approach to check wether bit is 1 or not, it will have O(n) complexity.

[solution_9.h]()

[solution_9.cpp]()


![problem 10]()
### Solution
##### As the number of ones' bits count is correct, therefore, the algorithm is okay.

[solution_10.h]()

[solution_10.cpp]()

### Solution 10(b)
##### The number of bitwise AND operations is equal to number of ones' bits.



![problem 11]()
### Solution
##### As we are iterating through all the subsets first. (n iterations)
##### And comparing with all other subsets for disjoint sets. (n iterations)
##### And then comparing two subsets all elements for disjoint check. (n iterations)
##### Therefore, time complexity O(n ^ 3)

[solution_11.h]()

[solution_11.cpp]()

### Solution 11(b)
##### If we need to find out an interger in all the subsets.
##### 1. Iterate through all the subsets. (n iterations)
##### 2. Trying to find out the number in Si th subset by comparing all values. (n iteartions)
##### 3. Time complexity O(n ^ 2)

![output 11]()


![problem 12]()
### Solution
##### 1. From the first loop, we have n iterations.
##### 2. From the second loop, we have n / 2 iterations.
##### 3. From the last loop, we have almost n / 2 iterations.

[solution_12.h]()

[solution_12.cpp]()

### Solution 12(a)
##### As mentioned above, if we multiply n . (n / 2) . (n / 2).
##### We will have, (n ^ 3) / 4 as the total time taken,
##### Therefore, O(n ^ 3).

### Solution 12(b)

![problem 13]()
### Solution

[solution_13.h]()

[solution_13.cpp]()

![output 13]()

### Solution 13(a)
##### Answer is 15
![solution 13 (a)]()
![output 13 (a)]()

### Solution 13(b)
##### At each iteration till n we will have y = y + cofficent * power(x, i), where i = 0 to n - 1.
##### Therefore, we will have n multiplications and n additions, so 2n.


![problem 14]()
### Solution

[solution_14.h]()

[solution_14.cpp]()

![output 14]()

### Solution 14(a)
##### Answer is 15
![solution 14(a)]()
![output 14(a)]()

### Solution 14(b)
##### At each iteration till n we will have y = y * x  + cofficent
##### Therefore, we will have n multiplications and n additions, so 2n.


![problem 15]()
### Solution

[solution_15.h]()

[solution_15.cpp]()

![output 15]()


![problem 16]()
### Solution

[solution_16.h]()

[solution_16.cpp]()

![output 16]()


![problem 17]()
### Solution

[solution17_.h]()

[solution_17.cpp)]()

![output 17]()


![problem 18]()
### Solution
![solution 18]()


![problem 19]()
### Solution
![solution 19]()


![problem 20]()
### Solution
![solution 20]()


![problem 21]()
### Solution
![solution 21]()


![problem 22]()

![solution 22]()

### Solution (a)
##### To find out the maximum interger of n elements in a list.
##### We will have (n + 1) comparissions from loop and n comparissions from the if condition.
##### Total time cost = 2n + 1, Time Complexity = O(n)

### Solution (b)
##### To search an element in a list using linear search algorithm.
##### We will have (n + 1) comparissions from loop and n comparissions from the if condition.
##### Total time cost = 2n + 1, Time Complexity = O(n)

### Solution (c)
##### To search an element in a list using binary search algorithm.
##### We will have lg(n) comparissions for mid check and, for calling left or right half 2 more checks.
##### Total time cost = 3lg(n), Time Comlexity = O(lg(n))


![problem 23]()
### Solution
![solution 23]()


![problem 24]()
### Solution
![solution 24]()

###Solution (a)
#### Explanation:--
1. With this algortithm we will be having worst case scenario n comparisons, therefore, its time complexity is O(n).
2. We can't use divide and conquer method to find, because the input list is not sorted it is unsorted. There is no way to find how to split the search.
3. We can use the max heap data structure, as it has only O(1) search for max element, however this is not the case as well as we have array type input.

By looking at the above arguments it seems that linear search for max element is optimal solution.

### Solution (b)
Yes it is a optimal soltution.


![problem 25]()
### Solution

[solution_25.h]()

[solution_25.cpp]()

![solution 25]()


![problem 26]()
### Solution

[solution_26.h]()

[solution_26.cpp]()

![solution 26]()


![problem 27]()
### Solution

[solution_27.h]()

[solution_27.cpp]()

![solution 27]()



![problem 28]()
### Solution

[solution_28.h]()

[solution_28.cpp]()

![solution 28]()



![problem 29]()
### Solution

[solution_29.h]()

[solution_29.cpp]()

![solution 29]()


![problem 30]()
### Solution

[solution_30.h]()

[solution_30.cpp]()

![solution 30]()



![problem 31]()
### Solution

[solution_31.h]()

[solution_31.cpp]()

![solution 31]()


![problem 32]()
### Solution

[solution_32.h]()

[solution_32.cpp]()

![solution 32]()


![problem 33]()
### Solution

[solution_33.h]()

[solution_33.cpp]()

![solution 33]()



![problem 34]()
### Solution

[solution_34.h]()

[solution_34.cpp]()

![solution 34]()


![problem 35]()
### Solution

[solution_35.h]()

[solution_35.cpp]()

![solution 35]()


![problem 36]()
### Solution

[solution_36.h]()

[solution_36.cpp]()

![solution 36]()


![problem 37]()
### Solution

![solution 37]()


![problem 38]()
### Solution

[time.h]()

[time.cpp]()

[meeting.h]()

[meeting.cpp]()

[scheduler.h]()

[scheduler.cpp]()

[merge_sort.h]()

[merge_sort.cpp]()

[main.cpp]()

### Time Compexity Calculation
![solution 38]()

### Output
![output 38]()


![problem 39]()
### Solution

![solution 39]()


![problem 40]()
### Solution a

![solution a]()

### Solution b

![solution b]()

### Solution c

![solution c]()

### Solution d

![solution d]()


![problem 41]()
### Solution

![solution 41]()


![problem 42]()
### Solution

[solution_42.h]()

[solution_42.cpp]()

### Algorithm
![solution 42]()

### Output
![output 42]()


![problem 43]()
### Solution

![solution 43]()


![problem 44]()
### Solution

![solution 44]()


![problem 45]()
### Solution

![solution 45]()


![problem 46]()
### Solution

### Solution a)
1. Iterate through 1 to n - m.
2. Compare str[i] to target[0].
3. If found, compare target with str starting at ith location. If not found there is no match.
4. If not found in the whole string, there is no match.

### Solution b)

[Solution_46.h]()

[Solution_46.cpp]()

### Solution c)
Let's calculate the time complexity.
1. First loop will run n - m + 1 times.

2. The first if condition will run n - m times, in worst case.

3. The for loop inside the match function will run, m times.

4. The condition inside the match function will have m - 1 worst case.

5. Total (n - m + 1).(n - m + (m) + m - 1)

6. (n - m).m = O(nm - m^2).

