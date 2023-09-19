![problem 1](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.5_equivalence_relations/repo/problem_1.png)
#### Solution

a) $\{ (0, 0), (1, 1), (2, 2), (3, 3) \}$
| Reflexive    | Symmetric | Transitive | Equivalence | Note |
| :-: | :------: | :--: | :--: |:-- |
| yes  | yes | yes | yes | NA|

b) $\{ (0, 0), (0, 2), (2, 0), (2, 2), (2, 3), (3, 2), (3, 3) \}$
| Reflexive    | Symmetric | Transitive | Equivalence | Note |
| :-: | :------: | :--: | :--: |:--|
| no  | yes | no | no | It's not reflexive in the absence of $(1,1)$ </br> It's not transitive as well because $(0,2) \in R$ $(2,3) \in r$ but $(0,3) \notin R$ </br> $(3,2) \in R (2,0) \in R$ but $(3,0) \notin R$|

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

a) { $(a,b) | a$ and $b$ are the same age }
| Reflexive    | Symmetric | Transitive | Equivalence | Note |
| :-: | :------: | :--: | :--: |:--|
| yes  | yes | yes | yes | NA | 

b) { $(a, b) | a$ and $b$ have the same parents }
| Reflexive    | Symmetric | Transitive | Equivalence | Note |
| :-: | :------: | :--: | :--: |:--|
| yes  | yes | yes | yes | NA | 

c) { $(a, b) | a$ and $b$ share a common parent }
| Reflexive    | Symmetric | Transitive | Equivalence | Note |
| :-: | :------: | :--: | :--: |:--|
| yes  | yes | no | no | $(a,b)$ have $x$ and $y$ parents but $(b, c)$ have $y$ and $z$ parents, it doesn't mean $(a, c)$ have common parents as $x$ and $z$ |

d) { $(a, b) | a$ and $b$ have met }
| Reflexive    | Symmetric | Transitive | Equivalence | Note |
| :-: | :------: | :--: | :--: |:--|
| yes  | yes | no | no | $(a, b) \in R$ and $(b, c) \n R$ but $(a, c) \notin R$ because it can be possible b and c has not met each other|

e) { $(a, b) | a$ and $b speak a common language }
| Reflexive    | Symmetric | Transitive | Equivalence | Note |
| :-: | :------: | :--: | :--: |:--|
| yes  | yes | no | no | let $(a,b)$ speaks Hindi, and $(b, c)$ speaks Tamil, it can be possible that $a$ and $c$ does not speak the same language|

![problem 3](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.5_equivalence_relations/repo/problem_3.png)
#### Solution

a) { $(f, g) | f (1) = g(1)$ }
| Reflexive    | Symmetric | Transitive | Equivalence | Note |
| :-: | :------: | :--: | :--: |:--|
| yes  | yes | yes | yes | NA | 

b) { $(f, g) | f(0) = g(0)$ or $f(1) = g(1)$ }
| Reflexive    | Symmetric | Transitive | Equivalence | Note |
| :-: | :------: | :--: | :--: |:--|
| yes  | yes | no | no | This is not an equivalence relation because it is not transitive. Let $f(x) = 0$, $g(x) = x$, and $h(x) = 1$ for all $x \in Z$. Then f is related tog since $f(O) = g(O)$, and $g$ is related to $h$ since $g(l) = h(l)$, but $f$ is not related to $h$ since they have no values in common. | 

c) { $(f, g) | f(x) − g(x) = 1$ for all $x \in Z$ }
| Reflexive    | Symmetric | Transitive | Equivalence | Note |
| :-: | :------: | :--: | :--: |:--|
| no  | no | no | no | This is not reflexive as $f(x) - f(x) = 0 \ne 1$ </br> This is not symmetric because $f(x) - g(x) = 1$ but $g(x) - f(x) = -1 \ne 1$ <br> This is not transitive as $f(x) - g(x) = 1$ and $g(x) - h(x) = 1$ but $f(x) - h(x) = 2 \in 1 $| 

d) { $(f, g) |$ for some $C \in Z$, for all $x \in Z$, $f(x) − g(x) = C$ }
| Reflexive    | Symmetric | Transitive | Equivalence | Note |
| :-: | :------: | :--: | :--: |:--|
| yes  | yes | yes | yes | This is reflexive as $f(x) - f(x) = 0 = C$  </br> This is symmetric because $f(x) - g(x) = C$ and $g(x) - f(x) = -C$ <br> This is transitive as $f(x) - g(x) = C_{1}$ and $g(x) - h(x) = C_{2}$ and $f(x) - h(x) = C_{1} + C_{2} = C_{3}$| 

e) { $(f,g) | f(0) = g(1)$ and $f(1) = g(0)$ }
| Reflexive    | Symmetric | Transitive | Equivalence | Note |
| :-: | :------: | :--: | :--: |:--|
| no  | yes | no | no | This is not reflexive as $f(x) = \lambda$ where $f(0) = f(1)$  </br> This is symmetric because $f(0) = g(1)$ and $f(1) = g(0)$ <br> This is not transitive as $f(0) = g(1) = h(0) = \alpha$ and $f(1) = g(0) = g(1) = \beta$| as $\alpha \ne \beta$

![problem 4](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.5_equivalence_relations/repo/problem_4.png)
#### Solution
This exercise will let us know that two students are equal on these relations.
Two students can be equivalent on these equivalence relations for example,

| S.No.    | Equivalence Relation | Class | 
| :------: | :------ | :------ |
| 1 | The day on which student is born | 1, 2, 3, ... , 31 |
| 2 | The state in which the student is born | 'Andhra Pradesh', 'Arunachal Pradesh', 'Assam', ...  |
| 3 | The CGPA in Mathematics in high school | 1, 2, 3, ... |

![problem 5](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.5_equivalence_relations/repo/problem_5.png)
#### Solution
This exercise will let us know that two campus buildings are equal on these relations.
Two building can be equivalent on these equivalence relations for example,

| S.No.    | Equivalence Relation | Class | 
| :------: | :------ | :------ |
| 1 | No of stories in the building | 1 story, 2 story, 3 story, ... |
| 2 | No of science labs in the collage campus | 1, 2, 3, ... |
| 3 | minium number of CGPA required for the course | 1, 2, 3, ... |


![problem 6](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.5_equivalence_relations/repo/problem_6.png)
#### Solution
This exercise will let us know that two classes are equal on these relations.
Two classes can be equivalent on these equivalence relations for example,

| S.No.    | Equivalence Relation | Class | 
| :------: | :------ | :------ |
| 1 | Department of the class | Mathematics, Computer Science, Biology, ... |
| 2 | Type of the class | Theoretical, Lab, ... |
| 3 | Location of the class | Off campus, On campus |

![problem 7](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.5_equivalence_relations/repo/problem_7.png)
#### Solution

The two propositions are equivalent if their truth tables are same. </br>
Let's say we have $p$ and $q$ propositions and as they have same truth tables therefore they are reflexive in nature. </br>
As both have same truth table therefore they are symmetric as $p$ has same truth table as $q$, and $q$ has same truth table as $q$. <br>
Let's say $p , q$ and $r$ has same truth table, and we need to take one thing into consideration is that, all have same variables in their truth tables and in that case we can say they have transitive property as well. </br>
Hence two propositions are equal. Similarly. the equivalence class of F is the set of all contradictions.

![problem 8](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.5_equivalence_relations/repo/problem_8.png)
#### Solution

The two sets have the same cardinality if there is a bijection (one-to-one and onto function) from one set to the other. </br>
We must show that $R$ is reflexive, symmetric, and transitive. Every set has the same cardinality as itself because of the identity function. </br>
If $f$ is a bijection from $S$ to $T$, then $f^1$ is a bijection from T to S , so R is symmetric. Finally, if f is a bijection from S to T and g
is a bijection from T to U , then g ( f is a bijection from T to U , so R is transitive (see Exercise 33 in
Section 2.3).
The equivalence class of {1, 2, 3} is the set of all three-element sets of real numbers, including such
sets as {4, 25, 1948} and {e, !,02}. Similarly, [Z] is the set of all infinite countable sets of real numbers (see
Section 2.5), such as the set of natural numbers, the set of rational numbers, and the set of the prime numbers,
but not including the set {1, 2, 3} (it’s too small) or the set of all real numbers (it’s too big). See Section 2.5
for more on countable sets.

![problem 9](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.5_equivalence_relations/repo/problem_9.png)
#### Solution

a)  </br>
This relation is reflexive, since $f(x) = f(x) | x \in A$.  </br>It is symmetric as well because $f(x) = f(y)$ and $f(y) = f(x)$ | $x \in A$ and $y \in A$.</br>
It is transitive as well because $f(x) = f(y)$ and $f(y) = f(z)$ as we can say $f(x) = f(z)$ | $x \in A$, $y \in A$ and $z \in A$, therefore we can say it is transitive. </br>
And if all these properties are there on this relation $R \therefore$  we can say that R is an equivalence relation on domain $A$

b) The equivalence class of x is the set of all $y \in A$  such that $f(y) = f(x)$. This by definition means $f^{-1}(x)$

![problem 10](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.5_equivalence_relations/repo/problem_10.png)
#### Solution

The function that sends each $x \n A$ to its equivalence class $[x]$ is obviously such a function. </br>
For instance, for the reflexive case, $f(x) = f(x)$ if any other case then this will always fail, even for symmetric case think $f(x) = f(y)$, other than this will fail.</br>
And because of this it is evident that $f(x) = f(y)$ is the only function which can have equivalence relation.

![problem 11](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.5_equivalence_relations/repo/problem_11.png)
#### Solution

If $(x, y) \in R$ which have length more than 3 or more bit strings have first 3 bits agree on equivalence.

| Reflexive    | Symmetric | Transitive | Equivalence |
| :-: | :------: | :--: | :--: |
| yes  | yes | yes | yes |
| $(x, x) \in R$ | $(x, y) \in R$ and $(y,x) \in R$ | $(p,q) \in R$ , $(q, s) \in R$ , $(p, s) \in R$ |  |


![problem 12](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.5_equivalence_relations/repo/problem_12.png)
#### Solution

| Reflexive    | Symmetric | Transitive | Equivalence |
| :-: | :------: | :--: | :--: |
| yes  | yes | yes | yes |
| $(x, x) \in R$ | $(x, y) \in R$ and $(y,x) \in R$ | $(p,q) \in R$ , $(q, s) \in R$ , $(p, s) \in R$ |  |

![problem 13](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.5_equivalence_relations/repo/problem_13.png)
#### Solution

| Reflexive    | Symmetric | Transitive | Equivalence |
| :-: | :------: | :--: | :--: |
| yes  | yes | yes | yes |
| $(x, x) \in R$ | $(x, y) \in R$ and $(y,x) \in R$ | $(p,q) \in R$ , $(q, s) \in R$ , $(p, s) \in R$ |  |

![problem 14](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.5_equivalence_relations/repo/problem_14.png)
#### Solution

| Reflexive    | Symmetric | Transitive | Equivalence |
| :-: | :------: | :--: | :--: |
| yes  | yes | yes | yes |
| $(x, x) \in R$ | $(x, y) \in R$ and $(y,x) \in R$ | $(p,q) \in R$ , $(q, s) \in R$ , $(p, s) \in R$ |  |

![problem 15](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.5_equivalence_relations/repo/problem_15.png)
#### Solution
| Reflexive    | Symmetric | Transitive | Equivalence |
| :-: | :------: | :--: | :--: |
| yes  | yes | yes | yes |
| $(x, x) \in R$ | $(x, y) \in R$ and $(y,x) \in R$ | $(p,q) \in R$ , $(q, s) \in R$ , $(p, s) \in R$ |  |

Let's see the solution for Reflexive, Symmetric and transitive properties. </br>
##### Reflexive
1. $((a,a), (a,a)) \in R$ because $a + a = a + a$, $a = a$ </br>
2. $((a,b), (a,b)) \in R$ because $a + b = a + b$  </br> 

##### Symmetric
$(a, b), (c, d) \in R$ and $(c, d), (a, b) \in R$, it is symmetric relations. </br> 
because $a+d = b+c$ and $d+a = c+b$ both are same equations. <br>

##### Transitive
If $((a,b), (c,d)) \in R$ and $((c, d), (e,f)) \in R$ </br>
Means 
1. $a+d = b+c$ </br>
2. $c+f = d+e$ </br>
3. in equation 1, put value of $c = d+e-f$ </br>
4. $a+d = b+d+e-f$, $a = b+e-f$, $a+f = b+e$, which can be written as</br>
5. $((a, b), (e,f)) \therefore$ it is proved that, $((a, b), (e,f)) \in R$ </br>

And it is proved this is transitive, and hence it is an equivalence relation.

![problem 16](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.5_equivalence_relations/repo/problem_16.png)
#### Solution

| Reflexive    | Symmetric | Transitive | Equivalence |
| :-: | :------: | :--: | :--: |
| yes  | yes | yes | yes |
| $(x, x) \in R$ | $(x, y) \in R$ and $(y,x) \in R$ | $(p,q) \in R$ , $(q, s) \in R$ , $(p, s) \in R$ |  |

Let's prove this </br>

##### Reflexive
1. $((a,a), (a,a)) \in R$ because $2a = 2a = a = a$ </br>
2. $((a,b), (a,b)) \in R$ because $ab = ab$ </br>

##### Symmetric
$((a,b), (c,d)) \in R$ and $((c,d), (a, b)) \in R$ because $ad = bc$ and $bc = ad$ both are same equations </br>

##### Transitive
1. $((a,b), (c,d)) \in R$ and $((c,d), (e,f)) \in R$
2. $ad = bc$
3. $cf = de$, put value of c from equation 2 $c = \frac{ad}{b}$ in equation 3
4. $\frac{adf}{b} = de$, $af = be$, which can also be written as $((a,b), (e,f)) \in R$
$\therefore$ it is a transitive relation.

As it is reflexive, symmetric and transitive, it is an equivalence relation.

![problem 17](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.5_equivalence_relations/repo/problem_17.png)
#### Solution

| Reflexive    | Symmetric | Transitive | Equivalence |
| :-: | :------: | :--: | :--: |
| yes  | yes | yes | yes |
| $(x, x) \in R$ | $(x, y) \in R$ and $(y,x) \in R$ | $(p,q) \in R$ , $(q, s) \in R$ , $(p, s) \in R$ |  |

Given functions from $R$ to $R$, such that $(f, g) \in R$ if $f\prime(x) = g\prime(x)$ </br>

Reflexive, $(f,f) \in R$ because $f\prime(x) = f\prime(x)$</br>
Symmetric, $(f,g) \in R$ and $(g,f) \in R$ because $f\prime(x) = g\prime(x)$ and $g\prime(x) = f\prime(x)$ </br>
Transitive, $(f,g) \in R$, $(g,q) \in R$ then $(f,q) \in R$ because $f\prime(x) = g\prime(x)$, $g\prime(x) = q\prime(x)$ and $f\prime(x) = q\prime(x)$ </</br> 

B) As $f\prime(x^2) = 2x$ and $\int2x = x^2+C$. where is C is a constant and $x^2+C$ is a function in the same equivalence class.

![problem 18](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.5_equivalence_relations/repo/problem_18.png)
#### Solution

| Reflexive    | Symmetric | Transitive | Equivalence |
| :-: | :------: | :--: | :--: |
| yes  | yes | yes | yes |
| $(x, x) \in R$ | $(x, y) \in R$ and $(y,x) \in R$ | $(p,q) \in R$ , $(q, s) \in R$ , $(p, s) \in R$ |  |

Given functions from $R$ to $R$, such that $(f,g) \in R$ if $f^{(n)} = g^{(n)}$, where n is the $n^{th}$ derivative </br>

Reflexive, $(f,f) \in R$ because $f^{(n)} = f^{(n)}</br>
Symmetric, $(f,g) \in R$ and $(g,f) \in R$ because $f^{(n)}=g^{(n)}$ and $g^{(n)} = f^{(n)}$ </br>
Transitive, $(f,g) \in R$, $(g,q) \in R$ then $(f,q) \in R$ because $f^{(n)} = g^{(n)}$, $g^{(n)} = q^{(n)}$ and $f^{(n)} = q^{(n)}$ </</br> 

B) </br>
1. $f(x) = x^4$
2. $f^{(1)}(x) = 4x^3$
3. $f^{(2)}(x) = 12x^2$
4. $f^{(3)}(x) = 24x$

And </br>
1. $\int24x = 12x^2 + C_1$
2. $\int12x^2 + C_1 = 4x^3 + C_1 + C_2 = 4x^3 + C$

$4x^3 + C$ is a function in the same equivalence class.

![problem 19](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.5_equivalence_relations/repo/problem_19.png)
#### Solution

| Reflexive    | Symmetric | Transitive | Equivalence |
| :-: | :------: | :--: | :--: |
| yes  | yes | yes | yes |
| $(x, x) \in R$ | $(x, y) \in R$ and $(y,x) \in R$ | $(p,q) \in R$ , $(q, s) \in R$ , $(p, s) \in R$ |  |

![problem 20](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.5_equivalence_relations/repo/problem_20.png)
#### Solution

| Reflexive    | Symmetric | Transitive | Equivalence |
| :-: | :------: | :--: | :--: |
| yes  | yes | yes | yes |
| $(x, x) \in R$ | $(x, y) \in R$ and $(y,x) \in R$ | $(p,q) \in R$ , $(q, s) \in R$ , $(p, s) \in R$ |  |

![problem 21 22 23](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.5_equivalence_relations/repo/problem_21_22_23.png)
#### Solution

21)</br>
| Reflexive    | Symmetric | Transitive | Equivalence |
| :-: | :------: | :--: | :--: |
| yes  | yes | no | no |

As these are the following relations</br>
$(a,a), (a,c), (a,d)$</br>
$(b,b)$</br>
$(c,a), (c,c)$</br>
$(d,a), (d,d)$</br>

##### Reflexive Yes
$(a,a), (b,b), (c,c), (d,d)$

##### Symmetric Yes
$(a,c), (c,a)$</br>
$(a,d), (d,a)$</br>

##### Transitive No
$(c,a), (a,d) \in R$ and $(a,d) \notin R$ </br>
$(d,a), (a,c) \in R$ and $(d,c) \notin R$ </br>

As it is reflexive, symmetric but not transitive, it is not an equivalence relation.

22)</br>
| Reflexive    | Symmetric | Transitive | Equivalence |
| :-: | :------: | :--: | :--: |
| yes  | yes | yes | yes |

As these are the following relations</br>
$(a,a), (a,d)$</br>
$(b,b), (b,c)$</br>
$(c,b), (c,c)$</br>
$(d,a), (d,d)$</br>

##### Reflexive Yes
$(a,a), (b,b), (c,c), (d,d)$

##### Symmetric Yes
$(a,d), (d,a) \in R$ </br>
$(b,c), (c,b) \in R$ </br>
$(c,b), (b,c) \in R$ </br>
$(d,a), (a,d) \in R$ </br>

##### Transitive Yes
$(a,a), (a,d) \in R$ and $(a,d) \in R$ </br>
$(b,b), (b,c) \in R$ and $(b,c) \in R$ </br>
$(c,b), (b,b) \in R$ and $(c,b) \in R$ </br>
$(c,b), (b,c) \in R$ and $(c,c) \in R$ </br>
$(d,a), (a,a) \in R$ and $(d,a) \in R$ </br>
$(d,a), (a,d) \in R$ and $(d,d) \in R$ </br>

As it is reflexive, symmetric and transitive therefore it is an equivalence relation.</br>
$(a,d)$ and $(a,c)$ are equivalent classes.</br></br>

23)</br>
| Reflexive    | Symmetric | Transitive | Equivalence |
| :-: | :------: | :--: | :--: |
| yes  | yes | no | no |

As these are the following relations</br>
$(a,a), (a,b), (a,d)$</br>
$(b,a), (b,b), (b,c)$</br>
$(c,b), (c,c), (c,d)$</br>
$(d,a), (d,c), (d,d)$</br>

##### Reflexive Yes
$(a,a), (b,b), (c,c), (d,d)$

##### Symmetric Yes
$(a,b), (b,c) \in R$ and $(a,d), (d,a) \in R$</br>
$(b,a), (a,b) \in R$ and $(b,c), (c,b) \in R$</br>
$(c,b), (b,c) \in R$ and $(c,d), (d,c) \in R$</br>
$(d,a), (a,d) \in R$ and $(d,c), (c,d) \in R$</br>


##### Transitive No
$(a,b), (b,c) \in R$ and $(a,c) \notin R$ </br>
$(b,a), (a,d) \in R$ and $(b,d) \notin R$ </br>
$(c,b), (b,a) \in R$ and $(c,a) \notin R$ </br>
$(d,a), (a,b) \in R$ and $(d,b) \notin R$ </br>

As it is reflexive, symmetric but not transitive, it is not an equivalence relation.</br></br>

![problem 24](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.5_equivalence_relations/repo/problem_24.png)
#### Solution

a)</br>
| Reflexive    | Symmetric | Transitive | Equivalence |
| :-: | :------: | :--: | :--: |
| yes  | no | no | no |

As these are the following relations</br>
$(a,a), (a,b), (a,c)$</br>
$(b,b), (b,c)$</br>
$(c,a), (c,b), (c,c)$</br>

##### Reflexive Yes
$(a,a), (b,b), (c,c)$

##### Symmetric No
$(a,b) \in R$ and $(b,a) \notin R$


##### Transitive No
$(b,c), (c,a) \in R$ and $(b,a) \notin R$ </br>

As it is reflexive but not symmetric and transitive, it is not an equivalence relation.</br></br>


b)</br>
| Reflexive    | Symmetric | Transitive | Equivalence |
| :-: | :------: | :--: | :--: |
| yes  | yes | yes | yes |

As these are the following relations</br>
$(a,a), (a,c)$</br>
$(b,b), (b,d)$</br>
$(c,a), (c,c)$</br>
$(d,b), (d,d)$</br>

##### Reflexive Yes
$(a,a), (b,b), (c,c), (d,d)$

##### Symmetric Yes
$(a,c), (c,a) \in R$</br>
$(b,d), (d,b) \in R$</br>
$(c,a), (a,c) \in R$</br>
$(d,b), (b,d) \in R$</br>

##### Transitive Yes
$(a,a), (a,c) \in R$ and $(a,c) \in R$ </br>
$(a,c), (c,a) \in R$ and $(a,a) \in R$ </br>
$(a,c), (c,c) \in R$ and $(a,c) \in R$ </br>
$(b,b), (b,d) \in R$ and $(b,d) \in R$ </br>
$(b,d), (d,b) \in R$ and $(b,b) \in R$ </br>
$(b,d), (d,d) \in R$ and $(b,d) \in R$ </br>
$(c,a), (c,c) \in R$ and $(c,c) \in R$ </br>
$(c,a), (a,a) \in R$ and $(c,a) \in R$ </br>
$(c,a), (a,c) \in R$ and $(c,c) \in R$ </br>
$(d,b), (b,b) \in R$ and $(d,b) \in R$ </br>
$(d,b), (b,d) \in R$ and $(d,d) \in R$ </br>
$(d,d), (d,b) \in R$ and $(d,b) \in R$ </br>

As it is reflexive, symmetric and transitive, it is an equivalence relation.</br>
$(a,c)$ and $(b,d)$ are equivalent classes.</br></br>

c)</br>
| Reflexive    | Symmetric | Transitive | Equivalence |
| :-: | :------: | :--: | :--: |
| yes  | yes | yes | yes |

As these are the following relations</br>
$(a,a), (a,b), (a,c)$</br>
$(b,a), (b,b), (b,c)$</br>
$(c,a), (c,b), (c,c)$</br>
$((d,d)$</br>

##### Reflexive Yes
$(a,a), (b,b), (c,c), (d,d)$

##### Symmetric Yes
$(a,b), (b,a) \in R$ and $(a,c), (c,a) \in R$</br>
$(b,a), (a,b) \in R$ and $(b,c), (c,b) \in R$</br>
$(c,a), (a,c) \in R$ and $(c,b), (b,c) \in R$</br>

##### Transitive Yes
$(a,a), (a,b) \in R$ and $(a,b) \in R$ </br>
$(a,a), (a,c) \in R$ and $(a,c) \in R$ </br>
$(a,b), (b,a) \in R$ and $(a,a) \in R$ </br>
$(a,b), (b,b) \in R$ and $(a,b) \in R$ </br>
$(a,b), (b,c) \in R$ and $(a,c) \in R$ </br>
$(a,c), (c,a) \in R$ and $(a,a) \in R$ </br>
$(a,c), (c,b) \in R$ and $(a,b) \in R$ </br>
$(a,c), (c,c) \in R$ and $(a,c) \in R$ </br>
</br>
$(b,a), (a,a) \in R$ and $(b,a) \in R$ </br>
$(b,a), (a,b) \in R$ and $(b,b) \in R$ </br>
$(b,a), (a,c) \in R$ and $(b,c) \in R$ </br>
$(b,b), (b,a) \in R$ and $(b,a) \in R$ </br>
$(b,b), (b,c) \in R$ and $(b,c) \in R$ </br>
$(b,c), (c,a) \in R$ and $(b,a) \in R$ </br>
$(b,c), (c,b) \in R$ and $(b,b) \in R$ </br>
$(b,c), (b,c) \in R$ and $(b,c) \in R$ </br>
</br>
$(c,a), (a,a) \in R$ and $(c,a) \in R$ </br>
$(c,a), (a,b) \in R$ and $(c,b) \in R$ </br>
$(c,a), (a,c) \in R$ and $(c,c) \in R$ </br>
$(c,b), (b,a) \in R$ and $(c,a) \in R$ </br>
$(c,b), (b,b) \in R$ and $(c,b) \in R$ </br>
$(c,b), (b,c) \in R$ and $(c,c) \in R$ </br>
$(c,c), (c,a) \in R$ and $(c,a) \in R$ </br>
$(c,c), (c,b) \in R$ and $(c,b) \in R$ </br>

As it is reflexive, symmetric and transitive, it is an equivalence relation.</br>
$(a,b, c)$ and $d$ are equivalent classes.</br></br>

![problem 25](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.5_equivalence_relations/repo/problem_25.png)
#### Solution

| Reflexive    | Symmetric | Transitive | Equivalence |
| :-: | :------: | :--: | :--: |
| yes  | yes | yes | yes |

Let's the function $f(s)$ = number of $1^s$ in bit string $s$ </br>

##### Reflexive Yes
$(s,s) \in R$

##### Symmetric Yes
$(s,t), (t,s) \in R$ </br>
because $f(s) = f(t)$ </br>

##### Transitive Yes
$(s,t), (t,p) \in R$ and $(s,p) \in R$ </br>
because $f(s) = f(t) = f(p)$

As it is reflexive, symmetric and transitive, it is an equivalence relation.</br>

![problem 26](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.5_equivalence_relations/repo/problem_26.png)
#### Solution

a) $\{ (0, 0), (1, 1), (2, 2), (3, 3) \}$
| Reflexive    | Symmetric | Transitive | Equivalence | Equivalence Classes | Note |
| :-: | :------: | :--: | :--: | :--: |:-- |
| yes  | yes | yes | yes | 0, 1, 2 | NA|
</br>

b) $\{ (0, 0), (0, 2), (2, 0), (2, 2), (2, 3), (3, 2), (3, 3) \}$
| Reflexive    | Symmetric | Transitive | Equivalence | Equivalence Classes | Note |
| :-: | :------: | :--: | :--: | :--: |:--|
| no  | yes | no | no | NA | It's not reflexive in the absence of $(1,1)$ </br> It's not transitive as well because $(0,2) \in R$ $(2,3) \in r$ but $(0,3) \notin R$ </br> $(3,2) \in R (2,0) \in R$ but $(3,0) \notin R$|

c) $\{ (0, 0), (1, 1), (1, 2), (2, 1), (2, 2), (3, 3) \}$
| Reflexive    | Symmetric | Transitive | Equivalence | Equivalence Classes | Note |
| :-: | :------: | :--: | :--: | :--: |:--|
| yes  | yes | yes | yes | 0, (1,2), 3 | NA | 

d) $\{ (0, 0), (1, 1), (1, 3), (2, 2), (2, 3), (3, 1), (3, 2),(3, 3) \}$
| Reflexive    | Symmetric | Transitive | Equivalence | Equivalence Classes | Note |
| :-: | :------: | :--: | :--: | :--: |:--|
| yes  | yes | no | no | NA | It's not transitive because $(0,3) \in R$ $(3,2) \in r$ but $(1,2) \notin R$ | 

e) $\{ (0, 0), (0, 1), (0, 2), (1, 0), (1, 1), (1, 2), (2, 0),(2, 2), (3, 3) \}$
| Reflexive    | Symmetric | Transitive | Equivalence | Equivalence Classes | Note |
| :-: | :------: | :--: | :--: | :--: |:--|
| yes  | no | no | no | NA | It's not symmetric because $(1,2) \in R$ $(3,2) but $(2,1) \notin R$ </br> It's not transitive because $(2,0) \in R$ $(0,1) \in r$ but $(2,1) \notin R$ | 

![problem 27](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.5_equivalence_relations/repo/problem_27.png)
#### Solution

a) { $(a,b) | a$ and $b$ are the same age }
| Reflexive    | Symmetric | Transitive | Equivalence | Equivalence Classes | Note |
| :-: | :------: | :--: | :--: | :--: |:--|
| yes  | yes | yes | yes | all the same age people, for example all of the age of 25 |  NA |

b) { $(a, b) | a$ and $b$ have the same parents }
| Reflexive    | Symmetric | Transitive | Equivalence | Equivalence Classes | Note |
| :-: | :------: | :--: | :--: | :--: |:--|
| yes  | yes | yes | yes | all the siblings, or all the children of a parents | NA  |

c) { $(a, b) | a$ and $b$ share a common parent }
| Reflexive    | Symmetric | Transitive | Equivalence | Equivalence Classes | Note |
| :-: | :------: | :--: | :--: | :--: |:--|
| yes  | yes | no | no | NA | $(a,b)$ have $x$ and $y$ parents but $(b, c)$ have $y$ and $z$ parents, it doesn't mean $(a, c)$ have common parents as $x$ and $z$ |

d) { $(a, b) | a$ and $b$ have met }
| Reflexive    | Symmetric | Transitive | Equivalence | Equivalence Classes | Note |
| :-: | :------: | :--: | :--: | :--: |:--|
| yes  | yes | no | no | NA | $(a, b) \in R$ and $(b, c) \n R$ but $(a, c) \notin R$ because it can be possible b and c has not met each other|

e) { $(a, b) | a$ and $b speak a common language }
| Reflexive    | Symmetric | Transitive | Equivalence | Equivalence Classes | Note |
| :-: | :------: | :--: | :--: | :--: |:--|
| yes  | yes | no | no | NA | let $(a,b)$ speaks Hindi, and $(b, c)$ speaks Tamil, it can be possible that $a$ and $c$ does not speak the same language|

![problem 28](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.5_equivalence_relations/repo/problem_28.png)
#### Solution

a) { $(f, g) | f (1) = g(1)$ }
| Reflexive    | Symmetric | Transitive | Equivalence | Equivalence Classes | Note |
| :-: | :------: | :--: | :--: | :--: |:--|
| yes  | yes | yes | yes | n is a Integer where n = 1 | NA | 

b) { $(f, g) | f(0) = g(0)$ or $f(1) = g(1)$ }
| Reflexive    | Symmetric | Transitive | Equivalence | Equivalence Classes | Note |
| :-: | :------: | :--: | :--: | :--: |:--|
| yes  | yes | no | no | NA | This is not an equivalence relation because it is not transitive. Let $f(x) = 0$, $g(x) = x$, and $h(x) = 1$ for all $x \in Z$. Then f is related tog since $f(O) = g(O)$, and $g$ is related to $h$ since $g(l) = h(l)$, but $f$ is not related to $h$ since they have no values in common. | 

c) { $(f, g) | f(x) − g(x) = 1$ for all $x \in Z$ }
| Reflexive    | Symmetric | Transitive | Equivalence | Note |
| :-: | :------: | :--: | :--: | :--: |:--|
| no  | no | no | no | NA | This is not reflexive as $f(x) - f(x) = 0 \ne 1$ </br> This is not symmetric because $f(x) - g(x) = 1$ but $g(x) - f(x) = -1 \ne 1$ <br> This is not transitive as $f(x) - g(x) = 1$ and $g(x) - h(x) = 1$ but $f(x) - h(x) = 2 \in 1 $| 

d) { $(f, g) |$ for some $C \in Z$, for all $x \in Z$, $f(x) − g(x) = C$ }
| Reflexive    | Symmetric | Transitive | Equivalence | Equivalence Classes | Note |
| :-: | :------: | :--: | :--: | :--: |:--|
| yes  | yes | yes | yes | Here we have many equivalence classes  | This is reflexive as $f(x) - f(x) = 0 = C$  </br> This is symmetric because $f(x) - g(x) = C$ and $g(x) - f(x) = -C$ <br> This is transitive as $f(x) - g(x) = C_{1}$ and $g(x) - h(x) = C_{2}$ and $f(x) - h(x) = C_{1} + C_{2} = C_{3}$| 

e) { $(f,g) | f(0) = g(1)$ and $f(1) = g(0)$ }
| Reflexive    | Symmetric | Transitive | Equivalence | Equivalence Classes | Note |
| :-: | :------: | :--: | :--: | :--: |:--|
| no  | yes | no | no | This is not reflexive as $f(x) = \lambda$ where $f(0) = f(1)$  </br> This is symmetric because $f(0) = g(1)$ and $f(1) = g(0)$ <br> This is not transitive as $f(0) = g(1) = h(0) = \alpha$ and $f(1) = g(0) = g(1) = \beta$| as $\alpha \ne \beta$

![problem 29](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_9_relations/9.5_equivalence_relations/repo/problem_29.png)
#### Solution