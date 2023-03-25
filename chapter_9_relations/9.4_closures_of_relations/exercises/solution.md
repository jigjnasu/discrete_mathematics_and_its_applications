![problem 1](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.4_closures_of_relations/repo/problem_1.png)
#### Solution
A)</br>
As the $A = {0,1,2,3}$ and $S = {(0,1), (1,1), (1,2), (2,0), (2,2), (3,0)}$</br>
for reflexive we need $(a,a) \in R$ for all $a \in A \therefore$  </br>
remaining ones are $(0,0),(3,3) \therefore$ the closure of $R$ is <\br>
${(0,0),(0,1)(1,1), (1,2), (2,0), (2,2), (3,0), (3,3)}$ </br>

B)</br>
As the $A = {0,1,2,3}$ and $S = {(0,1), (1,1), (1,2), (2,0), (2,2), (3,0)}$</br>
for symmetric we need $(b,a) \in R$ for all $(a,b) \in R$</br>
so we need to add $(1,0),(2,1),(0,2),(0,3) \therefore$ the symmetric closure of R is </br>
${(0,1), (0,2),(0,3), (1,0), (1,1), (1,2), (2,0), (2,1),(2,2), (3,0)}$

![problem 2](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.4_closures_of_relations/repo/problem_2.png)
#### Solution
The reflexive closure is the pairs which are present of the form $(a,a) \n R$ and adding the remaining ones. </br>
$R \cup \Delta$ where $\Delta ={\{ (a,b) | a = b = \mathbb{Z} X \mathbb{Z}} \}$

![problem 3](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.4_closures_of_relations/repo/problem_3.png)
#### Solution
For making symmetric closure we need all $(b,a) \in R$ and $(a,b) \in R$ </br>
in this case we need all pairs where $(a,b) | $ b divides a and $(b,a) | $ a divides b.</br>
$\therefore$ the symmetric closure of this is $(a,b) | $ a divides b or b divides a

![problem 4](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.4_closures_of_relations/repo/problem_4.png)
#### Solution
At every node / vertex add the loop if not present.

![problem 8](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.4_closures_of_relations/repo/problem_8.png)
#### Solution
In the directed graph add an edge to b -> a if there is any edge present from a -> b. because symmetric relations are those where $(b,a) \in R$ and $(a,b) \in R$

<b> Note: solution for problem 9 is in my physical notebook. </b></br>

![problem 10](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.4_closures_of_relations/repo/problem_10.png)
#### Solution
The symmetric closure in example 2 is $ \{(a,b) | a > b \} \therefore $ is not equal to $R$ relation. </br>
If we want to make it reflexive relations then, we will have all the relations which will always hold.

<b> Note: solution for problem 11 is in my physical notebook. </b></br>

![problem 12](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.4_closures_of_relations/repo/problem_12.png)
#### Solution
As $I_R$ means the main diagonal of the matrix $\therefore$ $M_R V I_R = M_R$ with addition of $1_s$ on main diagonal.</br>
And this is the representation of reflexive closure of $R$, since the closure is the same as $R$ except for the addition of all the pairs $(x,x) \in R$ that were not present.

![problem 13](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.4_closures_of_relations/repo/problem_13.png)
#### Solution
As the $M_R^t$ is the transpose of the matrix, we know that symmetric relations are those where $(b,a) \in R$ where $(a,b) \in R$ as well. </br>
$\therefore$ the $M^t$ represents those symmetric points, if we have $M_R V M_R^t$ which represents the symmetric closure of $R$.

![problem 14](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.4_closures_of_relations/repo/problem_14.png)
#### Solution
Suppose that the closure $C$ exists. We must show that $C$ is the intersection $I$ of all the relations $S$ that have property $P$ and contain $R$. Certainly $I \subseteq C$, since $C$ is one of the sets in the intersection. Conversely,
by definition of closure, $C$ is a subset of every relation $S$ that has property $P$ and contains $R$; $\therefore C%$
is contained in their intersection.

![problem 15](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.4_closures_of_relations/repo/problem_15.png)
#### Solution
If relation $R$ is already a irreflexive relation then there is no need of adding to that $R$. However, if $R$ is not irreflexive then there is no relation containing R that is irreflexive, since the loop or loops in R prevent any such relation
from being irreflexive. $\therefore$ in this case $R$ has no irreflexive closure.

![problem 16](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.4_closures_of_relations/repo/problem_16.png)
#### Solution
|     | solution |           path            | note                              |
| :-: | :------: | :-----------------------: | --------------------------------- |
|  a  |   yes    |        a, b, c, e         | this is the complete path         |
|  b  |    no    |       b, e, c, b, e       | there is no path from edge e to c |
|  c  |   yes    |     a, a, b, e, d, e      | this is the complete path         |
|  d  |    no    |    b, c, e, d, a, a, b    | there is no path from edge d to a |
|  e  |   yes    |  b, c, c, b, e, d, e, d   | this is the complete path         |
|  f  |    no    | a, a, b, b, c, c, b, e, d | there is no path from edge b to b |

![problem 17](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.4_closures_of_relations/repo/problem_17.png)
#### Solution
Length three means we should have four edges, and there are many in the problem 16.Following are the paths</br>
$aaaa, adea, bccb, beeb, becb, cccc, cbcc, ccbc, cbec, deed, dead, eeee, eade, edee, eede$

![problem 18](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.4_closures_of_relations/repo/problem_18.png)
#### Solution
|     | solution | path | length |
| :-: | :------: | :--: | ------ |
|  a  |   yes    |  ab  | 1      |
|  b  |   yes    | bea  | 2      |
|  c  |   yes    | beeb | 3      |
|  d  |   yes    | ade  | 2      |
|  e  |   yes    | bed  | 2      |
|  f  |   yes    | cbed | 3      |
|  g  |   yes    | ded  | 2      |
|  h  |   yes    | eade | 3      |
|  i  |   yes    | eabc | 3      |

![problem 19](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.4_closures_of_relations/repo/problem_19.png)
#### Solution
I have code this solution here 
```python
'''
    This program is for matrix relations calculations like M_R , M_R^2 etc
'''

class MR(object):
    def __init__(self, no_of_elements_in_set, ordered_pairs):
        self._M = [[0]*no_of_elements_in_set for i in range(no_of_elements_in_set)]
        for e in ordered_pairs:
            r = e[0] - 1
            c = e[1] - 1
            self._M[r][c] = 1
            
    def R(self, n):
        T = self._M
        for i in range(1, n):
            M = self._empty_matrix()
            for r in range(len(self._M)):
                for c in range(len(self._M)):
                    if self._bit_set(r, c, T):
                        M[r][c] = 1
            T = M
        return T
    
    def _bit_set(self, r, c, T):
        for i in range(len(self._M)):
            if self._M[r][i] == 1 and T[i][c] == 1:
                return True
        return False
    
    def _empty_matrix(self):
        return [[0]*len(self._M) for i in range(len(self._M))]
    
def print_matrix(M):
    print('-------------------------------------')
    for r in M:
        for e in r:
            print(f'{e}', end=' ')
        print('')
    print('-------------------------------------')

def solution_19():
    op = [(1, 3), (2, 4), (3, 1), (3, 5), (4, 3), (5, 1),(5, 2), (5, 4)]
    mr = MR(5, op)
    for i in range(1, 7):
        R = mr.R(i)
        print_matrix(R)

if __name__ == '__main__':
    solution_19()
```
here $R = M_R$ </br>
![R](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.4_closures_of_relations/repo/solution_19_r_m.png) </br>

a) $R^2 = M_R^2$ </br>
![R2](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.4_closures_of_relations/repo/solution_19_r2_m.png) </br>

b) $R^3 = M_R^3$ </br>
![R3](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.4_closures_of_relations/repo/solution_19_r3_m.png) </br>

c) $R^4 = M_R^4$ </br>
![R4](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.4_closures_of_relations/repo/solution_19_r4_m.png) </br>

d) $R^5 = M_R^5$ </br>
![R5](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.4_closures_of_relations/repo/solution_19_r5_m.png) </br>

e) $R^6 = M_R^6$ </br>
![R6](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.4_closures_of_relations/repo/solution_19_r6_m.png) </br>

f) $R^* = M_R v M_R^2 v M_R^3 v M_R^4 v M_R^5$ </br>
![f](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.4_closures_of_relations/repo/solution_19_r6_m.png) </br>

![problem 20](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.4_closures_of_relations/repo/problem_20.png)
#### Solution
a) </br>
$R^2$ means from $(a,b)$ there is a city $c$ where $(a,c)$ and $(c,b)$ </br>
$a->c, c->b \therefore a->b$</br>

b) </br>
$R^3$ means from $(a,b)$ there are two cities c, d where $(a,c), (c,d)$ and $(d,b)$ </br>
$a->c, c->d, d->b \therefore a->b$ </br>

c) </br>
The pair $(a, b)$ is in $R^*$ if there is a sequence of cities, $s_1, s_2, s_3, s_4, ..., s_n$, where $(a, s_1), (s_1, s_2), ..., (s_n, b)$

![problem 21](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.4_closures_of_relations/repo/problem_21.png)
#### Solution
a) </br>
$R^2$ means from $(a,b)$ there is a student $c$ where $(a,c)$ and $(c,b)$ </br>
$a->c, c->b \therefore a->b$</br>

b) </br>
$R^3$ means from $(a,b)$ there are two students c, d where $(a,c), (c,d)$ and $(d,b)$ </br>
$a->c, c->d, d->b \therefore a->b$ </br>

c) </br>
The pair $(a, b)$ is in $R^*$ if there is a sequence of students, $s_1, s_2, s_3, s_4, ..., s_n$, where every student is different than a or b, and $(a, s_1), (s_1, s_2), ..., (s_n, b)$

![problem 22](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.4_closures_of_relations/repo/problem_22.png)
#### Solution
since $R \subseteq R^*$, if $\Delta \subseteq R$, then $\Delta \subseteq$ $R^*$, hence proved

![problem 23](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.4_closures_of_relations/repo/problem_23.png)
#### Solution
Suppose that $(a,b) \in R^*$ then there is a path from a to b in (the digraph for) $R$. Given such a path, if $R$ is symmetric, then the everse of every edge in the path is also in $R$; therefore there is a path from b to a in $R$ (following the given path backwards). This means that $(b, a) \in R^*$ whenever $(a, b)$ is, exactly what we needed to prove.

![problem 24](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.4_closures_of_relations/repo/problem_24.png)
#### Solution
Yes we can have refelxive pairs from irreflexive. For instance $(1,2), (2,1)$ will have $R^2$ = $(1,2), (2,2)$