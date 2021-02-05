///* Lane Grooms *///
#include <stdio.h>
#include <stdbool.h>
#define ROWS 3
#define COLS 3
#define SUB_ROWS 2
#define SUB_COLS 2

bool hasSubmatrix(int mat[ROWS][COLS], int rows, int cols, int submat[SUB_ROWS][SUB_COLS], int subRows, int subCols);

///*
int main(void)
{   // Test Code
    int testm[ROWS][COLS] = { { 1,  2,  3},
                              { 6,  7,  8},
                              {11, 12, 13}
                            };
    int subm1[SUB_ROWS][SUB_COLS] = { { 7,  8},
                                      {12, 13}
                                    };
    int subm2[SUB_ROWS][SUB_COLS] = { {12, 13},
                                      {15, 16}
                                    };
    printf("%d\n", hasSubmatrix(testm, 3, 3, subm1, 2, 2));
    printf("%d\n", hasSubmatrix(testm, 3, 3, subm2, 2, 2));
    return 0;
} // end main
//*/

bool hasSubmatrix(int mat[ROWS][COLS], int rows, int cols, int submat[SUB_ROWS][SUB_COLS], int subRows, int subCols)
{
    for(size_t i = 0; i < rows - subRows + 1; i++)
    {   // printf("i = %lu\n", i);
        for(size_t j = 0; j < cols - subCols + 1; j++)
        {   // printf("j = %lu\n", j);
            for(size_t k = 0; k < subRows; k++)
            {   // printf("k = %lu\n", k);
                for(size_t l = 0; l < subCols; l++)
                {   // printf("l = %lu\n", l);
                    if(mat[i+k][j+l] != submat[k][l])
                    {   // printf("%d is NOT equal to %d\nContinuing\n", mat[i+k][j+l], submat[k][l]);
                        break;
                    }   // else { puts("a match was found"); }
                    if(k == subRows - 1 && l == subCols - 1)
                    {   // printf("k = %lu and l = %lu", k, l);
                        return true;
                    }   // end if
                }   // end for l
            }   // end for k
        }   // end for j
    }   // end for i
    return false;
}   // end function