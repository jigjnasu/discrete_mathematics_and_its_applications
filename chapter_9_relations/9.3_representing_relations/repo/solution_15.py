'''
    Problem 15
    Chapter 9.3
    Discrete Mathematics and its applications
    Rakesh Kumar
'''
def boolean_pow(A, B):
    R = []
    for i in range(len(A)):
        r = []
        for j in range(len(A)):
            v = 0
            for k in range(len(A)):
                if A[i][k] == 1 and B[k][j] == 1:
                    v = 1
            r.append(v)
        R.append(r)
    return R

def print_matrix(A):
    for r in range(len(A)):
        print('|', end='')
        for c in range(len(A[r])):
            print(f'{A[r][c]} ', end='')
        print('|')

if __name__ == '__main__':
    R = [[0,1,0], [0,0,1], [1,1,0]]
    print('a)')    
    A = boolean_pow(R, R)
    print_matrix(A)
    print('b)')
    B = boolean_pow(R, A)
    print_matrix(B)
    print('c)')
    C = boolean_pow(R, B)
    print_matrix(C)
    