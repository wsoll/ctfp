Based on 
1. Milewski, B. (2019). Category theory for programmers. Blurb.
2. [Milewski B. Course on Category Theory I, YouTube](https://www.youtube.com/playlist?list=PLbgaMIhjbmEnaH_LTkxLI7FMa2HsnawM_)
3. Cheng, E. (2023). The joy of abstraction: An exploration of math, category theory, and life. Cambridge University Press.

---

- [Binary Relation](#binary-relation)
- [Sets](#sets)
- [Category Theory](#category-theory)
  * [Basic terms and axioms](#basic-terms-and-axioms)
  * [Relationship](#relationship)
  * [Directionality](#directionality)
  * [Correspondence](#correspondence)
  * [Composition](#composition)

---
- `=` syntactically looks like `=` because there's nothing more equal than two parallel line.
- After all that years now I know why I'm so big fan of movie spoilers:
  > "Example first" is a mantra urging us to introduce examples before theory when teaching math. However, I personally
  > prefer seeing theory bvefore examples, so I've always been a bit ambivalent about that mantra. Some people prefer it
  > one way round and some people prefer it another.

  ~ Cheng, E. [3]
- `ℕ ⊂ ℤ ⊂ ℚ ⊂ ℝ ⊂ ℂ`
- **element**: not emphasizing anything dimensional. **object**: emphasizing dimensionality.

# Binary Relation

Binary Relation involves two arguments (`a,b`) and *relation* (`R`, `~`) as variable: (`aRb`, `a~b`) 

- **Reflexity**: involves one object.
  - **Definition:** A relation R on a set S is called reflexive if `∀a ∈ S, aRa`
    - **Example 1:** Let `S = ℝ` and let `R` be the relation `=`.  
      - Now, given `a ∈ ℝ` certainly `a = a` so `R` is **indeed reflexive**.
    - **Example 2:** Let `S = ℝ` and let `R` be the relation `<`.  
      - Now, given `a ∈ ℝ` certainly `a < a` so `R` is **not reflexive**.
- **Symmetry**: involves two objects.
  - **Definition:** A relation R on a set S is called symmetric if `∀a,b ∈ S, if aRb then bRa`
    - **Example 1:** Let `S = ℝ` and let `R` be the relation `=`.  
      - Now, let `a,b ∈ ℝ`. If `a = b` then it is also true that `b = a`, so this relation is **symmetric.**
    - **Example 2:** Let `S = ℝ` and let `R` be the relation `<`.  
      - Now, let `a,b ∈ ℝ`. If `a < b` then it is definitely not true `b < a`, so this relation is **not symmetric.**
    - **Example 3:** Let `S = ℤ` and let `R` be the relation `|`.  
      - Now, let `a,b ∈ ℤ`. If `a | b` then it is possible that `b | a`: `2 | 2` but it is not necessarily true
        - `2 | 4` but not `4 ∤ 2` so the relation is **not symmetric.**
  - **Antisymmetry**
    - **Definition:** A relation R on a set S is called antisymmetric if `∀a,b ∈ S, if aRb never bRa`
      - **Example 1:** Let `S = ℝ` and let `R` be the relation `<`.  
        - Now, let `a,b ∈ ℝ`. If `a < b` then it is definitely never `b < a`
- **Transitivity**: involves three or more objects.
  - **Definition:** A relation R on a set S is called transitive if `∀a,b,c ∈ S: {aRb & bRc} => aRc`
    - **Example 1:** Let `S = ℝ` and let `R` be the relation `=`.  
      - Now, let `a,b,c ∈ ℝ`. If `a = b` and `b = c`  then it follows that `a = c`, so this relation is **transitive.**
    - **Example 2:** Let `S = ℝ` and let `R` be the relation `<`.  
      - Now, let `a,b,c ∈ ℝ`. If `a < b` and `b < c` then it follows that `a < c`, so this relation is **transitive.**
    - **Example 3:** if `a` is the mother of `b` and `b` is the mother of `c` 
      - then `a` is definitely not the mother of `c`, so the relation `is the mother of` is **not transitive**.
    - **Example 4:** if `a` is the sister of `b` and `b` is the sister of `c`
      - then it is possible that `a` is the sister of `c` but it is not necessarily true
        - `a = person1`, `b = person2`, `c = person1` so the relation is **not transitivie**
- **Equivalence Relation**
  - **Definition:** If a relation R on a set S is reflexive, symmetric and transitive then we call it an *equivalence relation*.
    - **Example 1:**

# Sets
[//]: # (## Totally ordered sets)
[//]: # (### Trichotomy)
[//]: # (## Partially ordered sets)


# Category Theory
- *Pedantry* is precision that does not increase clarity.
- A *diagram* in a category is a collection of objects and arrows from the category, possibly not all of them.
A diagram is said to *commute* if any two composable strings with the same endpoints produce the same pomposite.

  <table>
    <thead>
      <tr>
        <th></th>
        <th>Equivalence Relation</th>
        <th>Category</th>
        <th>Group</th>
        <th></th>
      </tr>
    </thead>
    <tbody>
      <tr>
        <td></td>
        <td>objects<br>relations</td>
        <td>objects<br>arrows</td>
        <td><br>objects</td>
        <td></td>
      </tr>
      <tr>
        <td><b>PROPERTIES</b></td>
        <td>reflexivity<br>symmetry<br>transitivity</td>
        <td>identities<br>inverses<br>composition</td>
        <td>identity<br>inverses<br>binary operation</td>
        <td><b>STRUCTURE</b></td>
      </tr>
      <tr>
        <td></td>
        <td></td>
        <td>unitality<br>associativity</td>
        <td>unitality<br>associativity</td>
        <td></td>
      </tr>
    </tbody>
  </table>

## Basic terms and axioms
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
  
## Relationship
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

## Directionality
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

## Correspondence
- Point (1) from [directionality] corresponds to **abstracting**
  - > You can boil an egg, but you can't unboil the egg.
  - > I really don't care of which points I came from (x fiber). I'm only interested in one property there (y)
    - > From wherever we came from, it's over and done.
  - If function **does not collapse** things, then it's called **injective function (injection)**:
    - x<sub>1</sub> ->fx<sub>1</sub>
    - x<sub>2</sub> ->fx<sub>2</sub>
- Point (2) from [directionality] corresponds to **modeling** 
  - One set to the other set. I see one figure in a category in different category.
  - A man could cast a shadow in a cave (like in Plato's cave)
  - if the function cover the whole codomain (image is equal to codomain) is called **subjective function**
    - ∀y ∃x,y = fx

If a function is **injective** and **subjective**, it's actually **isomorphism**, you can invert it.

How to talk about **injections** and **subjections** as can't talk about elements in Category Theory - these are abstracted.

I have to explain these things only in terms of morphisms.
> No matter how good you microscope is, you cannot look inside a little point.

> If my microscope doesn't work maybe my telescope could work.

> In Category Theory we don't like latin. We use greek.

- Surjective (onto) -> **Epic**, **Epimorphism**
- Injective -> **Monic**, **Monomorphism**

## Composition