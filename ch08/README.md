Hash Table
==========

Hash tables support one of the most efficient types of searching: hashing. Fundamentally, a hash table consists of an array in which data is accessed via a special index called a key. The primary idea behind a hash table is to establish a mapping between the set of all possible keys and positions in the array using a hash function.A hash function accepts a key and returns its hash coding, or hash value.Keys vary in type, but hash codings are always integers.



###Description of Chained Hash Tables

A chained hash table fundamentally consists of an array of linked lists. Each list forms a bucket in which we place all elements hashing to a specific position in the array


####Selecting a Hash Function


#####Division method

    h(k) = k mode m

Using this method, if the table has m = 1699 positions, and we hash the key k = 25,657, the hash coding is 25,657 mod 1699 = 172. Typically, we should avoid values for m that are powers of 2. This is because if m = 2p, h becomes just the p lowest-order bits of k--it means the bigest bits of k does not calculated!!!!! Usually we choose m to be a prime number not too close to a power of 2, while considering storage constraints and load factor


####Multiplication method

    h(k) = &boxur;m(kA mod 1)&boxul;

