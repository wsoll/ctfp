from typing import TypeVar, Callable, ParamSpec, overload

P = ParamSpec("P")
R = TypeVar("R")
T = TypeVar("T")


def pass_through(fn: Callable[P, R]) -> Callable[P, R]:
    return fn


@overload
def identity(x: Callable[..., object]) -> None: ...


@overload
def identity(x: T) -> T: ...


def identity(x):
    if callable(x):
        raise TypeError("identity does not accept functions")
    return x


if __name__ == "__main__":
    print(pass_through(lambda y: y))
    try:
        identity(lambda y: y)
    except TypeError as e:
        assert str(e) == "identity does not accept functions"
    print(identity(5))
