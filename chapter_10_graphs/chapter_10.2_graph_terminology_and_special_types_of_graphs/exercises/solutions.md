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
