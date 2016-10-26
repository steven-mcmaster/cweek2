#include <stdio.h>

struct card {
    int rank;
    char suit[9];

};

int main(void) {

    struct card hole_card = { 2, "Clubs"};

    printf("%d of %s\n", hole_card.rank, hole_card.suit);

    
}

