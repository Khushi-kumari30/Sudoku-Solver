🧩 Sudoku-Solver
A clean and efficient C++ Sudoku Solver that uses backtracking with recursion to solve any valid 9×9 Sudoku puzzle.

## Highlights
- Solves Sudoku by enforcing row, column, and 3×3 grid constraints  
- Optimized recursive backtracking approach  
- Simple, readable, and well-structured C++ code

## Time & Space Complexity
- Time Complexity (Worst Case): O(9^m), where m is the number of empty cells
- Space Complexity: O(m) due to recursion stack (in-place board modification)

## Example
Input Sudoku:<br>
5 3 0 | 0 7 0 | 0 0 0<br>
6 0 0 | 1 9 5 | 0 0 0<br>
0 9 8 | 0 0 0 | 0 6 0<br>
------+-------+------<br>
8 0 0 | 0 6 0 | 0 0 3<br>
4 0 0 | 8 0 3 | 0 0 1<br>
7 0 0 | 0 2 0 | 0 0 6<br>
------+-------+------<br>
0 6 0 | 0 0 0 | 2 8 0<br>
0 0 0 | 4 1 9 | 0 0 5<br>
0 0 0 | 0 8 0 | 0 7 9<br>

Solved Output:<br>
5 3 4 | 6 7 8 | 9 1 2<br>
6 7 2 | 1 9 5 | 3 4 8<br>
1 9 8 | 3 4 2 | 5 6 7<br>
------+-------+------<br>
8 5 9 | 7 6 1 | 4 2 3<br>
4 2 6 | 8 5 3 | 7 9 1<br>
7 1 3 | 9 2 4 | 8 5 6<br>
------+-------+------<br>
9 6 1 | 5 3 7 | 2 8 4<br>
2 8 7 | 4 1 9 | 6 3 5<br>
3 4 5 | 2 8 6 | 1 7 9<br>

⭐ Star this repository if you find it useful!
