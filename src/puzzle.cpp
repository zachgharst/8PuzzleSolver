#include "puzzle.h"

Puzzle::Puzzle(std::string s, int g = 0) {
    state = s;
    this.g = g;
    h = TotalManhattanDistance();
}

int TotalManhattanDistance() {
    int sum = 0;
    for (int i = 1; i < 9; i++) {
        sum += SingleManhattanDistance(i);
    }
    return sum;
}

int SingleManhattanDistance(int p) {
    return 0;
}

int FindPiece(int p) {
    for (int i = 0; i < 9; i++) {
        if(state[i] == p) {
            return i;
        }
    }
    
    return -1;
}