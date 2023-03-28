'''
    Discrete mathematics and its applications
    Chapter 9.4, Closures of Relations
    Solution 27
'''

def print_matrix(M, w):
    print(f'-------------------{w}------------------')
    for r in M:
        for e in r:
            print(f'{e}', end=' ')
        print('')
    print('-------------------------------------------')

class MR(object):
    def __init__(self, no_of_elements_in_set, ordered_pairs):
        self._M = [[0]*no_of_elements_in_set for i in range(no_of_elements_in_set)]
        for e in ordered_pairs:
            r = e[0] - 1
            c = e[1] - 1
            self._M[r][c] = 1
            
    def R(self):
        print_matrix(self._M, 'w0')
        for i in range(0, len(self._M)):
            T = self._empty_matrix()
            cols = self._columns(i)
            rows = self._rows(i)
            for c in cols:
                for r in rows:
                    T[c][r] = 1
            self._intersection(T)
            print_matrix(self._M, 'w' + str(i + 1))
        
    def _columns(self, c):    
        cols = []
        for i in range(len(self._M)):
            if self._M[i][c] == 1:
                cols.append(i)
        return cols

    def _rows(self, r):
        rows = []
        for i in range(len(self._M)):
            if self._M[r][i] == 1:
                rows.append(i)
        return rows
    
    def _empty_matrix(self):
        return [[0]*len(self._M) for i in range(len(self._M))]
    
    def _intersection(self, T):
        for r in range(len(T)):
            for c in range(len(T)):
                self._M[r][c] = self._M[r][c] or T[r][c]
    
def solution_a(n):
    op = [(1, 2), (2,1), (2,3), (3,4), (4,1)]
    mr = MR(n, op)
    mr.R()

def solution_b(n):
    op = [(2, 1), (2,3), (3,1), (3,4), (4,1), (4, 3)]
    mr = MR(n, op)
    mr.R()

def solution_c(n):
    op = [(1, 2), (1,3), (1,4), (2,3), (2,4), (3, 4)]
    mr = MR(n, op)
    mr.R()
    
def solution_d(n):
    op = [(1, 1), (1,4), (2,1), (2,3), (3,1), (3, 2), (3,4), (4, 2)]
    mr = MR(n, op)
    mr.R()

if __name__ == '__main__':
    n = 4
    solution_a(n)
    solution_b(n)
    solution_c(n)
    solution_d(n)
