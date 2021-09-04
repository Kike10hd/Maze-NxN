# Maze-NxN
This a diagnostic test for the class of concurrent programming

## Description
In a maze NxN you have a character the is Jack you need to take them out of the maze.

You need to choice the shortest path. This an example of the maze.

| X | X | X | X | X | X |
|---|---|---|---|---|---|
| 0 | X | 0 | 0 | 0 | X |
| X | * | 0 | X | 0 | X |
| x | X | X | X | 0 | X |
| 0 | 0 | 0 | 0 | 0 | X |
| 0 | X | X | X | 0 | X |

The asteric <kbd> * </kbd> is jack and jack can walk to the next cell if the next cell is <kbd>0</kbd>.

1. You need to recived the maze of a file.
2. The first line of file is going to be <kbd>N</kbd>.
3. 2 < <kbd>N</kbd> < 100.
4. The maze is always to be square.

The file txt has to be seen like:
```txt
6
XXXXXX
0X000X
X*0X0X
XXXX0X
00000X
0XXX0X
```
And the output has to been seen like:
```bash
6
XXXXXX
0X000X
X*0X0X
XXXX0X
00000X
0XXX0X
Jack position: 2, 1
Number of steps: 9
```
