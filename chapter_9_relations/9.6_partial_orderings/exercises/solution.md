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
