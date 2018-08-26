overlap s = let n = length s in head [x | x <- [1..n], drop x s == take (n - x) s]

main = do
    [n, k] <- (map read . words) `fmap` getLine
    t <- getLine
    let o = overlap t
    putStrLn (concat (replicate k (take o t)) ++ drop o t)