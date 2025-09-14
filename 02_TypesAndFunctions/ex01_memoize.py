from typing import Callable, ParamSpec, TypeVar

P = ParamSpec("P")
B = TypeVar("B")
Arg = TypeVar("Arg")


def fib(n: int) -> int:
    if n < 2:
        return n
    return fib(n - 1) + fib(n - 2)


def memoize(f: Callable[[P], B]):
    memoized = {}

    def g(x: Arg):
        if x in memoized:
            print(f"Memozied has been used for {x}: {memoized[x]}")
            return memoized[x]
        tmp = f(x)
        memoized[x] = tmp
        print(f"{x}: {tmp}")
        return tmp

    return g


if __name__ == "__main__":
    f = fib
    fib_memo = memoize(f)

    for x in [0, 1, 2, 5, 10, 15, 30, 30, 30, 35, 35, 35, 36]:
        fib_memo(x)
