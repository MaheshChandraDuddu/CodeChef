#include <stdio.h>

int main(void)
{
    int t, i, j;
    scanf("%d", &t);
    while(t--)
    {   
        int r, c;
        scanf("%d %d", &r, &c);
        int arr[r][c];
        for(i = 0; i < r; i++)
        {
            for(j = 0; j < c; j++)
            {
                scanf("%d", &arr[i][j]);
            }
        }
        int tes = 0;
 		for (i = 0; i < r; ++i)
		{
			for(j=0;j < c;j++){
				int no = 0;
				if((i-1)>=0)
					no++;
				if((i+1)<=(r-1))
					no++;
				if((j-1)>=0)
					no++;
				if((j+1)<=(c-1))
					no++;
				if(no<=arr[i][j])
				{
					tes=1;
					break;
				}
			}
		}
		if(tes==1)
			printf("Unstable\n");
		else printf("Stable\n");
    }
    return 0;
}




