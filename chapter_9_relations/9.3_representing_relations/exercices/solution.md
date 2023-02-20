![problem 1](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.3_representing_relations/repo/problem_1.png)
#### Solution
![solution 1](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.3_representing_relations/repo/solution_1.png)

![problem 2](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.3_representing_relations/repo/problem_2.png)
#### Solution
![solution 2](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.3_representing_relations/repo/solution_2.png)

![problem 3](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.3_representing_relations/repo/problem_3.png)
#### Solution
<ol type="a">
  <li>
    $(1,1), (1,3)$ </br>
    $(2,2)$ </br>
    $(3,1), (3,3)$ </br>
  </li>
  <li>
    $(1,2)$ </br>
    $(2,2)$ </br>
    $(3,2)$ </br>
  </li>
  <li>
    $(1,1), (1,2), (1,3)$ </br>
    $(2,1), (2,3)$ </br>
    $(3,1), (3,2), (3,3)$ </br>
  </li>
</ol>

![problem 4](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.3_representing_relations/repo/problem_4.png)
#### Solution
<ol type="a">
  <li>
    $(1,1), (1,2), (1,4)$ </br>
    $(2,1), (2,3)$ </br>
    $(3,2), (3,3), (3,4)$ </br>
    $(4,1), (4,3), (4,4)$ </br>
  </li>
  <li>
    $(1,1), (1,2), (1,3)$ </br>
    $(2,2)$ </br>
    $(3,3), (3,4)$ </br>
    $(4,1), (4,4)$ </br>
  </li>
  <li>
    $(1,2), (1,4)$ </br>
    $(2,1), (2,3)$ </br>
    $(3,2), (3,4)$ </br>
    $(4,1), (4,3)$ </br>
  </li>
</ol>

![problem 5](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.3_representing_relations/repo/problem_5.png)
#### Solution
As the definition of irreflexive is that no element should have a connection to itself. $\therefore$ if a matrix $M$ is of $m x n$.
Then $A_{ij} \in R$ when $i \ne j$.
</br>
Example of irreflexive <br>
![problem 5](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.3_representing_relations/repo/irreflexive_yes.png)
</br>
Example of not irreflexive <br>
![problem 5](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.3_representing_relations/repo/irreflexive_no.png)

![problem 6](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.3_representing_relations/repo/problem_6.png)
#### Solution
As the symmetric relation is $(a,b) \in R$ and $(b,a) \in R$, $\therefore$ asymmetric relations are those which can not hold these simultaneously. </br>
As $M_{ij}$ where $i = j$ is also symmetric $\therefore$ we cannot have any 1 on the main diagonal where $i = j$ and as we cannot have $(a,b) \in R$ and $(b,a) \in R$ at the same time. </br>
For instance we cannot have 1 at $(1,2)$ and $(2,1)$. </br>
Example of asymmetric matrix is </br>
![problem 5](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.3_representing_relations/repo/asymmetric_yes.png) </br>
Example of not asymmetric matrix is </br>
![problem 5](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.3_representing_relations/repo/asymmetric_no.png) </br>

![problem 7](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.3_representing_relations/repo/problem_7.png)
#### Solution
<ol type="a">
  <li>
    <b>reflexive yes</b> because we have all $(1,1), (2,2), (3,3)$ </br>
    <b>irreflexive no</b> because we have $(1,1), (2,2), (3,3)$ </br>
    <b>symmetric yes</b> because we have all $(a,b) \in R$ and $(b,a) \in R$ </br>
    <b>antisymmetric no</b> because we have like $(1,3) ,(3, 1)$ where $1 \ne 3$</br>
    <b>transitive yes</b> because we have all $(a,b) \in R$, $(b,c) \in R$ and $(a,c) \in R$ </br>
  </li>
  <li>
    <b>reflexive no</b> $(1,1), (3,3)$ are not present </br>
    <b>irreflexive no</b> because we have $(2,2)$ </br>
    <b>symmetric no</b> because we have $(1,2), (3,2)$ but not $(2,1),(2,3)$ </br>
    <b>antisymmetric yes</b> </br>
    <b>transitive yes</b> because we have all $(a,b) \in R$, $(b,c) \in R$ and $(a,c) \in R$ </br>
  </li>
  <li>
    <b>reflexive no</b> $(2,2)$ is not present </br>
    <b>irreflexive no</b> because we have example $(1,1)$ </br>
    <b>symmetric yes</b> because we have all $(a,b) \in R$ and $(b,a) \in R$ </br>
    <b>antisymmetric no</b> because we have $(1,2), (2,1)$ where $1 \ne 2$ </br>
    <b>transitive no</b> because we have $(2,1), (1,2)$ but not $(2,2)$ </br>
  </li>
</ol>

</br>

![problem 8](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.3_representing_relations/repo/problem_8.png)
#### Solution
<ol type="a">
  <li>
    <b>reflexive no</b> because missing pair is $(2,2)$ </br>
    <b>irreflexive no</b> because we have $(1,1), (3,3), (4,4)$ </br>
    <b>symmetric no</b> because we have missing pair $(2,2)$ </br>
    <b>antisymmetric no</b> because we have $(1, 2), (2, 1)$ where $1 \ne 2$ </br>
    <b>transitive no</b> because we have $(1,4), (4, 3)$ but not $(1,3)$ </br>
  </li>
  <li>
    <b>reflexive yes</b> because we have all pairs $(1,1), (2,2), (3,3), (4,4)$ </br>
    <b>irreflexive no</b> because we have $(1,1), (3,3), (4,4)$ </br>
    <b>symmetric no</b> because we have $(1, 2)$ but not $(2, 1)$ </br>
    <b>antisymmetric yes</b>  </br>
    <b>transitive no</b> because we have $(1,2), (2, 1)$ but not $(2,2)$ </br>
  </li>
  <li>
    <b>reflexive no</b> because we don't have any pair $(1,1), (2,2), (3,3), (4,4)$ </br>
    <b>irreflexive yes</b> because we don't have any pair $(1,1), (2,2), (3,3), (4,4)$ </br>
    <b>symmetric yes</b> because we have for every $(b,a) \in R$ $(b,a) \in R$ </br>
    <b>antisymmetric no</b> because we have $(1,2), (2,1)$ where $1 \ne 2$  </br>
    <b>transitive no</b> because we have $(1,2), (2, 1)$ but not $(1,1)$ </br>
  </li>
</ol>

</br>

![problem 9](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.3_representing_relations/repo/problem_9.png)
#### Solution
<ol type="a">
  <li>
    $\{(a,b) | a > b\}$ </br>
    As there are total $100 * 100 = 100^2 = 10000$ entries of the matrix. </br>
    In the first row $(1,1), (1, 2), ... ,(1, 100)$ none entries will $\in R$ </br>
    In the second row $(2,1), (2, 2), ..., (2, 100)$ there are 1 entry. </br>
    And if we will observe then there are 1 + 2 + 3 + ... + 99 total entries. </br>
    which is $\frac{99 * 100}{2} = 4950$ </br>
  </li>
  <li>
    $\{(a,b) | a \ne b\}$ </br>
    as matrix is from $(1, 1), (1, 2), ... (1, 100)$ </br>
    $(100, 1), (100, 2), ... , (100, 100)$ </br>
    And if we observe closely only the diagonals values which are 100 in total have $a = b$ other than that all are $a \ne b$ </br>
    $\therefore$ solution is $10000 - 100 = 9900$
  </li>
  <li>
    $\{(a, b) | a = b + 1\}$ </br>
    In first row we will not have any value because it will start from $(1, 1), (1, 2), ..., (1, 100)$ </br>
    In second row we will have $(2,1)$ and so on one value in all the subsequent rows. </br>
    $\therefore$ solution is 99. </br>
  </li>
  <li>
    $\{(a, b) | a = 1\}$ </br>
    only the first row $(1, 1), (1, 2), ..., (1, 100)$ </br>
    $\therefore$ solution is 100. </br>
  </li>
  <li>
    $\{(a, b) | ab = 1\}$ </br>
    only one entry where $a = b = 1$ which is the first in first row $(1, 1)$ </br>
    $\therefore$ solution is 1
  </li>
</ol>
</br>

![problem 10](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.3_representing_relations/repo/problem_10.png)
#### Solution
as $A$ has 1000 elements $\therefore$ total elements of matrix are $1000^2 = 1000,000$ </br>
<ol type="a">
  <li>
    $\{(a, b) | a \le b\}$ </br>
    take a look at first row, we have $(1, 1), (1, 2), ..., (1, 1000)$ </br>
    second row $(2,1), (2, 2), ..., (2, 1000)$ </br>
    and if we look at all rows then we will find we have </br>
    $1000 + 999 + .... + 1 = \frac{1000 * 1001}{2} = 500 * 1001 = 500500$</br>
  </li>
  <li>
    $\{(a,b) | a = b\pm 1 \}$ </br>
    for instance in first row $a = 1$ and b goes from 1 to 1000 and for $a = b \pm 1$ b should be 0 or 2, but 0 can't be true, $\therefore$ just 1 element from first row. </br>
    from second row $a = 2$ and b goes from 1 to 1000 and for $a = b \pm 1$ b should be 1 or 3, $\therefore$ just 2 element from first row. </br>
    same goes for all the rows except last row where only 1 element will be picked because $a = 999$ or $a = 1001$ </br>
    $\therefore$ result is $(998 * 2) + 2 = 1996 + 2 = 1998$ </br>
  </li>
  <li>
    $\{(a,b) | a + b = 1000 \}$ </br>
    as the first row's elements are $(1,1), (1,2), ... , (1,1000)$, so we will have $(1,999)$ as 1 element $\in R$ </br>
    in the same way the second row will have $(2,998)$, third row will have $(3,997)$ and so on till second last row $(999,1)$ </br>
    $\therefore$ the solution is $1000-1 = 999$ </br>
  </li>
  <li>
    $\{(a,b) | a + b \le 1001 \}$ </br>
    as the first row's elements are $(1,1), (1,2), ... , (1,1000)$, so all elements are $\in R$ </br>
    in the same way second row will have $(2,1), (2,2), ..., (2, 999)$, means 999 elements </br>
    in this way we will have $1000 + 999 + 998 + ... + 1$ elements </br>
    $\therefore$ solution is $\frac{1000 * 1001}{2} = 500 * 1001 = 500500$ </br>
  </li>
  <li>
    $\{(a,b) | a \ne 0 \}$ </br>
    as all the elements falls between range of from $1 .. 1000$ </br>
    $\therefore$ the solution is all the elements which is $1000 * 1000 = 1000,000$ </br>
  </li>
</ol>
</br>

![problem 11](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.3_representing_relations/repo/problem_11.png)
#### Solution
Since the relation R is the relation that contains the pair (a, b) (where a and b are elements of the appropriate sets) if and only if R does not contain that pair, we can form the matrix for R simply by changing all the l's to 0's and 0's to l's in the matrix for R.</br>

![problem 12](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.3_representing_relations/repo/problem_12.png)
#### Solution
we can take the transpose of the matrix, since we want the $(i,j)^{th}$ entry of the matrix for $R^{−1}$ to be $1$ if and
only if the $(j,i)^{th}$ entry of R is 1.</br>

![problem 13](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.3_representing_relations/repo/problem_13.png)
#### Solution
A)
![solution 13 A](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.3_representing_relations/repo/solution_13_a.png)
B)
![solution 13 B](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.3_representing_relations/repo/solution_13_b.png)
C)
![solution 13 C](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.3_representing_relations/repo/solution_13_c.png)
 </br>

![problem 14](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.3_representing_relations/repo/problem_14.png)
#### Solution
A)
![solution 14 A](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.3_representing_relations/repo/solution_14_a.png)
B)
![solution 14 B](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.3_representing_relations/repo/solution_14_b.png)
C)
![solution 14 C](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.3_representing_relations/repo/solution_14_c.png)
D)
![solution 14 D](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.3_representing_relations/repo/solution_14_d.png)
E)
![solution 14 E](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.3_representing_relations/repo/solution_14_e.png)

![problem 15](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.3_representing_relations/repo/problem_15.png)
#### Solution
![solution 15](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.3_representing_relations/repo/solution_15.png)

##### code
[code](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.3_representing_relations/repo/solution_15.py)
```python
'''
    Problem 15
    Chapter 9.3
    Discrete Mathematics and its applications
    Rakesh Kumar
'''
def boolean_pow(A, B):
    R = []
    for i in range(len(A)):
        r = []
        for j in range(len(A)):
            v = 0
            for k in range(len(A)):
                if A[i][k] == 1 and B[k][j] == 1:
                    v = 1
            r.append(v)
        R.append(r)
    return R

def print_matrix(A):
    for r in range(len(A)):
        print('|', end='')
        for c in range(len(A[r])):
            print(f'{A[r][c]} ', end='')
        print('|')

if __name__ == '__main__':
    R = [[0,1,0], [0,0,1], [1,1,0]]
    print('a)')    
    A = boolean_pow(R, R)
    print_matrix(A)
    print('b)')
    B = boolean_pow(R, A)
    print_matrix(B)
    print('c)')
    C = boolean_pow(R, B)
    print_matrix(C)
```
![problem 16](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.3_representing_relations/repo/problem_16.png)
#### Solution
As $M_{R}$ has k non zero entries, $M_{R-1}$ will also have the same number entires because it is just the transpose of a matrix.

![problem 17](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.3_representing_relations/repo/problem_17.png)
#### Solution
As there are $n$ elements in $A$ $\therefore$ the total number of elements in $M_{R}$ is $n^2$ </br>
As the complement of a matrix is reverse means 0 is 1, and 1 is 0, $\therefore$ the total numbner of elements in $M_{\overline{R}}$ is $n^2 - k$

![problem 18](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.3_representing_relations/repo/problem_18.png)
#### Solution 
Solutions from 18 to 22 are in my paper notebook, I will bring them here later.

![23 - 28](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.3_representing_relations/repo/intro_23_to_28.png)

![problem 23](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.3_representing_relations/repo/problem_23.png)
#### Solution
$(a,b), (a,c)$</br>
$(b,c)$ </br>
$(c,b)$