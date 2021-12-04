import math
import numpy as np

def solve():
    s = []
    sb = False
    c = []
    cb = False
    i = 1
    while True:
        if i * i <= 1000:
            s.append(i * i)
        else:
            sb = True
        if i * i * i <= 1000:
            c.append(i * i * i)
        else:
            cb = True
        if sb and cb:
            break
        i += 1
    print('length = {} square number set = {}'.format(len(s), s))
    print('length = {} cube   number set = {}'.format(len(c), c))
    s = np.array(s)
    c = np.array(c)
    r = np.intersect1d(s, c)
    print('length = {} duplicate items   = {}'.format(len(r), r))
        

if __name__ == '__main__':
    solve()