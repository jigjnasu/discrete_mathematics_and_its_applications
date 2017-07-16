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

[solution.cpp](https://github.com/cpp-rakesh/DiscreteMathematicsAndItsApplications/blob/master/Chapter_5_Induction_And_Recursion/5.4_Recursive_Algorithms/Exercises/repo/solution_7.cpp)


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
