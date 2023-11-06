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

a) </br>
$R = (1,1),(1,2),(1,3), (2,1),(2,2), (3,3)$ </br>

| Reflexive     | Anti symmetric    | Transitive    | Partial Order |
| :------:      | :------:          | :------:      | :------:      |
| Yes </br> | No </br> $(1,2), (2,1) \in R$ where $1 \ne 2$ | No </br> $(2,1), (1,3) \in R$ but $(2,3) \notin R$ | No |

