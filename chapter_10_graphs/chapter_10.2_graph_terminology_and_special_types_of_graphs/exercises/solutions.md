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