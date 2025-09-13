- 01
  - > Implement, as best as you can, the identity function in your favorite language (or the second favorite, if your favorite language happens to be Haskell).
    - [ex01_indentity.py](ex01_identity.py)
- 02
  - > Implement the composition function in your favorite language. It takes two functions as arguments and returns a function that is their composition.
    - [ex02_composition](ex02_composition.py)
- 03
  - > Write a program that tries to test that your composition function respects identity.
    - [ex03_test_composition_identity](ex03_test_composition_identity.py)
- 04 & 05
  - > Is the world-wide web a category in any sense? Are links morphisms?
  - > Is Facebook a category, with people as objects and friendships as morphisms?
    - WWW
      - **identity arrow**: a page could contain a weblink to itself but not every page contains it.
      - **morphism/arrow**: hyperlinks between pages
      - **composition**: there isn't a link from A->C just by having links A->B & B->C
    - Facebook
      - **identity arrow**: being able to check own profile
      - **morphism/arrow**: being able to check friend's profile
      - **composition**: being able to check partial profile of a friend of my friend
- 06
  - > When is a directed graph a category?
    1. A direct graph is a category when every vertex has an identity arc.
    2. Between any two arcs `f: A->B` & `g: B->C` there's another arc `g∘f : A->C` that is a composition: g(f(x))
    3. The composition satisfies the associativity: `h ∘ (g ∘ f) = (h ∘ g) ∘ f`
    4. The composition satisfies unit law 
