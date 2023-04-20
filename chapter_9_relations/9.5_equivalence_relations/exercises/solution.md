![problem 1](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.5_equivalence_relations/repo/problem_1.png)
#### Solution

a) $\{ (0, 0), (1, 1), (2, 2), (3, 3) \}$
| Reflexive    | Symmetric | Transitive | Equivalence | Note |
| :-: | :------: | :--: | :--: |:-- |
| yes  | yes | yes | yes | NA|

b) $\{ (0, 0), (0, 2), (2, 0), (2, 2), (2, 3), (3, 2), (3, 3) \}$
| Reflexive    | Symmetric | Transitive | Equivalence | Note |
| :-: | :------: | :--: | :--: |:--|
| no  | yes | no | no | It's not reflexive in the absence of $(1,1)$ </br> It's not transitive as well because $(0,2) \in R$ $(2,3) \in r$ but $(0,3) \notin R$|

c) $\{ (0, 0), (1, 1), (1, 2), (2, 1), (2, 2), (3, 3) \}$
| Reflexive    | Symmetric | Transitive | Equivalence | Note |
| :-: | :------: | :--: | :--: |:--|
| yes  | yes | yes | yes | NA | 

d) $\{ (0, 0), (1, 1), (1, 3), (2, 2), (2, 3), (3, 1), (3, 2),(3, 3) \}$
| Reflexive    | Symmetric | Transitive | Equivalence | Note |
| :-: | :------: | :--: | :--: |:--|
| yes  | yes | no | no | It's not transitive because $(0,3) \in R$ $(3,2) \in r$ but $(1,2) \notin R$ | 

e) $\{ (0, 0), (0, 1), (0, 2), (1, 0), (1, 1), (1, 2), (2, 0),(2, 2), (3, 3) \}$
| Reflexive    | Symmetric | Transitive | Equivalence | Note |
| :-: | :------: | :--: | :--: |:--|
| yes  | no | no | no | It's not symmetric because $(1,2) \in R$ $(3,2) but $(2,1) \notin R$ </br> It's not transitive because $(2,0) \in R$ $(0,1) \in r$ but $(2,1) \notin R$ | 

![problem 2](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.5_equivalence_relations/repo/problem_2.png)
#### Solution

a) $(a,b) | a$ and $b$ are the same age
| Reflexive    | Symmetric | Transitive | Equivalence | Note |
| :-: | :------: | :--: | :--: |:--|
| yes  | yes | yes | yes | NA | 

b) $\{ (a, b) | a$ and $b$ have the same parents $\}$
| Reflexive    | Symmetric | Transitive | Equivalence | Note |
| :-: | :------: | :--: | :--: |:--|
| yes  | yes | yes | yes | NA | 

c) $\{ (a, b) | a$ and $b$ share a common parent $\}$
| Reflexive    | Symmetric | Transitive | Equivalence | Note |
| :-: | :------: | :--: | :--: |:--|
| yes  | yes | no | no | $(a,b)$ have $x$ and $y$ parents but $(b, c)$ have $y$ and $z$ parents, it doesn't mean $(a, c)$ have common parents as $x$ and $z$ |

d) $\{ (a, b) | a$ and $b$ have met $\}$
| Reflexive    | Symmetric | Transitive | Equivalence | Note |
| :-: | :------: | :--: | :--: |:--|
| yes  | yes | no | no | $(a, b) \in R$ and $(b, c) \n R$ but $(a, c) \notin R$ because it can be possible b and c has not met each other|

e) $\{ (a, b) | a$ and $b speak a common language $\}$
| Reflexive    | Symmetric | Transitive | Equivalence | Note |
| :-: | :------: | :--: | :--: |:--|
| yes  | yes | no | no | let $(a,b)$ speaks Hindi, and $(b, c)$ speaks Tamil, it can be possible that $a$ and $c$ does not speak the same language|

![problem 3](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.5_equivalence_relations/repo/problem_3.png)
#### Solution

a) $\{ (f, g) | f (1) = g(1) \}$
| Reflexive    | Symmetric | Transitive | Equivalence | Note |
| :-: | :------: | :--: | :--: |:--|
| yes  | yes | yes | yes | NA | 

b) $\ {(f, g) | f (0) = g(0)$ or $f (1) = g(1) \}$
| Reflexive    | Symmetric | Transitive | Equivalence | Note |
| :-: | :------: | :--: | :--: |:--|
| yes  | yes | no | no | This is not an equivalence relation because it is not transitive. Let $f(x) = 0$, $g(x) = x$, and $h(x) = 1$ for all $x \in Z$. Then f is related tog since $f(O) = g(O)$, and $g$ is related to $h$ since $g(l) = h(l)$, but $f$ is not related to $h$ since they have no values in common. | 

c) $\{ (f, g) | f (x) − g(x) = 1 $for all $x \in Z \}$
| Reflexive    | Symmetric | Transitive | Equivalence | Note |
| :-: | :------: | :--: | :--: |:--|
| no  | no | no | no | This is not reflexive as $f(x) - f(x) \ne 1$ </br> This is not symmetric because $f(x) - g(x) = 1$ but $g(x) - f(x) = 1 \ne 1$ <br> This is not transitive as $f(x) - g(x) = 1$ and $g(x) - h(x) = 1$ but $f(x) - h(x) = 2 \in 1 $| 

d) $$
| Reflexive    | Symmetric | Transitive | Equivalence | Note |
| :-: | :------: | :--: | :--: |:--|
| no  | no | no | no | This is not reflexive as $f(x) - f(x) \ne 1$ </br> This is not symmetric because $f(x) - g(x) = 1$ but $g(x) - f(x) = 1 \ne 1$ <br> This is not transitive as $f(x) - g(x) = 1$ and $g(x) - h(x) = 1$ but $f(x) - h(x) = 2 \in 1 $| 