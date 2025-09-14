from random import randrange
from ex01_memoize import memoize

if __name__ == "__main__":
    h = randrange
    randrange_memo = memoize(h)
    for x in range(1, 5):
        randrange_memo(x)
    for x in range(1, 5):
        randrange_memo(x)
