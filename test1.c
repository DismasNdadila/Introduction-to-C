
#include <stdio.h>
#include <string.h>

struct exercise
{

    char exercisename[100];
    char exercisequestion[23];
    char exerciseanswer[34];

} exercise1, exercise2;

int globalchai = 15;

int main()
{

    // variable creation, kutengeneza, Declare
    int sukari, chumvi, unga, breakafast;

    // variable initialization
    sukari = 3;
    chumvi = 1;
    unga = 11;

    int jumuisha(){

        int sahani[3] = {23, 26, 39};

        breakafast = globalchai + sukari;

        sahani[0] = 78;

        return breakafast;
    };

    strcpy(exercise1.exercisename, "C Assigmaent N01");
    strcpy(exercise1.exercisequestion, "what is variable");
    strcpy(exercise1.exerciseanswer, "it a character");

    return (0);
}
