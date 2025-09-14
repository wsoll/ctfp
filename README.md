Based on [Bartosz Milewski's lectures](https://www.youtube.com/playlist?list=PLbgaMIhjbmEnaH_LTkxLI7FMa2HsnawM)
# Basic terms & axioms
- Category
  - Objects
    - e.g.: `A`, `B`, `C`
  - Morphisms/Arrows
    - e.g.; `A->B`, `B->C`
- Abstraction
  - Composition
      - ∀(`f: A->B` & `g: B->C`) ∃(`g∘f : A->C`)
        - g after f order because: `g(f(x))`
      - Associativity
        - `h ∘ (g ∘ f) = (h ∘ g) ∘ f`
      - <img src="pic/associativity.png" alt="associativity diagram" width="300"/>
  - Identity
    - ∀x ∈ Ob(C), ∃ id<sub>X</sub> : X → X
      - C: category
      - Ob: objects
    - left & right identity
      - id<sub>b</sub> ∘ f = f
      - g ∘ id<sub>a</sub> = g
    - <img src="pic/identity.png" alt="identity diagram" width="300"/>
  
# Relationship
<img src="pic/relationship.png" alt="relation diagram" width="300"/>

- Mapping objects in sets with arrow we have ordered pairs
  - `(a, b) != (b, a)`
- Without an arrow we have unordered pair
  - `{b,a} = {a,b}`
- **Directionality** comes from function axioms.
- **Order** comes from set axioms
- Image is a subset of the codomain, not necessarily all of it.
  - `f: X->Y, f(X) = {f(x) | x ∈ X}`
    - e.g.: `X = {1,2,3}, Y = {a,b,c,d}, Im(f) = {a,c}`