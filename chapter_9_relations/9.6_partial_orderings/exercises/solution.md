![problem 1](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.6_partial_orderings/repo/problem_1.png)
#### Solution

A relation $R$ on a set $S$ is is called *partial ordering* or *partial order* if it is reflexive, anti symmetric and transitive. </br> 

set $S=\{0,1,2,3\}$

a) $\{ (0,0), (1,1), (2,2), (3,3) \}$
| Reflexive     | Anti symmetric    | Transitive    | Partial Order | Note      |
| :------:      | :------:          | :------:      | :------:      |:------:   |
| yes  | yes | yes | yes | NA|

b) $\{ (0,0), (1,1), (2,0), (2, 2), (2,3), (3,2), (3,3) \}$
| Reflexive     | Anti symmetric    | Transitive    | Partial Order | Note      |
| :------:      | :------:          | :------:      | :------:      |:------:   |
| yes  | no | no | no | As $(2,3), (3,2) \in R$, where $2 \ne 3$ as it is not anti symmetric </br> $(3,2), (2,0) \in R$ but $(3,0) \notin R$, it is not transitive </br> |

c) $\{ (0,0), (1,1), (1,2), (2,2), (3,3) \}$
| Reflexive     | Anti symmetric    | Transitive    | Partial Order | Note      |
| :------:      | :------:          | :------:      | :------:      |:------:   |
| yes  | yes | yes | yes | NA|

d) $\{ (0,0), (1,1), (1,2), (1,3), (2,2), (2,3), (3,3) \}$
| Reflexive     | Anti symmetric    | Transitive    | Partial Order | Note      |
| :------:      | :------:          | :------:      | :------:      |:------:   |
| yes  | yes | yes | yes | NA|

e) $\{ (0,0), (0,1), (0,2), (1,0), (1,1), (1,2), (2,0), (2,2), (3,3) \}$
| Reflexive     | Anti symmetric    | Transitive    | Partial Order | Note      |
| :------:      | :------:          | :------:      | :------:      |:------:   |
| yes  | no | no | no | As $(0,1), (1,0) \in R$, where $0 \ne 1$ and $(0,2), (2,0) \in R$, where $0 \ne 2$ $\therefore$ it is not anti symmetric </br> As $(2,0), (0,1) \in R$ but $(2,1) \notin R$ \therefore$ it is not transitive |

![problem 2](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.6_partial_orderings/repo/problem_2.png)
#### Solution

A relation $R$ on a set $S$ is is called *partial ordering* or *partial order* if it is reflexive, anti symmetric and transitive. </br> 

set $S=\{0,1,2,3\}$

a) $\{ (0,0), (2,2), (3,3) \}$
| Reflexive     | Anti symmetric    | Transitive    | Partial Order | Note      |
| :------:      | :------:          | :------:      | :------:      |:------:   |
| no  | yes | yes | no | As $(1,1) \notin R \therefore$ it is not reflexive |

b) $\{ (0,0), (1,1), (2,0), (2,2), (2,3), (3,3) \}$
| Reflexive     | Anti symmetric    | Transitive    | Partial Order | Note      |
| :------:      | :------:          | :------:      | :------:      |:------:   |
| yes  | yes | yes | yes | NA |

c) $\{ (0,0), (1,1), (1,2), (2,2), (3,1), (3,3) \}$
| Reflexive     | Anti symmetric    | Transitive    | Partial Order | Note      |
| :------:      | :------:          | :------:      | :------:      |:------:   |
| yes  | yes | no | no | As $(3,1), (1,2) \in R$ but $(3,2) \notin R \therefore$ it is not transitive |

d) $\{ (0,0), (1,1), (1,2), (1,3), (2,0), (2,2), (2,3), (3,0), (3,3) \}$
| Reflexive     | Anti symmetric    | Transitive    | Partial Order | Note      |
| :------:      | :------:          | :------:      | :------:      |:------:   |
| yes  | yes | no | no | As $(1,2), (2,0) \in R$ but $(1,0) \notin R \therefore$ it is not transitive |

e) $\{ (0,0), (0,1), (0,2), (0,3), (1,0), (1,1), (1,2), (1,3), (2,0), (2,2), (3,3) \}$
| Reflexive     | Anti symmetric    | Transitive    | Partial Order | Note      |
| :------:      | :------:          | :------:      | :------:      |:------:   |
| yes  | no | no | no | As $(0,1), (1,0) \in R$, where $0 \ne 1$ and $(0,2), (2,0) \in R$, where $0 \ne 2$ $\therefore$ it is not anti symmetric </br> As $(2,0), (0,1) \in R$ but $(2,1) \notin R$ and $(2,0), (0,3) \in R$ but $(2,3) \notin R$ $\therefore$ it is not transitive |

![problem 3](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.6_partial_orderings/repo/problem_3.png)
#### Solution

a) a is taller than b? </br>

| Reflexive     | Anti symmetric    | Transitive    | Partial Order |
| :------:      | :------:          | :------:      | :------:      |
| No </br> $(a,a) \notin R$ as a person cannot be taller than himself | Yes </br>$(a,b) \in R$ then $(b,a) \notin R$ as if a is taller than b, b cannot be taller than a | Yes </br> $(a,b), (b,c) \in R$ then $(a,c) \in R$ | No </br> As this relation is not reflexive |

b) a is not taller than b? </br>
a is not taller than b means, as is equal to or shorter than b. </br>

| Reflexive     | Anti symmetric    | Transitive    | Partial Order |
| :------:      | :------:          | :------:      | :------:      |
|Yes </br> $(a,a) \in R$, a has the same height as a| No </br>$(a,b), (b,a) \in R$ and $a \ne b$, a and b can have same height and they are not same person | Yes </br> $(a,b), (b,c) \in R$ then $(a,c) \in R$ let's say a,b and c have same height | No </br> as it is not anti symmetric |

c) $a=b$ or a is ancestor of b </br>

| Reflexive     | Anti symmetric    | Transitive    | Partial Order |
| :------:      | :------:          | :------:      | :------:      |
|Yes </br> $(a,a) \in R$, $a = a$| Yes </br>$(a,b)$ then $(b,a) \notin R$ because as $a \ne b$, if a is ancestor b then b cannot be ancestor of a  | Yes </br> $(a,b), (b,c) \in R$ where $a \ne b \ne c$, if a is ancestor of b, and b is ancestor of c then a is ancestor of c | Yes |

d) a and b have a common friend </br>

| Reflexive     | Anti symmetric    | Transitive    | Partial Order |
| :------:      | :------:          | :------:      | :------:      |
|Yes </br> $(a,a) \in R$| No </br> $(a,b), (b,a) \in R$ where $a \ne b$ let's c is common friend of a and b, then b and a also have same c common friend $\therefore$ it is not anti symmetric | No </br> $(a,b), (b,c) \in R$ but $(a,c) \notin R$ let's a and b have x common friend, and b and c have y common friend then a and c doesn't have any common friend | No </br> It is not anti symmetric and transitive |

![problem 4](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.6_partial_orderings/repo/problem_4.png)
#### Solution

a) a is no shorter than b </br>

It means a has same height as b or a is taller than b </br>

| Reflexive     | Anti symmetric    | Transitive    | Partial Order |
| :------:      | :------:          | :------:      | :------:      |
| Yes </br> $(a,a) \in R$ | No </br>$(a,b), (b,a) \in R$ let's a and b has same height and $a \ne b \therefore$ it is not anti symmetric | Yes </br> $(a,b), (b,c) \in R$ then $(a,c) \in R$ Let's a, b and c has same height or a taller than b and b taller than c, therefore a is taller than c | No </br> It is not anti symmetric |

b) a is no shorter than b </br>

| Reflexive     | Anti symmetric    | Transitive    | Partial Order |
| :------:      | :------:          | :------:      | :------:      |
| No </br> $(a,a) \notin R$ As a person cannot be heavier than himself| Yes </br> $(a,b) \in R$ then $(b,a) \notin R$ where $a \ne b$ if a is heavier than b, then b cannot be heavier than a | Yes </br> if $(a,b), (b,c) \in R$ then $(a,c) \in R$ if a weighs more than b and b weighs more than c than a weighs more than c | No </br> As the relation is not reflexive |

c) $a=b$ or a is a descendent of b </br>

| Reflexive     | Anti symmetric    | Transitive    | Partial Order |
| :------:      | :------:          | :------:      | :------:      |
| Yes </br> $(a,a) \in R$ as $a = a$ | Yes </br> $(a,b) \in R$ then $(b,a) \notin R$ As a is descendent of b, then b cannot be descendent of a as $a \ne b$ | Yes </br> If $(a,b), (b,c) \in R$ then $(a,c) \in R$ If a is descendent of b, and b is descendent of c then a is descendent of a | Yes |


d) a and b do not have a common friend </br>

| Reflexive     | Anti symmetric    | Transitive    | Partial Order |
| :------:      | :------:          | :------:      | :------:      |
| No </br> $(a,a) \notin R$ A person's friend will be common to himself | No </br> $(a,b) \in R$ then $(b,a) \in R$ where $a \ne b$ if a and b do not have common friend, then b and a also do not have common friend | No </br> if $(a,b), (b,c) \in R$ then $(a,c) \notin R$ Let's x and y are friends of a, and p and q are friends of b, and x and y are friends of c </br> as a and b do not have common friends, b and c do not have common friends, but a and c have common friends | No </br> As it doesn't have reflexive, anti symmetric or transitive relations |

![problem 5](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.6_partial_orderings/repo/problem_5.png)
#### Solution

a) $(\mathbb{Z}, =)$ </br>

This set has $\lbrace(i,i)\rbrace$ where  $\mid i=-\infty$ to $+\infty$

| Reflexive     | Anti symmetric    | Transitive    | Partial Order |
| :------:      | :------:          | :------:      | :------:      |
| Yes </br> $(a,a) \in R$ </br> Example $(1,1)$| Yes </br> $(a,b), (b,a)$ where $a=b$ </br> Example $(-1,-1)$| Yes </br> if $(a,b), (b,c) \in R$ then $(a,c) \in R$ where $a = b = c$ </br> Example $(2,2),(2,2), (2,2)$| Yes | 

b) $(\mathbb{Z}, \ne)$ </br>

This set has $\lbrace (i,j) \rbrace \mid i$ and $j=-\infty$ to $+\infty$ and $i \ne j$

| Reflexive     | Anti symmetric    | Transitive    | Partial Order |
| :------:      | :------:          | :------:      | :------:      |
| No </br> $(a,a) \notin R$ as $a = a$ </br> Example $(1,1) \notin R$| No </br> $(a,b), (b,a) \in R$ where $a \ne b$ </br> Example $(1,2), (2,1)$| No </br> $(a,b), (b,a) \in R$ but $(a,c) \notin R$ </br> Example $(1,2), (2,1) \in R$ but $(1,1) \notin R$| No | 

c) $(\mathbb{Z}, \geq)$ </br>

This set has $\lbrace(i,j)\rbrace \mid i$ and $j=-\infty$ to $+\infty$ and $i \geq j$

| Reflexive     | Anti symmetric    | Transitive    | Partial Order |
| :------:      | :------:          | :------:      | :------:      |
| Yes </br> $(a,a) \in R$ because $a \geq a$ </br> Example $(1,1)$| Yes </br> $(a,b), (b,a) \in R$ where $a = b$ </br> Example $(1,1)$ | Yes </br> $(a,b),(b,c) \in R$ then $(a,c) \in R$ when $a = b = c$ </br> Example $(1,1),(1,1)$ then $(1,1)$ | Yes |

d) $(\mathbb{Z}, \nmid)$ </br>

This set has $\lbrace(i,j)\rbrace \mid  $i$ and $j=-\infty$ to $+\infty$ and $i \nmid j$

| Reflexive     | Anti symmetric    | Transitive    | Partial Order |
| :------:      | :------:          | :------:      | :------:      |
| No </br> $(a,a) \notin R$ as $a \mid a$ | No </br> $(a,b), (b,a) \in R$ where $a \ne b$ </br> Example $(2,3), (3,2)$ where $2 \nmid 3$ and $3 \nmid 2$| No </br> $(a,b), (b,a) \in R$ but $(a,c) \notin R$ </br> Example $(2,3), (3,2) \in R$ but $(2,2) \notin R$|

![problem 6](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.6_partial_orderings/repo/problem_6.png)
#### Solution

a) $(\mathbb{R}, =)$ </br>

This set has $\lbrace(i,i)\rbrace \mid i=-\infty$ to $+\infty$

| Reflexive     | Anti symmetric    | Transitive    | Partial Order |
| :------:      | :------:          | :------:      | :------:      |
| Yes </br> $(a,a) \in R$ </br> Example $(1,1)$| Yes </br> $(a,b), (b,a)$ where $a=b$ </br> Example $(-1,-1)$| Yes </br> if $(a,b), (b,c) \in R$ then $(a,c) \in R$ where $a = b = c$ </br> Example $(2,2),(2,2), (2,2)$| Yes | 


b) $(\mathbb{R}, <)$ </br>

This set has $\lbrace(i, j)\rbrace \mid i < j$, where $i$ and $j = -\infty$ to $+\infty$

| Reflexive     | Anti symmetric    | Transitive    | Partial Order |
| :------:      | :------:          | :------:      | :------:      |
| No </br> $(a,a) \notin R$ as $a=a$ | Yes  | Yes </br> $(a,b),(b,c) \in R$ then $(a,c) \in R$ as $a < b < c$ </br> Example $(1,3), (3,5), (1,5)$| No |

c) $(\mathbb{R}, \leq)$ </br>

This set has $\lbrace(i, j)\rbrace \mid i \leq j$, where $i$ and $j = -\infty$ to $+\infty$

| Reflexive     | Anti symmetric    | Transitive    | Partial Order |
| :------:      | :------:          | :------:      | :------:      |
| Yes </br> $(a,a) \in R \mid a = a$ </br> Example $(1,1)$ | Yes </br> $(a,b), (b,a) \in R \mid a = b$ </br> Example $(2,2)$ | Yes </br> $(a,b), (b,c) \in R$ then $(a,c) \in R$ when $a = b = c$ or $a < b < c$ </br> Example $(3,3),(3,3), (3,3)$ or $(1,2), (2,3), (1,3)$| Yes |


c) $(\mathbb{R}, \ne)$ </br>

This set has $\lbrace(i, j)\rbrace \mid i \ne j$, where $i$ and $j = -\infty$ to $+\infty$

| Reflexive     | Anti symmetric    | Transitive    | Partial Order |
| :------:      | :------:          | :------:      | :------:      |
| No </br> $(a,a) \notin R$ as $a=a$ | No </br> $(a,b), (b,a) \in R \mid a \ne b$ | No </br> $(a,b), (b,c) \in R$ then $(a,c) \not inR$ </br> Example $(1,2), (2,1) \in R$ but $(1,1) \notin R$ | No |


![problem 7](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.6_partial_orderings/repo/problem_7.png)
#### Solution

a) $R = (1,1),(1,2),(1,3), (2,1),(2,2), (3,3)$ </br>

| Reflexive     | Anti symmetric    | Transitive    | Partial Order |
| :------:      | :------:          | :------:      | :------:      |
| Yes | No </br> $(1,2), (2,1) \in R$ where $1 \ne 2$ | No </br> $(2,1), (1,3) \in R$ but $(2,3) \notin R$ | No |

b) $R = (1,1),(1,2),(1,3), (2,2), (3,3)$ </br>

| Reflexive     | Anti symmetric    | Transitive    | Partial Order |
| :------:      | :------:          | :------:      | :------:      |
| Yes | Yes | Yes $ | Yes |


c) $R = (1,1), (1,2), (1,3), (2,2), (2,3), (3,3), (3,4), (4,1), (4,2), (4,4)$ </br>

| Reflexive     | Anti symmetric    | Transitive    | Partial Order |
| :------:      | :------:          | :------:      | :------:      |
| Yes | Yes | No </br> $(2,3), (3,4) \in R$ but $(2,4) \notin R$ </br> $(3,4), (4,1) \in R$ but $(3,1) \notin R$ </br> $(3,4), (4,2) \in R$ but $(3,2) \notin R$ | No |

![problem 8](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.6_partial_orderings/repo/problem_8.png)
#### Solution

a) $R = (1,1),(1,3), (2,1),(2,2), (3,3)$ </br>

| Reflexive     | Anti symmetric    | Transitive    | Partial Order |
| :------:      | :------:          | :------:      | :------:      |
| Yes | Yes | No </br> $(2,1), (1,3) \in R$ but $(2,3) \notin R$ | No |

b) $R = (1,1),(2,2), (1,3), (3,3)$ </br>

| Reflexive     | Anti symmetric    | Transitive    | Partial Order -|
| :------:      | :------:          | :------:      | :------:      |
| Yes | Yes | Yes | Yes |

c) $R = (1,1), (1,3), (2,2), (2,3), (3,3), (3,4), (4,1), (4,2), (4,4)$ </br>

| Reflexive     | Anti symmetric    | Transitive    | Partial Order |
| :------:      | :------:          | :------:      | :------:      |
| Yes | Yes | No </br> $(2,3), (3,4) \in R$ but $(2,4) \notin in R$ </br> $(1,3), (3,4) \in R$ but $(1,4) \notin in R$ </br> $(3,4), (4,1) \in R$ but $(3,1) \notin in R$ </br> $(3,4), (4,2) \in R$ but $(3,2) \notin in R$| No |

![problem 9-11](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.6_partial_orderings/repo/problem_9-11.png)
#### Solution

9) $R = (a,a), (a,b), (a,c), (b,b), (b,d), (c,c), (d,d)$ </br>

| Reflexive     | Anti symmetric    | Transitive    | Partial Order |
| :------:      | :------:          | :------:      | :------:      |
| Yes | Yes | No </br> $(a,b), (b,d) \in R$ but $(a,d) \notin R$ | No |

10) $R = (a,a), (a,b), (a,c), (a,d), (b,b), (c,c), (c,d), (d,b), (d,d)$ </br>

| Reflexive     | Anti symmetric    | Transitive    | Partial Order |
| :------:      | :------:          | :------:      | :------:      |
| Yes | Yes | No </br> $(c,d), (d,b) \in R$ but $(c,b) \notin R$ | No |

11) $R = (a,a), (a,b), (b,b), (c,c), (d,c), (d,d)$ </br>

| Reflexive     | Anti symmetric    | Transitive    | Partial Order |
| :------:      | :------:          | :------:      | :------:      |
| Yes | Yes | Yes | Yes |

![problem 12](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.6_partial_orderings/repo/problem_12.png)
#### Solution

![equation](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.6_partial_orderings/repo/solution_12_eq_1.png)

**Reflexive** </br> 
As the $A^{-1}$ has same main diagonal values $\therefore$ it is reflexive. </br>
**Anti Symmetric** </br> 
Suppose $(a,b) \in R^{-1} | a \ne b$ then $(b,a) \in R$, so $(a,b) \notin R$ when $(b,a) \notin R^{-1}$ </br>
**Transitive** </br>
If $(a,b), (c,b) \in R^{-1}$, then $(b,a), (c,b) \in R$, so $(c,a) \in R$ and $\therefore$ $(a,c) \in R^{-1}$, Hence proved it's transitive.

![problem 13](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.6_partial_orderings/repo/problem_13.png)
#### Solution

**a)** $(\lbrace0,1,2\rbrace, \le)$ </br>
$(\lbrace0,1,2\rbrace, \ge)$ </br>
$\lbrace(0,0),(1,0),(1,1),(2,0),(2,1),(2,2)\rbrace$ </br>

**b)** $(\mathbb{Z},\ge)$ </br>
$(\mathbb{Z},\le)$ </br>

**c)** $(P(),\supseteq)$ </br>
$(P(),\subseteq)$ </br>

**d)** $(\mathbb{Z}^{+},|)$</br>
$(\mathbb{Z}^{+}, is \space multiple \space of)$

![problem 14](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.6_partial_orderings/repo/problem_14.png)
#### Solution

$(\mathbb{Z}^{+}, |)$

**a)** </br>

| Pair     | Result    | Note |
| :------:      | :------:  | :------:  |
| (5,15) | Yes | $\frac{15}{5} = 3$ |
| (6,9) | No | 6 doesn't divide 9 completely |
| (8,16) | Yes | $\frac{16}{8} = 2$ |
| (7,7) | Yes | $\frac{7}{7} = 1$ |

![problem 15](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.6_partial_orderings/repo/problem_15.png)
#### Solution

**a)** $\lbrace1\rbrace, \lbrace2\rbrace$ both are $\subseteq \lbrace0,1,2\rbrace$ but not $\lbrace1\rbrace \subsetneqq \lbrace2\rbrace$</br>

**b)** $\lbrace4\rbrace, \lbrace6\rbrace$ doesn't divide </br>
$\lbrace6\rbrace, \lbrace8\rbrace$ doesn't divide </br>

![problem 16](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.6_partial_orderings/repo/problem_16.png)
#### Solution

**a)** $\lbrace(1,1),(1,2),(1,3),(1,4),(2,1),(2,2) \rbrace$ </br>
**b)** $\lbrace(3,2),(3,3),(4,1),(4,2),(4,3),(4,4) \rbrace$ </br>
**c)** </br>
$(4,4)$ </br>
$\space\space\space\space |$ </br>
$(4,3)$ </br>
$\space\space\space\space |$ </br>
$(4,2)$ </br>
$\space\space\space\space |$ </br>
$(4,1)$ </br>
$\space\space\space\space |$ </br>
$(3,4)$ </br>
$\space\space\space\space |$ </br>
$(3,3)$ </br>
$\space\space\space\space |$ </br>
$(3,2)$ </br>
$\space\space\space\space |$ </br>
$(3,1)$ </br>
$\space\space\space\space |$ </br>
$(2,4)$ </br>
$\space\space\space\space |$ </br>
$(2,3)$ </br>
$\space\space\space\space |$ </br>
$(2,2)$ </br>
$\space\space\space\space |$ </br>
$(2,1)$ </br>
$\space\space\space\space |$ </br>
$(1,4)$ </br>
$\space\space\space\space |$ </br>
$(1,3)$ </br>
$\space\space\space\space |$ </br>
$(1,2)$ </br>
$\space\space\space\space |$ </br>
$(1,1)$ </br>

![problem 17](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.6_partial_orderings/repo/problem_17.png)
#### Solution

**a)** $(1,1,2), (1,2,1)$ </br>
First from left $1=1$, second $1<2 \therefore (1,1,2) < (1,2,1)$ </br>

**b)** $(0,1,2,3), (0,1,3,2)$</br>
First from left $0=0$, second $1=1$, third $2<3 \therefore (0,1,2,3) < (0,1,3,2)$ </br>

**c)** $(1,0,1,0,1), (0,1,1,1,0)$ </br>
First from left $1 > 0 \therefore (0,1,1,1,0) < (1,0,1,0,1)$ </br>

![problem 18](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.6_partial_orderings/repo/problem_18.png)
#### Solution

**a)**  *quack*, *quacking*, *quick*, *quicksand*, *quicksilver* </br>
**b)**  *open*, *opened*, *opener*, *opera*, *operand*  </br>
**c)**  *zero*, *zoo*, *zoology*, *zoological*, *zoom*  </br>

![problem 19](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.6_partial_orderings/repo/problem_19.png)
#### Solution

$0 < 0001 < 001 < 01 < 010 < 0101 < 011 < 11$ </br>

![problem 20](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.6_partial_orderings/repo/problem_20.png)
#### Solution

0
|
1
|
2
|
3
|
4
|
5

![problem 21](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.6_partial_orderings/repo/problem_21.png)
#### Solution
