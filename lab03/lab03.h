/**
 * S E 185: Introduction To Software Problem Solving
 * Lab 03 - Introduction to Functions and Branches
 * Header file containing function necessary for this lab.
 */

/**
 * Function to compute Fibonacci Sequence using Dynamic Programming.
 * @param n - The position to compute.
 * @return - The Fibonacci number at given position.
 */
int fibonacci_sequence(int n)
{
    if (n <= 1) return n;
    int previous_fib = 0, current_fib = 1;
    for (int i = 0; i < n - 1; i++)
    {
        int new_fib = previous_fib + current_fib;
        previous_fib = current_fib;
        current_fib = new_fib;
    }
    return current_fib;
}
