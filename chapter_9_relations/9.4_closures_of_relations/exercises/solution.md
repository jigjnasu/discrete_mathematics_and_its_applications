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
