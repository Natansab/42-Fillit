FILLIT
========
### 42 - Project #2

Fillit is a recursive backtracking algorithm that fits a set of Tetriminos in the smallest possible square without rotating the Tetriminos. More information can be found on this [PDF].

Here is an example of valid map of Tetriminos (maximum of 26 blocks) which the code fits in the solution below:

```
....
.##.
.##.
....

...#
...#
...#
...#

....
..##
.##.
....

....
..#.
.##.
.#..

.###
...#
....
....

##..
.#..
.#..
....

....
..##
.##.
....

.#..
.##.
..#.
....

....
###.
.#..
....
```

Solution (each individual tetriminos renamed starting from A):
```
AAB.CCD
AABCCDD
FFB..D.
.FBEEE.
HF.GGE.
HHGGIII
.H...I.
```
How to use:

    git clone https://github.com/Natansab/Tetris.git
    make
    ./fillit examples/ok_09_block


Official Team
--------
This project was developed jointly by Natan Sabbah [@Natansab](https://github.com/Natansab) and Emil Wallner [@emilwallner](https://github.com/emilwallner).

[PDF]: https://github.com/Natansab/Tetris/blob/master/fillit.fr.pdf
