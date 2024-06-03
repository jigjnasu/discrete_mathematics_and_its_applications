![problem 1-3](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_10_graphs/chapter_10.2_graph_terminology_and_special_types_of_graphs/repo/problem_1-3.png)

#### Solution

##### 1)

* number of vertices = 6
* number of edges = 6

| deg(v)        | result        | vertices type      |
| :------:      | :------:      | :------:  |
| deg(a)        | 2             |           |
| deg(b)        | 4             |           |
| deg(c)        | 1             | pendant   |
| deg(d)        | 0             | isolated  |
| deg(e)        | 2             |           |
| deg(f)        | 3             |           |

Let's check the handshaking theorem $2m = \sum\limits_{v\in V}deg(v)$ where $m$ is the number of edges. </br>
$2 * 6 = 2 + 4 + 1 + 0 + 2 + 3$ </br>
$12 = 12$ </br>

##### 2)

* number of vertices = 5
* number of edges = 13

| deg(v)        | result        | vertices type      |
| :------:      | :------:      | :------:  |
| deg(a)        | 6             |           |
| deg(b)        | 6             |           |
| deg(c)        | 6             |           |
| deg(d)        | 5             |           |
| deg(e)        | 3             |           |

Let's check the handshaking theorem $2m = \sum\limits_{v\in V}deg(v)$ where $m$ is the number of edges. </br>
$2 * 13 = 6 + 6 + 6 + 5 + 3$ </br>
$26 = 26$ </br>

##### 3)

* number of vertices = 9
* number of edges = 12

| deg(v)        | result        | vertices type      |
| :------:      | :------:      | :------:  |
| deg(a)        | 3             |           |
| deg(b)        | 2             |           |
| deg(c)        | 4             |           |
| deg(d)        | 0             | isolated          |
| deg(e)        | 6             |           |
| deg(f)        | 0             | isolated          |
| deg(g)        | 4             |           |
| deg(h)        | 2             |           |
| deg(i)        | 3             |           |

Let's check the handshaking theorem $2m = \sum\limits_{v\in V}deg(v)$ where $m$ is the number of edges. </br>
$2 * 12 = 3 + 2 + 4 + 0 + 6 + 0 + 4 + 2 + 3$ </br>
$24 = 24$ </br>

![problem 4](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_10_graphs/chapter_10.2_graph_terminology_and_special_types_of_graphs/repo/problem_4.png)

#### Solution

##### 1)

Let's check the handshaking theorem $2m = \sum\limits_{v\in V}deg(v)$ where $m$ is the number of edges. </br>
$2 * 6 = 2 + 4 + 1 + 0 + 2 + 3$ </br>
$12 = 12$ </br>

##### 2)

Let's check the handshaking theorem $2m = \sum\limits_{v\in V}deg(v)$ where $m$ is the number of edges. </br>
$2 * 13 = 6 + 6 + 6 + 5 + 3$ </br>
$26 = 26$ </br>

##### 3)

Let's check the handshaking theorem $2m = \sum\limits_{v\in V}deg(v)$ where $m$ is the number of edges. </br>
$2 * 12 = 3 + 2 + 4 + 0 + 6 + 0 + 4 + 2 + 3$ </br>
$24 = 24$ </br>

![problem 5](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_10_graphs/chapter_10.2_graph_terminology_and_special_types_of_graphs/repo/problem_5.png)

#### Solution

According to theorem 2 *An undirected graph has an even number of vertices of odd degree*. </br>
Therefore according to this theorem it is not possible to have as 15 is an odd number and all have 5 degree means odd degree. According to theorem odd degree vertices should be an even number. </br>

![problem 6](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_10_graphs/chapter_10.2_graph_terminology_and_special_types_of_graphs/repo/problem_6.png)

#### Solution

Let's the vertex $v$ represents a person and the edge $e$ represents the handshake between two people. </br>
The degree $deg(v)$ of a vertex represents with how many people that person shook the hand. </br>
Regardless number of vertices, the sum of degree of vertices will be even because it is twice the number of edges. </br>
$2m = \sum\limits_{v\in V}deg(v)$ where $m$ is the number of edges. </br>


![problem 7-9](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_10_graphs/chapter_10.2_graph_terminology_and_special_types_of_graphs/repo/problem_7-9.png)

#### Solution

##### 7)

* number of vertices = 4
* number of edges = 7

| vertex        | $deg^{-}(v)$  | $deg^{+}(v)$  |
| :------:      | :------:      | :------:      |
| a             | 3             | 1             |
| b             | 1             | 2             |
| c             | 2             | 1             |
| d             | 1             | 3             |
| **Total**     | **7**         | **7**         |

As in directed graph the initial vertex and terminal is connected with an edge. </br>
The outgoing edge will be incoming edge for another vertex therefore it makes sense that $\sum\limits_{v\in V}deg^{-}(v) = \sum\limits_{v\in V}deg^{+}(v)$ </br>

##### 8)

* number of vertices = 4
* number of edges = 8

| vertex        | $deg^{-}(v)$  | $deg^{+}(v)$  |
| :------:      | :------:      | :------:      |
| a             | 2             | 2             |
| b             | 3             | 4             |
| c             | 2             | 1             |
| d             | 1             | 1             |
| **Total**     | **8**         | **8**         |

As in directed graph the initial vertex and terminal is connected with an edge. </br>
The outgoing edge will be incoming edge for another vertex therefore it makes sense that $\sum\limits_{v\in V}deg^{-}(v) = \sum\limits_{v\in V}deg^{+}(v)$ </br>

##### 9)

* number of vertices = 5
* number of edges = 13

| vertex        | $deg^{-}(v)$  | $deg^{+}(v)$  |
| :------:      | :------:      | :------:      |
| a             | 6             | 1             |
| b             | 1             | 5             |
| c             | 2             | 5             |
| d             | 4             | 2             |
| e             | 0             | 0             |
| **Total**     | **13**         | **13**         |

As in directed graph the initial vertex and terminal is connected with an edge. </br>
The outgoing edge will be incoming edge for another vertex therefore it makes sense that $\sum\limits_{v\in V}deg^{-}(v) = \sum\limits_{v\in V}deg^{+}(v)$ </br>

![problem 10](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_10_graphs/chapter_10.2_graph_terminology_and_special_types_of_graphs/repo/problem_10.png)

#### Solution

| Exercise        | $deg^{-}(v)$  | $deg^{+}(v)$  | Edges           |
| :------:      | :------:      | :------:      | :------:          |
| 7             | $3+1+2+1 = 7$ | $1+2+1+3=7$   | 7                 |
| 8             | $2+3+2+1 = 8$ | $2+4+1+1=8$   | 8                 |
| 9             | $6+1+2+4+0=13$| $1+5+5+2+0=13$| 13                |

![problem 11](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_10_graphs/chapter_10.2_graph_terminology_and_special_types_of_graphs/repo/problem_11.png)

#### Solution

![solution 11](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_10_graphs/chapter_10.2_graph_terminology_and_special_types_of_graphs/repo/solution_11.png)

![problem 12](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_10_graphs/chapter_10.2_graph_terminology_and_special_types_of_graphs/repo/problem_12.png)

#### Solution

| terminology   | acquaintance graph                    | Note          |
| :------:      | :------:                              | :------:      |
| vertex        | a person in the world                 | NA            |
| edge          | both person are acquaintance          | NA            |
| neighborhood   | all acquaintances of a person         | NA            |
| isolated      | a person doesn't have any acquaintance     | It is highly unlikely that a person doesn't know anyone because at least he/she will have family and friends            |
| pendant       | a person have only one acquaintance        | It is highly unlikely that a person has one known person |
| degree of a vertex       | how many acquaintances the person has | By that research it means that an average person has 1000 acquaintances  |

![problem 13](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_10_graphs/chapter_10.2_graph_terminology_and_special_types_of_graphs/repo/problem_13.png)

#### Solution

| terminology   | academic collaboration graph              |
| :------:      | :------:                                  |
| vertex        | a person who is writing an academic paper    |
| edge          | two person writing an academic paper together co-author of the paper |
| neighborhood  | all the person who has written an academic paper  |
| isolated      | a person has written the academic paper alone |
| pendant       | a person has co-written the academic paper with only one person |
| degree of a vertex       | how many people have written the academic paper |

![problem 14](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_10_graphs/chapter_10.2_graph_terminology_and_special_types_of_graphs/repo/problem_14.png)

#### Solution

| terminology   | hollywood graph                    | Note          |
| :------:      | :------:                              | :------:      |
| vertex        | an actor who has worked in a hollywood movie  | NA            |
| edge          | both actors who have worked in the movie | NA            |
| neighborhood  | an actor who has worked with other actors in the movie | NA            |
| isolated      | an actor who has not worked with any one in a movie     | It is highly unlikely as most of the movies have more than one actor |
| pendant       | an actor who has only worked with another actor in a movie | It is highly unlikely as most of the movies have more than two actor |
| degree of a vertex       | with how many actors he/she has worked in various movies  | NA |

![problem 15](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_10_graphs/chapter_10.2_graph_terminology_and_special_types_of_graphs/repo/problem_15.png)

#### Solution

##### Directed graph

![problem 15_a](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_10_graphs/chapter_10.2_graph_terminology_and_special_types_of_graphs/repo/solution_15_a.png)

| Phone Number  | $deg^{-}(v)$  | $deg^{+}(v)$  | Edges             |
| :------:      | :------:      | :------:      | :------:          |
| 732-555-1234  | 3             | 3             | 6                 |
| 732-555-1001  | 2             | 5             | 7                 |
| 732-555-6666  | 5             | 1             | 6                 |
| 732-555-4444  | 0             | 1             | 1                 |
| 732-555-0011  | 2             | 2             | 4                 |
| **Total**     | **12**        | **12**        | **24**            |

##### Un-directed graph

![problem 15_b](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_10_graphs/chapter_10.2_graph_terminology_and_special_types_of_graphs/repo/solution_15_b.png)

| deg(v)                | result        | vertices type     |
| :------:              | :------:      | :------:          |
| deg(732-555-1234)     | 6             | NA                |
| deg(732-555-1001)     | 7             | NA                |
| deg(732-555-6666)     | 6             | NA                |
| deg(732-555-4444)     | 1             | Pendant           |
| deg(732-555-0011)     | 4             | NA                |

![problem 16](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_10_graphs/chapter_10.2_graph_terminology_and_special_types_of_graphs/repo/problem_16.png)

#### Solution

$deg^{-}(v) = e(u,v)$, means edge starting from u to v vertex, means from hyperlink clicked from page u will open page v. degree here means number of incoming pages. </br>
$deg^{+}(v) = e(u,v)$, means edge starting from u to v vertex, means from hyperlink clicked from page u will open page v. degree here means number of pages which will open from page u. </br>

![problem 17](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_10_graphs/chapter_10.2_graph_terminology_and_special_types_of_graphs/repo/problem_17.png)

#### Solution

$deg^{-}(v) = e(u,v)$, means edge starting from u to v vertex, v team has beaten u in a round robin match. </br>
$deg^{+}(v) = e(u,v)$, means edge starting from u to v vertex, u team has beaten v in a round robin match. </br>

![problem 18](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_10_graphs/chapter_10.2_graph_terminology_and_special_types_of_graphs/repo/problem_18.png)

#### Solution

Let a graph $G$ has $n$ vertices and $m$ edges. </br>
The degree of a vertex can range from $deg = \lbrace 0,1,2,..., n-1 \rbrace$ as it is a simple graph. </br>
According to the pigeonhole principle, $\lceil{\frac{n}{n-1}}\rceil = 2$. </br>
Hence it is proved. </br>

![problem 19](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_10_graphs/chapter_10.2_graph_terminology_and_special_types_of_graphs/repo/problem_19.png)

#### Solution

Let in a graph $G$, where vertex $v$ is a person, who has friendship with another person depicted by a simple graph. </br>
$u,v$ means u and v are friends. </br>
The degree of any vertex can $deg = \lbrace 0, 1, 2, ..., n-1 \rbrace$ as one cannot be friend with himself. </br>
And $\therefore$, according to pigeonhole principle, $\lceil{\frac{n}{n-1}}\rceil = 2$. </br>
Means, at least two persons are friends with same number of people. </br>

![problem 20](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_10_graphs/chapter_10.2_graph_terminology_and_special_types_of_graphs/repo/problem_20.png)

#### Solution

##### $k_7$ This graph has 7 vertices, where every vertex is joining with other distinct vertex. </br>

![solution 20_a](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_10_graphs/chapter_10.2_graph_terminology_and_special_types_of_graphs/repo/solution_20_a.png)

##### $k_{1,8}$ This graph is a complete bi partite graph, where in one subgroup there are 1 vertex and in another 8. </br>

![solution 20_b](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_10_graphs/chapter_10.2_graph_terminology_and_special_types_of_graphs/repo/solution_20_b.png)

##### $k_{4,4}$ This graph is a complete bi partite graph, where in one subgroup there are 4 vertex and in another 4. </br>

![solution 20_c](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_10_graphs/chapter_10.2_graph_terminology_and_special_types_of_graphs/repo/solution_20_c.png)

##### $C_7$ This graph is a 7 vertex cycle graph. </br>

![solution 20_d](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_10_graphs/chapter_10.2_graph_terminology_and_special_types_of_graphs/repo/solution_20_d.png)

##### $W_7$ This graph is a $7$ vertex wheel graph, where $8^{th}$ vertex is attached to all rest 7 cycle vertex. </br>

![solution 20_e](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_10_graphs/chapter_10.2_graph_terminology_and_special_types_of_graphs/repo/solution_20_e.png)

##### $Q_4$ This graph is hypercube with 4 vertex or 4-cube graph or it has $2^m$ vertices in this case $m=4$, means $16$ vertices. </br>

![solution 20_f](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_10_graphs/chapter_10.2_graph_terminology_and_special_types_of_graphs/repo/solution_20_f.png)

![problem 21-25](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_10_graphs/chapter_10.2_graph_terminology_and_special_types_of_graphs/repo/problem_21-25.png)

![problem 21](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_10_graphs/chapter_10.2_graph_terminology_and_special_types_of_graphs/repo/problem_21.png)

#### Solution

**Yes** it is a bipartite graph $K_{14}$ </br>

![solution 21](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_10_graphs/chapter_10.2_graph_terminology_and_special_types_of_graphs/repo/solution_21.png)

![problem 22](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_10_graphs/chapter_10.2_graph_terminology_and_special_types_of_graphs/repo/problem_22.png)

#### Solution

**Yes** it is a bipartite graph $K_{23}$ </br>

![solution 22](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_10_graphs/chapter_10.2_graph_terminology_and_special_types_of_graphs/repo/solution_22.png)


![problem 23](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_10_graphs/chapter_10.2_graph_terminology_and_special_types_of_graphs/repo/problem_23.png)

#### Solution

**No** it is **NOT** a bipartite graph because $(c,f)$ vertices are on the same bracket or in the same color blue / red </br>

![solution 23](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_10_graphs/chapter_10.2_graph_terminology_and_special_types_of_graphs/repo/solution_23.png)

![problem 24](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_10_graphs/chapter_10.2_graph_terminology_and_special_types_of_graphs/repo/problem_24.png)

#### Solution

**Yes** it is a bipartite graph $K_{24}$ </br>

![solution 24](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_10_graphs/chapter_10.2_graph_terminology_and_special_types_of_graphs/repo/solution_24.png)

![problem 25](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_10_graphs/chapter_10.2_graph_terminology_and_special_types_of_graphs/repo/problem_25.png)

#### Solution

**No** it is **NOT** a bipartite graph because $(c,d)$ and $(d,e)$ vertices are on the same bracket or in the same color blue / red </br>

![solution 25](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_10_graphs/chapter_10.2_graph_terminology_and_special_types_of_graphs/repo/solution_25.png)

![problem 26](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_10_graphs/chapter_10.2_graph_terminology_and_special_types_of_graphs/repo/problem_26.png)

#### Solution

| Graph Type            | bipartite     | not bipartite     |   Note        |
| :------:              | :------:      | :------:          |   :------:    |
| $K_n$                 | $K_2$         | $K_n$ where $n > 2$| $K_1$ is not applicable             |
| $C_n$                 | $C_n$ where $n$ is even             | $C_n$ where $n$ is odd | NA |
| $W_n$                 | None          | $W_n$ where $n > 2$ | Every graph has a triangle |
| $Q_n$                 | $Q_n$ where $n > 1$          | None | NA |

![problem 27](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_10_graphs/chapter_10.2_graph_terminology_and_special_types_of_graphs/repo/problem_27.png)

#### Solution

![solution 27](https://github.com/jigjnasu/discrete_mathematics_and_its_applications/blob/master/chapter_10_graphs/chapter_10.2_graph_terminology_and_special_types_of_graphs/repo/solution_27_a.png)

