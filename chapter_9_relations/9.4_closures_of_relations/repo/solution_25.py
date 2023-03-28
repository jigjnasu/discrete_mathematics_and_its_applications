'''
    Discrete mathematics and its applications
    Chapter 9.4, Closures of Relations
    Solution 25
'''
class MR(object):
    def __init__(self, no_of_elements_in_set, ordered_pairs):
        self._M = [[0]*no_of_elements_in_set for i in range(no_of_elements_in_set)]
        for e in ordered_pairs:
            r = e[0] - 1
            c = e[1] - 1
            self._M[r][c] = 1
            
    def R(self, n):
        T = self._M
        for i in range(1, n):
            M = self._empty_matrix()
            for r in range(len(self._M)):
                for c in range(len(self._M)):
                    if self._bit_set(r, c, T):
                        M[r][c] = 1
            T = M
        return T
    
    def union(self, A):
        R = self._empty_matrix()
        for r in range(len(R)):
            for c in range(len(R)):
                value = 0
                for i in range(len(R)):
                    if A[i][r][c] == 1:
                        value = 1
                        break
                R[r][c] = value
        return R
    
    def _bit_set(self, r, c, T):
        for i in range(len(self._M)):
            if self._M[r][i] == 1 and T[i][c] == 1:
                return True
        return False
    
    def _empty_matrix(self):
        return [[0]*len(self._M) for i in range(len(self._M))]

def print_matrix(M):
    print('-------------------------------------')
    for r in M:
        for e in r:
            print(f'{e}', end=' ')
        print('')
    print('-------------------------------------')
    
def test_a(n):
    op = [(1, 2), (2,1), (2,3), (3,4), (4,1)]
    mr = MR(n, op)
    A = []
    for i in range(1, n + 1):
        M = mr.R(i)
        A.append(M)
        print_matrix(M)
    R = mr.union(A)
    print_matrix(R)
    
def test_b(n):
    op = [(2, 1), (2,3), (3,1), (3,4), (4,1), (4, 3)]
    mr = MR(n, op)
    A = []
    for i in range(1, n + 1):
        M = mr.R(i)
        A.append(M)
        print_matrix(M)
    R = mr.union(A)
    print_matrix(R)

def test_c(n):
    op = [(1, 2), (1,3), (1,4), (2,3), (2,4), (3, 4)]
    mr = MR(n, op)
    A = []
    for i in range(1, n + 1):
        M = mr.R(i)
        A.append(M)
        print_matrix(M)
    R = mr.union(A)
    print_matrix(R)

def test_d(n):
    op = [(1, 1), (1,4), (2,1), (2,3), (3,1), (3, 2), (3,4), (4, 2)]
    mr = MR(n, op)
    A = []
    for i in range(1, n + 1):
        M = mr.R(i)
        A.append(M)
        print_matrix(M)
    R = mr.union(A)
    print_matrix(R)

if __name__ == '__main__':
    n = 4
    test_a(n)
    test_b(n)
    test_c(n)
    test_d(n)
