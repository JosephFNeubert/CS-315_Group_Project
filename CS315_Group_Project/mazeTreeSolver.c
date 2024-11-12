/****************************************************************************
* File:     mazeTreeSolver.c
* Author:   Sawyer Curless, Kaden Hayrynen, Joseph Neubert
* Purpose:  Maze solver (TODO)
* Version:  1.0 - Oct. 30, 2024
* Resources: N/A
*******************************************************************************/

// Import libraries
#include <stdio.h>
#include <string.h>

// Declaration of Maze Tree structure
struct mazeTree {
	struct mazeTree* left;
	struct mazeTree* center;
	struct mazeTree* right;
	int location[2];
};

// Function prototypes
char* readInMaze();
struct mazeTree* convertMazeInTree(char* maze);
struct mazeTree* runDijkstra(struct mazeTree* tree);
void displayMazeSolution(char* maze, struct mazeTree* optimalTree);
int getMazeSolutionSteps(struct mazeTree* optimalTree);

// Main
int main() {
	// TODO - Joe
	return 0;
}

// All function implementations
char* readInMaze() 
{
	//TODO - Joe
}

struct mazeTree* convertMazeInTree(char* maze)
{
	//TODO - Sawyer
}

struct mazeTree* runDijkstra(struct mazeTree* tree) 
{
	//TODO - Sawyer
}

void displayMazeSolution(char* maze, struct mazeTree* optimalTree) 	//TODO - Kaden
{
	printf("Here is the solved Maze: \n");
	struct mazeTree* currentNode =optimalTree;
	while (current != NULL) {
        //track location of maze
        if(currentNode -> left){    //if moved left
            currentNode= currentNode->left;
        }
        else if (currentNode -> center){  //if straight instead
            currentNode -> currentNode ->center;
        }
        else if (currentNode -> right){    //if right
            currentNode = currentNode -> right;
        }
    }

}

int getMazeSolutionSteps(struct mazeTree* optimalTree)  	//TODO - Kaden
{
    int step=0;
    struct mazeTree* currentNode = optimalTree;
    
    while (currentNode != NULL){ //while nothing is in currentNode
        step++;  //add each step to counter
        
        if(currentNode -> left){    //if moved left
            currentNode= currentNode->left;
        }
        else if (currentNode -> center){  //if moved straight
            currentNode = currentNode -> center;
        }
        else if (currentNode -> right){   //if moved right
            currentNode = currentNode -> right;
        }
    }
    return step;
	printf("%d\n", step);
}
