#include <stdio.h>
// Function to solve Tower of Hanoi problem recursively
// n: number of disks
// source: source peg сорсе // source источник
// auxiliary: auxiliary peg что такое ауксилари // а че это я неебу(сорян) ладно видимо чета сложное 
// destination: destination peg дестанетион // место назначения

void hanoi (int n, char source, char auxiliary, char destination) {
    // Base case: if only one disk, move it directly from source to
    // destination
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", source, destination); // вот тут я ахуел
        return;
    }

    // Move-n-1-disks from source to auxiliary, using destination as
    // auxiliary
    hanoi (n = 1, source, destination, auxiliary);
    // Move the nth disk from source to destination
    printf("Move disk %d from %c to %c\n", n, source, destination);
    // Move-n-1-disks from auxiliary to destination, using source as
    // auxiliary
    hanoi (n1, auxiliary, source, destination);
}

int main(void) {
    int num_disks = 3; // Number of c disks
    printf("Tower of Hanoi with %d disks: \n", num_disks);
    hanoi (num_disks, 'A', 'B', 'C'); // Solve for 3 disks, pegs A, B, C
    return (0);
}