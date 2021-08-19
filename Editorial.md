We are supposed to find the final score of `P` and `Q`. We will `store the scores`, that a player can get in `one turn`, in a `multiset`.

To do this we simply iterate over the array, and sum the elements till a<sub>i</sub> = a<sub>i+1</sub> (because these cards can be picked by a player in one turn). As soon as we find a<sub>i</sub> != a<sub>i+1</sub>, we insert the sum in multiset, and set sum back to 0.

Since `elements in a set` are present in `sorted` order, we increment the score of the player ( in alternate fashion, i.e. first P, then Q, then P and so on ) by the last element of multiset, and then erase that element.

Inserting element in set is done in O(log n) time, and iterating over the complete array is done in O(n) time. Hence the overall time complexity of the solution is O(n logn).