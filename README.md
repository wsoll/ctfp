Based on

1. [Milewski, B. (2019). Category theory for programmers. Blurb.](https://bartoszmilewski.com/2014/10/28/category-theory-for-programmers-the-preface/)
2. [Milewski B. Course on Category Theory I, YouTube](https://www.youtube.com/playlist?list=PLbgaMIhjbmEnaH_LTkxLI7FMa2HsnawM_)
3. Cheng, E. (2023). The joy of abstraction: An exploration of math, category theory, and life. Cambridge University
   Press.
4. Murawski, R., & Świrydowicz, K. (2006). Podstawy logiki i teorii mnogości. Poznań: Wydawnictwo Naukowe UAM

---

- [Formal Logic](#formal-logic)
    * [Tautologies](#tautologies)
    * [First-order logic (predicate logic)](#first-order-logic-predicate-logic)
- [Set Theory](#set-theory)
- [Relation Theory](#relation-theory)
- [Ordered structures](#ordered-structures)
    * [Binary Relation](#binary-relation)
    * [Totally ordered sets (Tosets)](#totally-ordered-sets-tosets)
        + [Trichotomy and Comparability](#trichotomy-and-comparability)
    * [Partially ordered sets (Posets)](#partially-ordered-sets-posets)
        + [Structural and Quantitive view](#structural-and-quantitive-view)
- [Structures](#structures)
    * [Monoid](#monoid)
    * [Groupoid](#groupoid)
- [Category Theory](#category-theory)
    * [Relationship](#relationship)
    * [Directionality](#directionality)
    * [Correspondence](#correspondence)
    * [Composition](#composition)

# Formal Logic

There are 5 standard logic functors (in formal semantics) also called operators (in computer science) or logical
connective (formal logic) in the following contexts:

Other type of functors
<table>
<thead>
  <tr>
    <th><b>Symbol</b></th>
    <th><b>Type</b></th>
    <th><b>Note</b></th>
  </tr>
</thead>
<tbody>
  <tr>
    <td>∧, ∨, ~, =>, <=></td>
    <td>logical functors</td>
    <td>operators on propositions in propositional logic</td>
  </tr>
  <tr>
    <td>∀, ∃</td>
    <td>quantifier functors</td>
    <td>build propositions from predicates</td>
  </tr>
  <tr>
    <td>+, *, -</td>
    <td>arithmetic functors / functions</td>
    <td>numeric operators in function theory or algebra</td>
  </tr>
</tbody>
</table>

## Tautologies

**Metaphysical**  
These four laws were known in Philosophy for a long time. These have metaphysical implications. Especially (2) & (3) is
considered in Thomism philosophy as guiding law of existence. Includes only one variable.

1. **Reflexivity of implication**
    - `p => p` - *every proposition implies itself*
    - Every proposition is trivially sufficient for itself.
2. **Law of excluded middle**
    - `p ∨ ~p` - *either p is true or p is false.*
    - There is no middle ground — every proposition is either true or false.
3. **Law of non-contradiction**
    - `~(p ∧ ~p)` - *it's impossible for p and not-p both be true.*
    - A statement cannot be both true and false at the same time.
4. **Double negation**
    - `~~p <=> p` - *two negations cancel out*
    - Denying a denial restores the original statement.

---

**Reduction/Explosion**  
(1) and (2) includes only one variable where (3) and (4) includes two of them. All of them includes 4 types of
functors excluding `iff` (`<=>`)

1. **Reductio ad absurdum | Clavius's Law | Principle of Explosion (weak) | dictum mimrabilis**
    - `(p => ~p) => ~p` - *if assuming p leads to contradiction, then p must be false*
    - This is the basic form of proof by contradiction: once p implies its own falsity, we reject p.
2. **Second version of Clavius's Law**
    - `(~p => p) => p` - *If assuming ¬p leads to p being true, then p must indeed be true.*
    - This is the "positive" form of reductio: contradiction in the negation confirms the original proposition.
3. **Principle of Expolsion**
    - `p ∧ ~p => q` - *If a contradiction is true, then any statement whatsoever follows.*
    - Once a system contains a contradiction, it becomes logically meaningless in classical logic — every statement
      becomes derivable.
4. **Conditional form of Explosion**
    - `p => (~p => q)`- *If p is true, then assuming p is false allows you to conclude anything.*
    - This is a curried version of explosion, emphasizing that contradictions are catastrophic in classical reasoning:
      starting from an impossible scenario, any outcome is logically forced.

---
**Interference**:

## First-order logic (predicate logic)

# Set Theory

# Relation Theory

# Ordered structures

To define ordered structure we need a definition of binary relation. Binary relation involves two arguments (`a,b`) and
*relation* (`R`,`~`) as variable: (`aRb`, `a~b`)

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
            - Now, let `a,b ∈ ℝ`. If `a < b` then it is definitely not true `b < a`, so this relation is **not
              symmetric.**
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
            - Now, let `a,b,c ∈ ℝ`. If `a = b` and `b = c`  then it follows that `a = c`, so this relation is *
              *transitive.**
        - **Example 2:** Let `S = ℝ` and let `R` be the relation `<`.
            - Now, let `a,b,c ∈ ℝ`. If `a < b` and `b < c` then it follows that `a < c`, so this relation is *
              *transitive.**
        - **Example 3:** if `a` is the mother of `b` and `b` is the mother of `c`
            - then `a` is definitely not the mother of `c`, so the relation `is the mother of` is **not transitive**.
        - **Example 4:** if `a` is the sister of `b` and `b` is the sister of `c`
            - then it is possible that `a` is the sister of `c` but it is not necessarily true
                - `a = person1`, `b = person2`, `c = person1` so the relation is **not transitive**
- **Equivalence Relation**
    - **Definition:** If a relation R on a set S is reflexive, symmetric and transitive then we call it an *equivalence
      relation*.
        - **Example 1:** Let `S = ℤ` and let `R` be the relation `≤`. Now, given `a,b,c ∈ ℤ`:
            - Certainly `a ≤ a` so `R` is reflexive.
            - But it is not symmetric: `a ≤ b` and `b ≤ a` could be true only if `a = b`.
            - If `a ≤ b` and `b ≤ c` then it follows that `a ≤ c`, so this relation is transitive.
                - So the relation is **not equivalence relation**
        - **Example 2:** ...

## Totally ordered sets (Tosets)

- **Definition:** A totally ordered set is a category in which for all objects `a`, `b` there is exactly one arrow
  between them.
- **(T, ≤)**: reflexive, antisymmetric, transitive, **comparable**
    - **Example:** Let `S = ℕ` and let `R` be the relation `≤`. Now given `a,b ∈ ℕ`:
        - Definitely `a ≤ b` or `b ≤ a` is true, and they can't both be unless `a = b`.
            - Therefore `ℕ` is totally ordered set.
- **Non-categorical definition of ordered set**
    - reflexivity: `a ≤ a, ∀a ∈ S`
    - antisymmetry: `((a ≤ b) and (b ≤ a)) => (a = b)`
    - transitivity: `((a ≤ b) and (b ≤ c)) => (a ≤ c)`
    - **trichotomy**: `∀a, ∀b ∈ S, a ≤ b or b ≤ a`

Ways how a category of totally ordered sets could fail:

- a pair of objects with *more* than one arrow between them or,
- a pair of objects with *fever* then one arrow between them (i.e. none)

<img src="pic/ordered_set_category_fails.png" alt="category fails" width="500"/>

### Trichotomy and Comparability

The reflexivity condition for totally ordered set definition is redundant: **reflexivity is a special case of
trichotomy**:

- if we put `a = b` in the definition of trichotomy, we get `a ≤ b or b ≤ a`, which is reflexivity
    - If we say "X is true or X is true" then it's logically equivalent to saying "X is true".

Similarly, **comparability** is an immediate consequence of trichotomy:

- for any `a, b`, trichotomy states that exactly one of `a < b`, `a = b`, or `b < a` holds.
- ignoring equality, this implies that for every pair `a, b`, *either* `a ≤ b` *or* `b ≤ a` — i.e., the elements are *
  *comparable**.

Thus, trichotomy => comparability, and comparability together with antisymmetry defines a total (non-strict) order.

In the categorical definition we don't need the other conditions because:

1. Reflexivity comes from the category having identities.
2. Transitivity comes from composition in the category.
3. Antisymmetry and trichotomy both come from there being exactly one arrow between `a` and `b`
    - antisymmetry comes from there being *at most one* - `∃!`
    - trichotomy from there being *at least one* - `∃`

## Partially ordered sets (Posets)

- **Definition:** A partially ordered set is a category in which for any objects `a`, `b` there is at most one arrow
  between them.
- **(P, ≤), reflexive, antisymmetric, transitive**
    - Therefore `a -> b` is `true/false` statement: `true` - arrow or `false` - no arrow.
        - **Example:** Let `S = {1,2,...,30}` and let `R` be the relation defined by divisibility`|`. Now
          given  `a = 30, b ∈ {1,2,...,30}`:
            - `P = {1,2,3,5,6,10,15,30}`
                - `1` because `1|30`
                    - ->`2` -------> `30`
                        - ->`6` ->
                        - ->`10`->
                    - ->`3` -------> `30`
                        - ->`6` ->
                        - ->`15`->
                    - ->`5` -------> `30`
                        - ->`10`->
                        - ->`15`->
- **Non-categorical definition of partially ordered set**: same as toset (reflexive, antisymmetric transitive)
  definition but without **trichotomy**.

### Structural and Quantitive view

1. Hierarchy of overall divisors -> **the structural view**
    - <img src="pic/composition.png" alt="composition" width="475"/>
2. Hierarchy by number of types of divisors -> **the quantitative view**
    - <img src="pic/quantitave_factors_lvls.png" alt="category fails" width="600"/>

# Structures

- **Definition:** A category is called discrete if it has no arrows except identity arrows.

## Monoid

- **Definition:** A category with only one object is called a monoid.
- **Non-categorical definition of a monoid**:
    - A monoid is a set M equipped with an identity 1 and a unital and associative binary operator `∘`. The monoid is
      sometimes written fully as `(M,∘,1)`
        - *unital* means that: `∀m ∈ M, 1∘m = m∘1`
        - *associativity* means that: `∀a,b,c ∈ M, (a∘b)∘c = a∘(b∘c)`

<table>
<thead>
  <tr>
    <th></th>
    <th><b>non-categorical</b></th>
    <th><b>categorical</b></th>
  </tr>
</thead>
<tbody>
  <tr>
    <td><b>DATA</b></td>
    <td><br>objects <b>----------------></b></td>
    <td>"dummy" object<br>arrows</td>
  </tr>
  <tr>
    <td><b>STRUCTURE</b></td>
    <td>identity object <b>-------></b><br>binary operation <b>----></b></td>
    <td>identity arrow <br>composition</td>
  </tr>
  <tr>
    <td><b>PROPERTIES</b></td>
    <td>unitality <b>---------------></b><br>associativity <b>---------></b></td>
    <td>unitality<br>associativity</td>
  </tr>
</tbody>
</table>

## Groupoid

- **Definition:** An *inverse* for an element `a` of a monoid `(M,∘,1)` is an element `b` such that `a∘b=1` and
  `b∘a=1`.
- **Definition:** A *group* is a monoid in which every element has an **inverse**.
- **Non-categorical definition of a group:** a *group* consists of a set `G` equipped with a binary operation `∘`
  and an identity element 1 satisfying unit laws and associativity, and such that every element has an **inverse** with
  respect to `∘`

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
      <td><b>P<br>R<br>O<br>P<br>E<br>R<br>T<br>I<br>E<br>S</b></td>
      <td>reflexivity<br>symmetry<br>transitivity</td>
      <td>identities<br>inverses<br>composition</td>
      <td>identity<br>inverses<br>binary operation</td>
      <td><b>S<br>T<br>R<br>U<br>C<br>T<br>U<br>R<br>E</b></td>
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

- **Definition:** a *groupoid* is a category in which every arrow has an inverse.

# Category Theory

- *Pedantry* is precision that does not increase clarity.
- A *diagram* in a category is a collection of objects and arrows from the category, possibly not all of them.
  A diagram is said to *commute* if any two composable strings with the same endpoints produce the same pomposite.


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
2. If a function maps to an image of codomain, you can't really invert codomain. You can only make an inversion of the
   image.
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

How to talk about **injections** and **subjections** as can't talk about elements in Category Theory - these are
abstracted.

I have to explain these things only in terms of morphisms.
> No matter how good you microscope is, you cannot look inside a little point.

> If my microscope doesn't work maybe my telescope could work.

> In Category Theory we don't like latin. We use greek.

- Surjective (onto) -> **Epic**, **Epimorphism**
- Injective -> **Monic**, **Monomorphism**

## Composition
