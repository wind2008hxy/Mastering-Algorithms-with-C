Analysis of Algorithms
======================


Worst-Cast Analysis
-------------------

Most algorithms do not perform the same in all cases; normally an algorithms's performance varies with the data passed to it.

### Reasons for Worst-Case Analysis

A basic understanding of how an algorithms performs in all cases is important, but usually we are most intersted in how an algorithms performs in the worst case.

O-Notation
----------

O-notation expresses the upper bound of a function within a constant factor.

### Simple Rules for O-Notation

First, we can ignore constant terms because as the value of `n` becomes larger and larger, eventually constant terms will become insignificant.

Second, we can ignore constant multipliers of terms because they too will become insignificant as the value of `n` increases.

Finally, we need only consider the highest-order term because, again, as `n` increase, higher-order terms quickly out weigh the lower-order ones.


