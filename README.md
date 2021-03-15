# Dynamic_Programming

# What Is Dynamic Programming 
Dynamic Programming is basically an optimization over recursion.
Recursion leads us to recalculations of some of the subproblems again and again , thus to reduce the overhead time complexity , we may save the results of the subproblems 
into some table so that we may not need to recalculate them and we can easily fetch those results whenever required in the future.

# How to recognise a dynamic programming problem ?
Generally all the problems that require to optimize (i.e. maximize or minimize) certain quantity or counting problems(count the number of ways)
can be solved by using Dynamic Programming.
Also, all dynamic programming problems satisfy the overlapping subproblems property and most of the classic dynamic problems also satisfy the optimal substructure property. 

Once, we observe these properties in a given problem, be sure that it can be solved using DP.

# How to approach a DP problem
We can approach a dynamic Programming problem in two ways:
1. Bottom Up  (a.k.a. Tabulation Method)
      Tabulation is the method that avoids recursion. In this approach, we solve the sub-problems first. This is typically done by filling up an n-dimensional table. Based on         the results in the table, the solution to the original problem is then computed.

3. Top Down   (a.k.a Memoization Method)
      In this approach, we try to solve the bigger problem by recursively finding the solution to smaller sub-problems. Whenever we solve a sub-problem, we cache its result so       that we don’t need to solve that again in future (if required). Instead, we can just return the saved result. This technique of storing the results of already                   solved subproblems is called Memoization.


Hereby including some of the standard problems of dynamic programming.
