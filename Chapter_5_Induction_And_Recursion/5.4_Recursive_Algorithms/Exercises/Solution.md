![problem 1](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/problem_1.jpg)

#### Solution
f(5) = 5 * f(4) = 120    
f(4) = 4 * f(3) = 24    
f(3) = 3 * f(2) = 6    
f(2) = 2 * f(1) = 2  
f(1) = 1 . 1    = 1

![problem 2](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/problem_2.jpg)

#### Solution
f(6) = 6 * f(5) = 720
f(5) = 5 * f(4) = 120    
f(4) = 4 * f(3) = 24    
f(3) = 3 * f(2) = 6    
f(2) = 2 * f(1) = 2  
f(1) = 1 . 1    = 1

![problem 3](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/problem_3.jpg)

#### Solution
gcd(8, 13) = gcd(8, 13 mod 8)  
gcd(5, 8) = gcd(5, 8 mod 5)  
gcd(3, 5) = gcd(3, 5 mod 3)  
gcd(2, 3) = gcd(2, 3 mod 2)  
gcd(1, 2) = gcd(1, 2 mod 1)  
gcd(0, 1) = 1

![problem 4](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/problem_4.jpg)

#### Solution
gcd(12, 17) = gcd(12, 17 mod 12)  
gcd(5, 12) = gcd(5, 12 mod 5)  
gcd(2, 5) = gcd(2, 5 mod 2)  
gcd(1, 2) = gcd(1, 2 mod 1)  
gcd(0, 1) = 1  


![problem 5](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/problem_5.jpg)

#### Solution
mpower(b, m, n), where b = base, m = mod and n = power  

mpower(3, 5, 11) = (mpower(3, 5, 5) ^ 2 * 3) mod 5  
mpower(3, 5, 5) = ((mpower(3, 5, 2) ^ 2 * 3) ^ 2 * 3) mod 5  
mpower(3, 5, 2) = ((mpower(3, 5, 1) ^ 2 * 3) ^ 2 * 3) mod 5  
mpower(3, 5, 1) = (((mpower(3, 5, 0) ^ 2 * 3) ^ 2 * 3) ^ 2 * 3) mod 5  
As mpower(3, 5, 0) = 1  
mpower(3, 5, 11) = (((((1 ^ 2) * 3) ^ 2) * 3 ) ^ 2 * 3) mod 5 = 2187 mod 5 = 2  

![problem 6](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/problem_6.jpg)

#### Solution
mpower(b, m, n), where b = base, m = mod and n = power  

mpower(2, 7, 10) = (mpower(2, 7, 5) ^ 2) mod 7   
mpower(2, 7, 5) = (((2, 7, 2) ^ 2 * 2) ^ 2) mod 7   
mpower(2, 7, 2) = ((((2, 7, 1) ^ 2) ^ 2 * 2) ^ 2) mod 7   
mpower(2, 7, 0) = (((((2, 7, 0) ^ 2 * 2) ^ 2) ^ 2 * 2) ^ 2) mod 7   

mpower(2, 7, 10) = (((((1) ^ 2 * 2) ^ 2) ^ 2 * 2) ^ 2) mod 7   
mpower(2, 7, 10) = (((((1) ^ 2 * 2) ^ 2) ^ 2 * 2) ^ 2) mod 7
mpower(2, 7, 10) = 1024 mod 7 = 9


![problem 7](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/problem_7.jpg)

#### Solution

![solution](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/solution_7.jpg)

[solution.cpp](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/solution_7.cpp)>


![problem 8](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/problem_8.jpg)

#### Solution

![solution](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/solution_8.jpg)

[solution.cpp](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/solution_8.cpp)


![problem 9](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/problem_9.jpg)

#### Solution

![solution](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/solution_9.jpg)

[solution.cpp](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/solution_9.cpp)


![problem 10](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/problem_10.jpg)

#### Solution

![solution](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/solution_10.jpg)

[solution.cpp](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/solution_10.cpp)



![problem 11](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/problem_11.jpg)

#### Solution

![solution](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/solution_11.jpg)

[solution.cpp](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/solution_11.cpp)


![problem 12](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/problem_12.jpg)

#### Solution

![solution](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/solution_12.jpg)

[solution.cpp](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/solution_12.cpp)



![problem 13](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/problem_13.jpg)

#### Solution

![solution](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/solution_13.jpg)

[solution.cpp](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/solution_13.cpp)



![problem 14](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/problem_14.jpg)

#### Solution

![solution](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/solution_14.jpg)

[solution.cpp](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/solution_14.cpp)



![problem 15](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/problem_15.jpg)

#### Solution

![solution](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/solution_15.jpg)

[solution.cpp](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/solution_15.cpp)


![problem 16](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/problem_16.jpg)

#### Solution
![solution](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/solution_16.jpg)


![problem 17](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/problem_17.jpg)

#### Solution
![solution](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/solution_17.jpg)

[solution.cpp](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/solution_17.cpp)


![problem 18](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/problem_18.jpg)

#### Solution
![solution](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/solution_18.jpg)


![problem 21](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/problem_21.jpg)

#### Solution
![solution](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/solution_21.jpg)


![problem 23](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/problem_23.jpg)

#### Solution
[solution.cpp](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/solution_23.cpp)

![solution](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/solution_23.jpg)


![problem 24](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/problem_24.jpg)

#### Solution
[solution.cpp](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/solution_24.cpp)

![solution](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/solution_24.jpg)


![problem 25](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/problem_25.jpg)
#### Solution
In Algorithm 2, we have (n + 1) multiplications for f(n), because f(n) = a * f(n - 1).
In Exercise 24, we have (n^2) + 1 multiplications for f(n), because f(n) = (a * a) * f(n - 1).


![problem 26](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/problem_26.jpg)

#### Solution
[solution.cpp](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/solution_26.cpp)

![solution](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/solution_26.jpg)


![problem 27](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/problem_27.jpg)

#### Solution
In Algorithm 2, we have (n + 1) multiplications for f(n), because f(n) = a * f(n - 1).  
In Exercise 26, we have lg(n) multiplications for f(n), beacuse f(n) = f(n / 2).


![problem 28](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/problem_28.jpg)

#### Solution
In Algorithm 7, we have O(n) additions, because it is an itrative solution, we need to add last two values to get nth fibonacci number.  
In Algorithm 8, we have O(2^n) additions, because it is a recrusive solution, where f(n) = f(n - 1) + f(n - 2).
We are adding twice the number of operations for every n.


![problem 29](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/problem_29.jpg)

#### Solution
[solution.cpp](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/solution_29.cpp)

![solution](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/solution_29.jpg)



![problem 30](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/problem_30.jpg)

#### Solution
[solution.cpp](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/solution_30.cpp)

![solution](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/solution_30.jpg)


![problem 31](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/problem_31.jpg)

#### Solution
Iterative solution has O(n) time complextiy as compare to O(2^n) for recursive.  
So Iterative solution is much faster than the recursive one.


![problem 32](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/problem_32.jpg)

#### Solution
[solution.cpp](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/solution_32.cpp)

![solution](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/solution_32.jpg)


![problem 33](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/problem_33.jpg)

#### Solution
[solution.cpp](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/solution_33.cpp)

![solution](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/solution_33.jpg)


![problem 34](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/problem_34.jpg)

#### Solution
Iterative solution has O(n) time complexity.  
Where as recursive solution has O(3^n) time complexity, because of duplicate call of f(n - 1), f(n - 2) on every call.

![problem 35](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/problem_35.jpg)

#### Solution
[solution.cpp](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/solution_35.cpp)

![solution](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/solution_35.jpg)

Iterative version has O(n) time complexity.  
However, recursive one is doing 7 multiplications in one go and they are re calculating f(n - 2) and f(n - 1) again and again.  
Therefore, O(7^n) is less efficient than O(n).


![problem 37](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/problem_37.jpg)

#### Solution
[solution.cpp](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/solution_37.cpp)

![solution](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/solution_37.jpg)


![problem 38](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/problem_38.jpg)

#### Solution
[solution.cpp](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/solution_38.cpp)

![solution](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/solution_38.jpg)


![problem 39](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/problem_39.jpg)

#### Solution
Let's prove by principal of Mathematical induction  
Base case  
when string size = 0, no need of reverse  
Inductive case  
swap nth char with 1st char.  
swap n - 1 char with 2nd char.  
as we are doing it in the algorithm  
so inductive hypothesis is  
swap kth char with (n - k)th char  
Inductive step is  
swap (k + 1)th char with (n - (k + 1))th char  
Therefor, hence proved


![problem 40](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/problem_40.jpg)

#### Solution
Let's prove by principal of Mathematical induction  
Base case  
When f(0) return the bitstring, no need of concatination  
Inductive case  
f(1) = s + f(0), it will concatinate string 1 time  
f(2) = s + f(1), it will conactinate string 2 times  
Inductive hypothesis  
f(k) = s + f(k - 1), it will concatinate string kth times.  
Add s on both the sides  
s + s + f(k - 1) = conatinating string (k + 1)th time.  
Therefore, our algorithm is correct. Hence Proved.


![problem 44](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/problem_44.jpg)

#### Solution
4 3 2 5 1 8 7 6  
4 3 2 5 -- 1 8 7 6  
4 3 -- 2 5 -- 1 8 -- 7 6  
3 4 -- 2 5 -- 1 8 -- 6 7  
2 3 4 5 -- 1 6 7 8  
1 2 3 4 5 6 7 8  


![problem 45](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/problem_45.jpg)

#### Solution
b d a f g h z p o k  
b d a f g -- h z p o k  
b d -- a f g -- h z -- p o k
b d -- a f -- g -- h z -- p o -- k
b d -- a f g -- h z -- k o p  
a b d f g -- h k o p z  
a b d f g h k o p z  


![problem 46](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/problem_46.jpg)

#### Solution
a) 1, 3, 5, 7 and 2 4, 6, 8, 10  
1 and 2  
3 and 2  
3 and 4  
5 and 4  
5 and 6  
7 and 6  
7 and 8  
Total = 7

b) 1, 2, 3, 4 and 6 7 8 9 10  
1 and 6  
2 and 6  
3 and 6  
4 and 6  
Total = 4  

c) 1 5 6 7 8 and 2 3 4 9 10  
1 and 2  
5 and 2  
5 and 3  
5 and 4  
5 and 9  
6 and 9  
7 and 9  
8 and 9  
Total = 8


![problem 47](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/problem_47.jpg)

#### Solution
Because Merge in Merge Sort does compare elements of both the list until one doesn't have any elements.  
So if in worst case scenario we will have (m + n) comparissions. But there will be one element left in one of the lists.  
Therefore, we can say we need most (m + n) - 1 comparissions.  
Example, 1 3 and 2 4  
1 < 2, 2 < 3 and 3 < 4  
In this case also we will have 4 as last left over.  
Therefore we have (2 + 2) - 1 comparissions.


![problem 48](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/problem_48.jpg)

#### Solution
We can at least two comparissions  
a) 1 4 and d) 4 4  
1 < 4 and 4 < 4 that's it  


![problem 50](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/problem_50.jpg)

#### Solution
[Quick Sort](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/quick_sort.h)

[Quick Sort Test](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/quick_sort_test.cpp)


![problem 51](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/problem_51.jpg)

#### Solution
Almot all element there will be n - 1 comparisions, and therefore O(n).


![problem 52](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/problem_52.jpg)

#### Solution
![solution 52](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/solution_52.jpg)


![problem 53](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/problem_53.jpg)

#### Solution
