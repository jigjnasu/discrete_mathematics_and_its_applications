'''
    This program is for matrix relations calculations like M_R , M_R^2 etc
'''

class MR(object):
    def __init__(self, no_of_elements_in_set, ordered_pairs):
        self._M = [ [0]*no_of_elements_in_set for i in range(no_of_elements_in_set)]
        for e in ordered_pairs:
            r = e[0] - 1
            c = e[1] - 1
            self._M[r][c] = 1
            
    def R(self, n):
        T = self._M
        for i in range(1, n):
            for r in range(len(self._M)):
                for c in range(len(self._M)):
                    if self._bit_set(r, c, T):
                        T[r][c] = 1
        return T
    
    def _bit_set(self, r, c, T):
        for i in range(len(self._M)):
            if self._M[r][i] == 1 and T[i][c] == 1:
                return True
        return False
    
def print_matrix(M):
    print('-------------------------------------')
    for r in M:
        for e in r:
            print(f'{e}', end=' ')
        print('')
    print('-------------------------------------')

def test():
    op = [(1, 3), (2, 4), (3, 1), (3, 5), (4, 3), (5, 1),(5, 2), (5, 4)]
    mr = MR(5, op)
    R = mr.R(1)
    print_matrix(R)
    
    T = mr.R(2)
    print_matrix(R)

if __name__ == '__main__':
    test()