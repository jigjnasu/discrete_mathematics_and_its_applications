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

![solution 20](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.6_partial_orderings/repo/solution_20.png)

![problem 21](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.6_partial_orderings/repo/problem_21.png)
#### Solution

![solution 21](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.6_partial_orderings/repo/solution_21.png)

![problem 22](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.6_partial_orderings/repo/problem_22.png)
#### Solution

**a)** </br>
![solution 22 a](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.6_partial_orderings/repo/solution_22_a.png)
</br>

**b)** </br>
![solution 22 b](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.6_partial_orderings/repo/solution_22_b.png)
</br>

**c)** </br>
![solution 22 c](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.6_partial_orderings/repo/solution_22_c.png)
</br>

**d)** </br>
![solution 22 d](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.6_partial_orderings/repo/solution_22_d.png)
</br>

![problem 23](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.6_partial_orderings/repo/problem_23.png)
#### Solution

**a)** </br>
![solution 23 a](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.6_partial_orderings/repo/solution_23_a.png)
</br>

**b)** </br>
![solution 23 b](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.6_partial_orderings/repo/solution_23_b.png)
</br>

**c)** </br>
![solution 23 c](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.6_partial_orderings/repo/solution_23_c.png)
</br>

**d)** </br>
![solution 23 d](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.6_partial_orderings/repo/solution_23_d.png)
</br>

![problem 24](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.6_partial_orderings/repo/problem_24.png)
#### Solution

![solution 24](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.6_partial_orderings/repo/solution_24.png)
</br>

![problem 25-27](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.6_partial_orderings/repo/problem_25-27.png)
#### Solution

**25)** </br>
$(a,a),(a,b),(a,c),(a,d)$ </br>
$(b,b),(b,c),(b,d)$ <br>
$(c,c)$ </br>
$(d,d)$ </br>

**26)** </br>
$(a,a),(a,b),(a,c),(a,d),(a,e)$ </br>
$(b,b),(b,d),(b,e)$ </br>
$(c,c),(c,d)$ </br>
$(d,d)$ </br>
$(e,e)$ </br>

**27)** </br>
$(a,a),(a,d),(a,e),(a,f),(a,g)$ </br>
$(b,b),(b,d),(b,e),(b,f),(b,g)$ </br>
$(c,c),(c,d),(c,e),(c,f),(c,g)$ </br>
$(d,d)$ </br>
$(e,e)$ </br>
$(f,f)$ </br>
$(g,d),(g,e),(g,f),(g,g)$ </br>

![problem 28](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.6_partial_orderings/repo/problem_28.png)
#### Solution

**Covering Relation** </br>
A pair $x,y$ in a poset satisfy the covering relation if $x \prec y$ but there is no $z$ such that $x \prec z \prec y$. </br>

$(1,4)$ is not a covering relation as $(1,2), (2,4)$ where $1 \prec 2 \prec 4$ </br>
Covering relations are </br>
$(1,2), (1,3), (2,4), (2,6), (3,6), (4,12), (6,12)$ </br>

![problem 29](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.6_partial_orderings/repo/problem_29.png)
#### Solution

$(\lbrace \phi, a \rbrace), (\lbrace \phi, b \rbrace), (\lbrace \phi, c \rbrace), (\lbrace a, ab \rbrace), (\lbrace a, ac \rbrace), (\lbrace b, ab \rbrace), (\lbrace b, bc \rbrace), (\lbrace c, ac \rbrace), (\lbrace c, bc \rbrace), (\lbrace ab, abc \rbrace), (\lbrace ac, abc \rbrace), (\lbrace bc, abc \rbrace)$

![problem 30](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.6_partial_orderings/repo/problem_30.png)
#### Solution

A pair can de defined as $(A,C)$ where $A =$ authority level and $C = Category$ </br>
We have following authorities </br>
$0 = unclassified$ </br>
$1 = confidential$ </br>
$2 = secret$ </br>
$3 = top \space secret$ </br>
We have following categories </br>
$s = spies$ </br>
$m = moles$ </br>
$d = double \space agents$ </br>
The following are the covering relations </br>
$(0, \phi) \prec (0, \lbrace s \rbrace), (0, \phi) \prec (0, \lbrace m \rbrace), (0, \phi) \prec (0, \lbrace d \rbrace)$ </br>
$(0, \lbrace s \rbrace) \prec (0, \lbrace s,m\rbrace), (0, \lbrace s \rbrace) \prec (0, \lbrace s,d\rbrace)$ </br>
$(0, \lbrace m \rbrace) \prec (0, \lbrace s,m\rbrace), (0, \lbrace m \rbrace) \prec (0, \lbrace m,d\rbrace)$ </br>
$(0, \lbrace d \rbrace) \prec (0, \lbrace s,d\rbrace), (0, \lbrace d \rbrace) \prec (0, \lbrace m,d\rbrace)$ </br>
$(0, \lbrace s,m \rbrace) \prec (0, \lbrace s,m,d \rbrace), (0, \lbrace s,d \rbrace) \prec (0, \lbrace s,m,d \rbrace), (0, \lbrace m,d \rbrace) \prec (0, \lbrace s,m,d \rbrace)$ </br>
Replace 0 with 1 and 2 will generate another 36 relations and 8 relations of each of the following where $(0,C) \prec (1, C), (1, C), \prec (2,C), (2,C) \prec (3,C) \subseteq \lbrace s,m,d \rbrace $. In total we have 72 relations. </br>

![problem 31](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.6_partial_orderings/repo/problem_31.png)
#### Solution

Let $(S, \preceq)$ be a finite poset. </br>
Let this poset is just the reflexive transitive closure of its covering relation. </br>
Suppose that $(a, b)$ is in the reflexive transitive closure of the covering relation. </br>
Then either $a = b$ or $a \prec b$ (in which cases certainly $a \preceq b$) or else there is a sequence $a \prec a_1 \prec a_2 \prec ... \prec a_n \prec b$,in which case again $a \preceq b$, by the transitivity of $\preceq$ Conversely, suppose that $a \preceq b$. If $a = b$, then $(a, b)$ is certainly
in the reflexive transitive closure of the covering relation. If $a \prec b$ and there is no $z$ such that $a \prec z \prec b$,
then $(a, b,)$ is in the covering relation and again $\therefore$ in its reflexive transitive closure. </br> 
Otherwise, let $a \prec a_1 \prec a_2 \prec ... \prec a_n \prec b$ be a longest possible sequence of this form; since the poset is finite, there must
be such a longest sequence. </br>
Then no intermediate elements can be inserted into this sequence (to do so would lengthen it), so each pair $(a,a_1), (a_1 ,a_2), ... , (a_n,b)$ is in the covering relation, so again $(a,b)$ is in its reflexive transitive closure.  </br>
Hence proved </br>

![problem 32](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.6_partial_orderings/repo/problem_32.png) </br>
![problem 32 a](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.6_partial_orderings/repo/problem_32_a.png)
#### Solution

**a)** </br>
$l, m$ </br>
**b)** </br>
$a,b,c$ </br>
**c)** </br>
As $l$ and $m$ are on the same top position, $\therefore$ there is **no** greatest element. </br>
**d)** </br>
As $a,b$ and $c$ are on the bottom position, $\therefore$ there is **no** least element. </br>
**e)** </br>
Upper bounds of $\lbrace a,b,c \rbrace$ are $\lbrace k,l,m \rbrace$ because $\lbrace a,b,c \rbrace \prec \lbrace k,l,m \rbrace $. </br>
**f)** </br>
Least upper bound of $\lbrace a,b,c \rbrace$ is $k$ as $\lbrace a,b,c \rbrace \prec k \prec \lbrace l,m \rbrace$. </br>
**g)** </br>
There are no lower bounds of $\lbrace f,g,h \rbrace$ as there is no $x$ element which $x \prec \lbrace f,g,h \rbrace$, where $x \in A$ </br>
**h)** </br>
There is no greatest lower bound as there is no lower bounds for $\lbrace f,g,h \rbrace$ as mentioned in **g)** . </br>

![problem 33](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.6_partial_orderings/repo/problem_33.png) </br>
#### Solution

Hasse diagram  </br>
![solution 33](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.6_partial_orderings/repo/solution_33.png) </br>

**a)** </br>
$24, 45$ as there is no $x$ which follows $24$ and $45$. </br>
**b)** </br>
$3, 5$ as there is no $x$ which precedes $3$ and $5$. </br>
**c)** </br>
As $24$ and $45$ both are maximal elements therefore we don't have any greatest element. </br>
**d)** </br>
As $3$ and $5$ both are minimal elements therefore we don't have any least element. </br>
**e)** </br>
All upper bounds of $\lbrace 3,5 \rbrace$ are $\lbrace 15, 45 \rbrace$, it also means needs to find out numbers which is divided by both $3$ and $5$. </br>
**f)** </br>
**g)** </br>
**h)** </br>
