import Prelude hiding (id)
data A = A deriving Show
data B = B deriving Show
data C = C deriving Show

f :: A -> B
f A = B

g :: B -> C
g B = C

h :: A -> C
h = g . f

id :: a -> a
id x = x

main :: IO ()
main = do
  putStrLn $ "f A: " ++ show (f A)
  putStrLn $ "g B: " ++ show (g B)
  putStrLn $ "h A = g ∘ f: " ++ show (h A)
  putStrLn $ "id A: " ++ show (id A)
  putStrLn $ "f (id A): " ++ show (f (id A))
  putStrLn $ "id (h A): " ++ show (id (h A))
