![problem 1](https://github.com/cpp-rakesh/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.1_relations_and_their_properties/repo/problem_1.png)

#### Solution
<ol type="a">
  <li>
    $a=b$ <br/>
    $(0,0), (1, 1), (2, 2), (3, 3)$
  </li>
  <li>
    $a+b = 4$ <br/>
    $(1, 3), (2, 2), (3, 1), (4, 0)$
  </li>
  <li>
    $a > b$ <br/>
    $(1, 0),$ <br/>
    $(2, 0), (2, 1),$ <br/>
    $(3, 0), (3, 1), (3, 2),$ <br/> 
    $(4, 0), (4, 1), (4, 2), (4, 3)$
  </li>
  <li>
    a | b $\therefore$ b is multiple of a, where $a \neq 0$ <br/>
    $(1, 0), (1, 1), (1, 2), (1, 3)$ <br/>
    $(2, 0), (2, 2)$ <br/>
    $(3, 0), (3, 3)$ <br/>
    $(4, 0)$
  </li>
  <li>
    $gcd(a, b) = 1$ <br/>
    $(0, 1)$ <br/>
    $(1, 0), (1, 1), (1, 2), (1, 3)$ <br/>
    $(2, 1), (2, 3)$ <br/>
    $(3, 1), (3, 2)$ <br/>
    $(4, 1), (4, 3)$    
  </li>
  <li>
    $lcm(a, b) = 2$ <br/>
    $(1, 2), (2, 1), (2, 2)$
  </li>
</ol>

![problem 2](https://github.com/cpp-rakesh/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.1_relations_and_their_properties/repo/problem_2.png)

#### Solution
<ol type="a">
  <li>
    $R = (a | b)$ a divides b and $S = {1, 2, 3, 4, 5, 6}$ <br/>
    $(1, 1), (1, 2), (1, 3), (1, 4), (1, 5), (1, 6)$ <br/>
    $(2, 2), (2, 4), (2, 6)$ <br/>
    $(3, 3), (3, 6)$ <br/>
    $(4, 4)$ <br/>
    $(5, 6)$ <br/>
    $(6, 6)$
  </li>
</ol>

B) \
![solution 2b](https://github.com/cpp-rakesh/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.1_relations_and_their_properties/repo/solution_2_b.jpg)

C)
| R | 1 | 2 | 3 | 4 | 5 | 6 |
| :--: | :--: | :--: | :--: | :--: | :--: | :--: |
| 1 | X | X | X | X | X | X |
| 2 |   | X |   | X |   | X |
| 3 |   |   | X |   |   | X |
| 4 |   |   |   | X |   |   |
| 5 |   |   |   |   | X |   |
| 6 |   |   |   |   |   | X |

![problem 3](https://github.com/cpp-rakesh/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.1_relations_and_their_properties/repo/problem_3.png)
#### Solution
<ol type="a">
  <li>
    $S = {1, 2, 3, 4}$ <br/>
    $(2, 2), (2, 3), (2, 4), (3, 2), (3, 3), (3, 4)$ <br/>
    <b>Reflexive No</b> <br/>
    Because it does not contain $(1, 1), (4, 4)$ <br/>
    <b>Symmetric No</b> <br/>
    Because it does not contain $(4, 2)$ for $(2, 4)$ and $(4, 3)$ for $(3, 4)$ </br>
    <b>Antisymmetric No</b> <br/>
    Because it contains $(2, 3)$ and $(3, 2)$ where $a \neq b$ <br/>
    <b>Transitive Yes</b> <br/>
    As transitive relations are those where $$(a, b) \in R $$ and $$(b, c) \in R$$ then $$(a, c) \in R$$ also <br/>
    Now let's check the pair from the above relations <br/>
    $(2, 2), (2, 3) -> (2, 3)$ OK <br/>
    $(2, 2), (2, 4) -> (2, 4)$ OK <br/>
    $(2, 3), (3, 2) -> (2, 2)$ OK <br/>
    $(2, 3), (3, 3) -> (2, 3)$ OK <br/>
    $(3, 2), (2, 2) -> (3, 2)$ OK <br/>
    $(3, 2), (2, 3) -> (3, 3)$ OK <br/>
    $(3, 3), (3, 2) -> (3, 2)$ OK <br/>
    $(3, 3), (3, 4) -> (3, 4)$ OK <br/> 
  </li>
  <br/>
  <li>
    $S = {1, 2, 3, 4}$ <br/>
    $(1, 1), (1, 2), (2, 1), (2, 2), (3, 3), (4, 4)$ <br/>
    <b>Reflexive Yes</b> <br/>
    For all a (a, a) $\in$ R are present $\therefore$<br/>
    $(1, 1), (2, 2), (3, 3), (4, 4)$
    <b>Symmetric Yes</b>
    Because $(1,2)$ and $(2, 1)$ both pairs are present
    <b>Anti Symmetric No</b> </br>
    Because pair $(1,2)$ and $(2, 1)$ is present where $a \neq b$ $\therefore$ it is not an anti symmetric </br>
    <b>Transitive Yes</b> </br>
    As transitive relations are those where $$(a, b) \in R $$ and $$(b, c) \in R$$ then $$(a, c) \in R$$ also <br/>
    Now let's check the pair from the above relations <br/>
    $(1, 2), (2, 1) -> (1, 1)$ OK <br/>
    $(2, 1), (1, 2) -> (2, 2)$ OK <br/>
  </li>
  <br/>
  <li>
    $S = {1, 2, 3, 4}$ <br/>
    $(2, 4), (4, 2)$ <br/>
    <b>Reflexive No</b> <br/>
    Because all $(1, 1), (2, 2), (3, 3), (4, 4)$ are not present
    <b>Symmetric Yes</b>
    Because $(2,4)$ and $(4, 2)$ both pairs are present
    <b>Anti Symmetric No</b> </br>
    Because pair $(2,4)$ and $(4, 2)$ is present where $a \neq b$ $\therefore$ it is not an anti symmetric </br>
    <b>Transitive No</b> </br>
    As transitive relations are those where $$(a, b) \in R $$ and $$(b, c) \in R$$ then $$(a, c) \in R$$ also <br/>
    Now let's check the pair from the above relations <br/>
    $(2, 4), (4, 2) -> (2, 2)$ not present <br/>
    $(4, 2), (2, 4) -> (4, 4)$ not present <br/>
  </li>
  <br/>
  <li>
    $S = {1, 2, 3, 4}$ <br/>
    $(1, 2), (2, 3), (3, 4)$ <br/>
    <b>Reflexive No</b> <br/>
    Because all $(1, 1), (2, 2), (3, 3), (4, 4)$ are not present
    <b>Symmetric No</b>
    Because does not have following pairs $(2, 1), (3, 2), (4, 3)$ for $(1, 2), (2, 3), (3, 4)$ respectively.
    <b>Anti Symmetric Yes</b> </br>
    Because does not have following pairs $(2, 1), (3, 2), (4, 3)$ for $(1, 2), (2, 3), (3, 4)$ respectively.
    <b>Transitive No</b> </br>
    As transitive relations are those where $$(a, b) \in R $$ and $$(b, c) \in R$$ then $$(a, c) \in R$$ also <br/>
    Now let's check the pair from the above relations <br/>
    $(1, 2), (2, 3) -> (1, 3)$ not present <br/>
    $(2, 3), (3, 4) -> (2, 4)$ not present <br/>
  </li>
  <br/>
  <li>
    $S = {1, 2, 3, 4}$ <br/>
    $(1, 1), (2, 2), (3, 3), (4, 4)$ <br/>
    <b>Reflexive Yes</b> <br/>
    For all a (a, a) $\in$ R are present $\therefore$<br/>
    $(1, 1), (2, 2), (3, 3), (4, 4)$
    <b>Symmetric Yes</b>
    <b>Anti Symmetric Yes</b> </br>
    <b>Transitive Yes</b> </br>
  </li>
  <br/>
</ol>
