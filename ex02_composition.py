from typing import TypeVar, Callable, ParamSpec

P = ParamSpec("P")
B = TypeVar("B")
C = TypeVar("C")


def double(x: int) -> int:
    return 2 * x


def increment(x: int) -> int:
    return x + 1


def composition(f: Callable[[B], C], g: Callable[[P], B]) -> Callable[[P], C]:
    def h(*args: P.args, **kwargs: P.kwargs) -> C:
        return f(g(*args, **kwargs))

    return h


if __name__ == "__main__":
    f = double
    g = increment
    composed = composition(f, g)

    for x in [0, 1, 2, 5, 9, 13]:
        result = composed(x)
        print(f"argument {x}: result: {result}")
