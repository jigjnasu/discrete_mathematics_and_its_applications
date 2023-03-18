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
If relation $R$ is already a irreflexive relation then there is no need of adding to that $R$. However, if $R$ is not irreflexive then there is no relation containing R that is irreflexive, since the loop or loops in R prevent any such relation
from being irreflexive. $\therefore$ in this case $R$ has no irreflexive closure.