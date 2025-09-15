import random

from ex01_memoize import memoize


def random_with_seed(seed: int):
    rng = random.Random(seed)
    result = rng.random()
    return result


if __name__ == "__main__":
    f = random_with_seed
    f_memo = memoize(f)

    for x in range(5):
        f_memo(x)

    for x in range(5):
        f_memo(x)
