from ex01_identity import identity
from ex02_composition import composition, double

if __name__ == "__main__":
    f = double

    #  f ∘ id = f
    composed = composition(f, identity)
    for x in [0, 1, 5, 10]:
        assert composed(x) == f(x), f"Failed left identity at {x}"

    # id ∘ f = f
    composed = composition(identity, f)
    for x in [0, 1, 5, 10]:
        assert composed(x) == f(x), f"Failed right identity at {x}"

    print("Identity law passes for composition")
