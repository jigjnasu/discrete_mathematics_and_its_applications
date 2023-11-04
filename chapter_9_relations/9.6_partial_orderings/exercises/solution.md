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
