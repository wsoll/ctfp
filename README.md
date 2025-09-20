Based on [Bartosz Milewski's lectures](https://www.youtube.com/playlist?list=PLbgaMIhjbmEnaH_LTkxLI7FMa2HsnawM)
# Basic terms and axioms
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

# Directionality
Is the function invertible? Usually it is not. 
- Function `f :: a->b` is invertible if there's
- another function `g :: b->a`.
  - g ∘ f = id<sub>a</sub>
  - f ∘ g = id<sub>b</sub>
- If it's defined only in composition and identity terms it's categorical terms
- A function that's invertible is automatically **symetric**
- A function that's invertible is called **isomorphism**

Why most function and not invertible?
1. Let's take function `bool isEven(int x)`. It collapses x<sub>1</sub>, x<sub>2</sub>, ... to two values:
true or false. You can make an inversion, however you have multiple values called **fiber**.
  - <img src="pic/fiber.png" alt="fiber" width="300"/>
2. If a function maps to an image of codomain, you can't really invert codomain. You can only make an inversion of the image.
  - <img src="pic/image.png" alt="image" width="300"/>

# Correspondence
- Point (1) from [directionality] corresponds to **abstracting**
  - > You can boil an egg, but you can't unboil the egg.
  - > I really don't care of which points I came from (x fiber). I'm only interested in one property there (y)
    - > From wherever we came from, it's over and done.
  - If function **does not collapse** things, then it's called **injective function (injection)**:
    - x<sub>1</sub> ->fx<sub>1</sub>
    - x<sub>2</sub> ->fx<sub>2</sub>
- Point (2) from [directionality] corresponds to **modeling** 
  - One set to the other set.
  - I see one figure in a category in different category.
  - A man could cast a shadow in a cave (like in Plato's cave)
    - if the function cover the whole codomain (image is equal to codomain) is called **subjective function**

If a function is **injective** and **subjective**, it's actually **isomorphism**, you can invert it.