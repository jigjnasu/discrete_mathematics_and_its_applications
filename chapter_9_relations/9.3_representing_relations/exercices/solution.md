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
A)</br>
| type          | result | notes                                                       |
| :------------ | :----- | :---------------------------------------------------------- |
| reflexive     | Yes    | $(1,1) \in R$, $(2,2) \in R$ and $(3,3) \in R$              |
| irreflexive   | No     | $(1,1) \in R$, $(2,2) \in R$ and $(3,3) \in R$              |
| symmetric     | Yes    | For all $(a,b) \in R$ and $(b,a) \in R$                     |
| antisymmetric | No     | For example $(1,3) \in R$ and $(3, 1) \in $ where $1 \ne 3$ |
| transitive    | Yes    | For all $(a,b) \in R$, $(b,c) \in R$ and $(a,c) \in R$      |

</br>B)</br>
| type          | result | notes                                                                              |
| :------------ | :----- | :--------------------------------------------------------------------------------- |
| reflexive     | No     | $(1,1) \not\in R$ and $(3,3) \not\in R$                                            |
| irreflexive   | No     | For example, $(2,2) \in R$                                                         |
| symmetric     | No     | For example, $(1,2) \in R$, $(3,2) \in R$ but $(2,1) \not\in R$, $(2,3) \not\in R$ |
| antisymmetric | Yes    |                                                                                    |
| transitive    | Yes    | For all $(a,b) \in R$, $(b,c) \in R$ and $(a,c) \in R$                             |

</br>C)</br>
| type          | result | notes                                                              |
| :------------ | :----- | :----------------------------------------------------------------- |
| reflexive     | No     | $(2,2) \not\in R$                                                  |
| irreflexive   | No     | For example, $(1,1) \in R$                                         |
| symmetric     | Yes    | For all $(a,b) \in R$ and $(b,a) \in R$                            |
| antisymmetric | No     | For example, $(1,2) \in R$ and $(2,1) \in R$ where $1 \ne 2$       |
| transitive    | No     | For example, $(2,1) \in R$ and $(1,2) \in R$ but $(2,2) \not\in R$ |

</br>

![problem 8](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.3_representing_relations/repo/problem_8.png)
#### Solution
A)</br>
| type          | result | notes                                                            |
| :------------ | :----- | :--------------------------------------------------------------- |
| reflexive     | No     | For example, $(2,2) \not\in R$                                   |
| irreflexive   | No     | For example $(1,1) \in R$, $(3,3) \in R$, $(4,4) \in R$          |
| symmetric     | Yes    | For all $(a,b) \in R$ and $(b,a) \in R$                          |
| antisymmetric | No     | For example, $(1, 2) \in R$, $(2, 1) \in R$ where $1 \ne 2$      |
| transitive    | No     | For example, $(1,4) \in R$, $(4, 3) \in R$ but $(1,3) \not\in R$ |

</br>B)</br>
| type          | result | notes                                                            |
| :------------ | :----- | :--------------------------------------------------------------- |
| reflexive     | Yes    | $(1,1) \in R$, $(2,2) \in R$, $(3,3) \in R$, $(4,4) \in R$       |
| irreflexive   | No     | $(1,1) \in R$, $(2,2) \in R$, $(3,3) \in R$, $(4,4) \in R$       |
| symmetric     | No     | For example, $(1, 2) \in R$ but $(2, 1) \not\in R$               |
| antisymmetric | Yes    |                                                                  |
| transitive    | No     | For example, $(1,2) \in R$, $(2, 1) \in R$ but $(2,2) \not\in R$ |

</br>C)</br>
| type          | result | notes                                                                      |
| :------------ | :----- | :------------------------------------------------------------------------- |
| reflexive     | No     | $(1,1) \not\in R$, $(2,2) \not\in R$, $(3,3) \not\in R$, $(4,4) \not\in R$ |
| irreflexive   | Yes    | $(1,1) \not\in R$, $(2,2) \not\in R$, $(3,3) \not\in R$, $(4,4) \not\in R$ |
| symmetric     | Yes    | For all $(b,a) \in R$ $(b,a) \in R$                                        |
| antisymmetric | No     | For example, $(1,2) \in R$, $(2,1) \in R$ where $1 \ne 2$                  |
| transitive    | No     | For example, $(1,2) \in R$, $(2, 1) \in R$ but $(1,1) \not\in R$           |

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

![problem 24](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.3_representing_relations/repo/problem_24.png)
#### Solution
$(a,a), (a,c)$ </br>
$(b,a), (b,b), (b,c)$ </br>
$(c,c)$

![problem 25](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.3_representing_relations/repo/problem_25.png)
#### Solution
$(a,c)$</br>
$(b,a)$</br>
$(c,d)$</br>
$(d,b)$

![problem 26](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.3_representing_relations/repo/problem_26.png)
#### Solution
$(a,a), (a,b)$</br>
$(b,a), (b,b)$</br>
$(c,a), (c,d)$</br>
$(d,d)$

![problem 27](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.3_representing_relations/repo/problem_27.png)
#### Solution
$(a,a), (a,b), (a,c)$</br>
$(b,a), (b,b), (b,c)$</br>
$(c,a), (c,b)$</br>
$(d,d)$

![problem 28](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.3_representing_relations/repo/problem_28.png)
#### Solution
$(a,a), (a,b)$</br>
$(b,a), (b,b)$</br>
$(c,c), (c,d)$</br>
$(d,c), (d,d)$

![problem 29](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.3_representing_relations/repo/problem_29.png)
#### Solution
As asymmetric relations are those where $(a,b) \in R$ but not $(b,a) \in R$ at the same time. Even when $a = b$.
$\therefore$ in directed graph, asymmetric should not have.</br>
1. loops</br>
2. connection in both directions from one vertex to another.

![problem 30](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.3_representing_relations/repo/problem_30.png)
#### Solution
As irreflexive relations are those where for every $a$ in $A$, $(a, a) \n R$. </br>
$\therefore$ we should not have any loops in the directed graphs.

![problem 31](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.3_representing_relations/repo/problem_31.png)
#### Solution
23)</br>
| type          | result | notes                                                               |
| :------------ | :----- | :------------------------------------------------------------------ |
| reflexive     | No     | All vertices doesn't have loops                                     |
| irreflexive   | Yes    | There are no loops on any vertex                                    |
| symmetric     | No     | For example, $(a,c) \in R$ but $(c,a) \not\in R$                    |
| antisymmetric | No     | For example, of $(b,c) \in R$ and $(c,b) \in R$                     |
| transitive    | No     | For example, $(c,b) \in R$ and $(b,c ) \in R$ but $(c,c) \not\in R$ |

</br>24)</br>
| type          | result | notes                                                                                                                |
| :------------ | :----- | :------------------------------------------------------------------------------------------------------------------- |
| reflexive     | Yes    | Loops on all vertices                                                                                                |
| irreflexive   | No     | Loops on all vertices                                                                                                |
| symmetric     | No     | For example $(a,c) \in R$ but $(c,a) \not\in R$                                                                      |
| antisymmetric | Yes    | It matches the definition of antisymmetric relations, as in all cases $(a,b) \in R$ and $(b,a) \in R$  where $a = b$ |
| transitive    | Yes    | In all cases where $(a,b) \in R$, $(b,c) \in R$ also present $(a,c) \in R$                                           |

</br>25)</br>
| type          | result | notes                                                               |
| :------------ | :----- | :------------------------------------------------------------------ |
| reflexive     | No     | All vertices doesn't have loops                                     |
| irreflexive   | Yes    | There are no loops on any vertex                                    |
| symmetric     | No     | For example $(a,c) \in R$ but $(c,a) \not\in R$                     |
| antisymmetric | Yes    | Because there is not any pair where $(a,b) \in R$ and $(b,a) \in R$ |
| transitive    | No     | For example, $(a,c) \in R$ but $(c,a) \not\in R$                    |
</br>

![problem 32](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.3_representing_relations/repo/problem_32.png)
#### Solution
26)</br>
| type          | result | notes                                                               |
| :------------ | :----- | :------------------------------------------------------------------ |
| reflexive     | Yes    | All vertices have loops                                             |
| irreflexive   | No     | All vertices have loops                                             |
| symmetric     | No     | For example, $(c,d) \in R$ but $(d,c) \not\in R$                    |
| antisymmetric | No     | For example, $(a,b) \in R$ and $(b,a) \in R$ where $a \ne b$        |
| transitive    | No     | For example, $(c,a) \in R$ and $(a,b ) \in R$ but $(c,b) \not\in R$ |

</br>27)</br>
| type          | result | notes                                                              |
| :------------ | :----- | :----------------------------------------------------------------- |
| reflexive     | No     | $(c,c) \not\in R$                                                  |
| irreflexive   | No     | For example, $(a,a) \in R$, $(b,b) \in R$                          |
| symmetric     | Yes    | For all $(a,b) \in R$ and $(b,a) \in R$                            |
| antisymmetric | No     | For example, $(a,b) \in R$ and $(b,a) \in R$ where $a \ne b$       |
| transitive    | No     | For example, $(c,a) \in R$ and $(a,c) \in R$ but $(c,c) \not\in R$ |

</br>28)</br>
| type          | result | notes                                                                      |
| :------------ | :----- | :------------------------------------------------------------------------- |
| reflexive     | Yes    | All vertices have loops                                                    |
| irreflexive   | No     | All vertices have loops                                                    |
| symmetric     | Yes    | For all $(a,b) \in R$ and $(b,a) \in R$                                    |
| antisymmetric | No     | For example, $(a,b) \in R$ and $(b,a) \in R$ where $a \ne b$               |
| transitive    | Yes    | In all cases where $(a,b) \in R$, $(b,c) \in R$ also present $(a,c) \in R$ |

![problem 33](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.3_representing_relations/repo/problem_33.png)
#### Solution
For example $(a,b) \in R$ then $(b,a) \in R^{-1}$. In that case if we will reverse the direction of every edge. We will be able to achieve that.

![problem 34](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.3_representing_relations/repo/problem_34.png)
#### Solution
For example $(a,b) \in R$ then $(a,b) \not\in \overline{R}$ and $(b,a) \in R$ even $a = b$ or $a \ne b$</br>
$\therefore$ in directed graph if there is an edge remove it and if no edge is there draw it.

![problem 35](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.3_representing_relations/repo/problem_35.png)
#### Solution
Let's prove it by mathematical induction</br>
Let's base case is $R^{1} = {M^{[1]}_R}$ at $n = 1$</br>
Let's take the inductive hypothesis case $R^n = {M^{[n]}_R}$
Let's boolean multiply by $R^1$ on both sides</br>
$R^1 \odot R^n = {M^{[1]}_R} \odot {M^{[n]}_R} = {M^{[n+1]}_R}$ as we know $M_{S \odot R} = M_R \odot M_S$ </br>
Hence proved, $\therefore$ proved by base and inductive case

![problem 36](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.3_representing_relations/repo/problem_36.png)
#### Solution
We assume that the two relations are on the same set.</br>
For the **union**, we simply take the union of the directed graphs, i.e., take the directed graph on the same vertices and put in an edge from $i$ to $j$ whenever there is an edge from $i$ to $j$ in either of them.</br>
For **intersection**, we simply take the intersection of the directed graphs, i.e., take the directed graph on the same vertices and put in an edge from $i$ to $j$ whenever there are edges from $i$ to $j$ in both of them.</br>
For **symmetric difference**, we simply take the symmetric difference of the directed graphs, i.e., take the directed graph on the same vertices and put in an edge from $i$ to $j$ whenever there is an edge from $i$ to $j$ in one, but not both, of them. </br>
Similarly, to form the **difference**, we take the difference of the directed graphs, i.e., take the directed graph on the same vertices and put in an edge from $i$ to $j$ whenever there is an edge from $i$ to $j$ in the first but not the second.</br>
To form the directed graph for the **composition** $S \odot R$ of relations $R$ and $S$ , we draw a directed graph on the same set of vertices and put in an edge from $i$ to $j$ whenever there is a vertex $k$ such that there is an edge from $i$ to $k$ in$ $R$, and an edge from $k$ to $j$ in $S$.