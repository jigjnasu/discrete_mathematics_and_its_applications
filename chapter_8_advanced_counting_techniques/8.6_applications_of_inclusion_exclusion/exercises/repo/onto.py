'''
    factorial implementation
'''
def fact(n):
    r = 1
    for i in range(1, n+1):
        r = r * i
    return r

'''
    onto function implementation
'''
def onto(m, n)->None:
    '''
        distribute m elements to n
        formula for onto function is
        R = n^m - C(n, 1)(n-1)^m + C(n, 2)(n-2)^m - ... + (-1)^n-1 C(n, n-1).1^m
    '''
    r = pow(n, m)
    num = fact(n)
    for i in range(1, n):
        den_a = fact(i)
        den_b = fact(n - i)
        temp = num // (den_a * den_b)
        temp = temp * pow(n-i, m)
        if i & 1 == 1:
            r -= temp
        else:
            r += temp
    return r

if __name__ == '__main__':
    m,n = map(int, input().split())
    print(onto(m, n))