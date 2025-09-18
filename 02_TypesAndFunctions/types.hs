import Data.Void (Void, absurd)

factorial :: Integer -> Integer
factorial n = product [1..n]

-- a is a type variable, polymorphic
-- Void is the empty type (absurd type), it has no constructors, cannot create a value of type Void.
absurd :: Void -> a
-- “If I had a unicorn, I could return anything I want.”
absurd v = case v of {}

-- A singleton set. It's type has only one possible value.
-- () is unit type, similar to void in C++/Java but it is a real type with exactly one value.
f44 :: () -> Integer
f44 () = 44

-- You give it any integer, and it gives you back a unit.
fInt :: Integer -> ()
fInt _ = ()

-- template<class T>
-- void unit(T) {
--     std::cout << "Type: " << typeid(T).name() << std::endl;
-- }
unit :: a -> ()
unit _ = ()

-- two-element set, in C++ it is bool.
-- enum bool { true, false };
-- named as MyBool to avoid conflict with Prelude.True and Prelude.not
-- other way is to 'import Prelude hiding (Bool, True, False, not)'
data MyBool = MyTrue | MyFalse
    deriving Show
notMy :: MyBool -> MyBool
notMy MyTrue = MyFalse
notMy MyFalse = MyTrue

main :: IO ()
main = do
    putStrLn "Demo of functions:"
    putStrLn $ "fact 5 = " ++ show (factorial 5)
    putStrLn $ "f44 () = " ++ show (f44 ())
    putStrLn $ "fInt 99 = " ++ show (fInt 99)
    putStrLn $ "unit \"hello\" = " ++ show (unit "hello")
    putStrLn $ "unit 50 = " ++ show (unit 50)
    putStrLn $ "notMy MyTrue = " ++ show (notMy MyTrue)

