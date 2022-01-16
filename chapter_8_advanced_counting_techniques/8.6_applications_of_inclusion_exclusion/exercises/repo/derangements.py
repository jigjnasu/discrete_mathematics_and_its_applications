'''
    Discrete Mathematics and its applications
    Chapter 8.6
    Implementation of derangements
'''
def fact(n):
    r = 1
    for i in range(1, n + 1):
        r = r * i
    return r

def derangements(n):
    nf = fact(n)
    r = 0
    print('{} - {} '.format(nf, nf), end='')
    for i in range(2, n + 1):
        t = fact(i)
        t = nf // t
        if i & 1 == 0:
            print('+ {} '.format(t), end='')
            r = r + t
        else:
            print('- {} '.format(t), end='')    
            r = r - t
    print()
    return r

def prob(n):
    f = fact(n)
    d = derangements(n)
    print('{}/{} = {}'.format(d, f, d/f))

if __name__ == '__main__':
    n = int(input())
    print(derangements(n))
    prob(n)