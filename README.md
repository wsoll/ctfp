
# 1.4
## 1
> Implement, as best as you can, the identity function in your favorite
language (or the second favorite, if your favorite language happens to be
Haskell).
>
```python
from typing import TypeVar, Callable, ParamSpec, overload

P = ParamSpec("P")
R = TypeVar("R")


def pass_through(fn: Callable[P, R]) -> Callable[P, R]:
    return fn


print(pass_through(lambda y: y))

T = TypeVar("T")


@overload
def identity(x: Callable[..., object]) -> None: ...


@overload
def identity(x: T) -> T: ...


def identity(x):
    if callable(x):
        raise TypeError("identity does not accept functions")
    return x


# print(identity(lambda y: y))
print(identity(5))
```
