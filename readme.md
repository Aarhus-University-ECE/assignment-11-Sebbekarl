
# Week 11 handin

base case: fact(1) = 1

assume: fact(n-1) is correct

then fact(n) = n * fact(n-1) => n * (n-1)! = n!

and because we decrement with 1 we'll hit the base case

therefore, the recursive function does what we designed it to do 
