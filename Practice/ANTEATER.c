#include <stdio.h>
#include <stdlib.h>
char s[50][50];
int r, c;
int disappearcheck(int i, int j, int row, int col);

int main()
{
        int t;
        scanf("%d", &t);
        while(t--)
        {
                int i, j, k;
                scanf("%d %d", &r, &c);

                //char s[r + 1][c + 1];

                for(i = 0; i < r; i++)
                {
                        scanf("%s", s[i]);
                }

                int mv_r, mv_l, mv_u, mv_d, pair = 0;
                 for(i = 0; i < r; i++)
                {
                        for(j = 0; j < c; j++)
                        {
                                mv_r = 1;
                                mv_l = 1;
                                mv_u = 1;
                                mv_d = 1;
                                k = 1;

                                if(s[i][j] == '#')
                                {
                                        continue;
                                }
                                while(mv_r || mv_l || mv_u || mv_d)
                                {
                                        if(!disappearcheck(i-k, j, r, c))
                                                mv_u = 0;
                                        if(!disappearcheck(i+k, j, r, c))
                                                mv_d = 0;
                                        if(!disappearcheck(i, j-k, r, c))
                                                mv_l = 0;
                                        if(!disappearcheck(i, j+k, r, c))
                                                mv_r = 0;
                                        if(mv_d&&mv_u&&s[i-k][j] == 'D'&&s[i+k][j] == 'U')
                                                pair++;
                                        if(mv_r && mv_u && s[i-k][j] == 'D' && s[i][j+k] == 'L')
                                                pair++;
                                        if(mv_l && mv_u && s[i-k][j] == 'D' && s[i][j-k] == 'R')
                                                pair++;
                                        if(mv_l && mv_r && s[i][j+k] == 'L' && s[i][j-k] == 'R')
                                                pair++;
                                        if(mv_l && mv_d && s[i+k][j] == 'U' && s[i][j-k] == 'R')
                                                pair++;
                                        if(mv_r && mv_d && s[i+k][j] == 'U' && s[i][j+k] == 'L')
                                                pair++;

                                        k++;
                                }
                        }
                }
                printf("%d\n", pair);
        }
        exit(0);
}
int disappearcheck(int i, int j, int row, int col)
{
        if(i >= 0 && i < row && j >= 0 && j < col && s[i][j] != '#')
        {
                return 1;
        }
        else
        {
                return 0;
        }
}


                                                              
                                                            