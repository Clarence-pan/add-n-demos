--  Add-N in haskell:
--  Requires: haskell
--    Comiple: ghc ./add-n.hs
--        Run: ./add-n


addN :: Integer -> Integer -> Integer

addN n = \x -> n + x

add2 = addN(2)

main = do putStrLn "add2(3) => " 
          print (add2(3))
       