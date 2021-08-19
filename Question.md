P and Q are playing a game of cards. There are `n` cards placed on the table, initially all are `non-inverted` (i.e. their value is visible). Each card has a number written on it, which is the score of the card. 
They play turn by turn. Any player can choose any number of `consecutive non-inverted` cards ( including 1) having `same score`, add their total to his score and `invert those cards`.

P goes first, and both players play optimally to maximize their score. 
Who will win the game? Also output the difference between winner and loser score.


Input:

1. First line of Input contains n, the number of cards (0 <= n <= 2 . 10<sup>5</sup>).
2. Second line contains n positive integers  a<sub>i</sub> (1 <= i <= n), where a<sub>i</sub> denotes the score of card at position i (1 <= a<sub>i</sub> <= 10<sup>8</sup>)


Output:

1. Output the name of winner ( ‘P’ or ‘Q’ ) out ouput ‘DRAW’ if the game is draw.
2. In the next line output the difference in scores of winner and looser ( 0 if the game is drawn )
    


