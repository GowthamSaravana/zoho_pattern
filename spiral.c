#include<stdio.h>
int main()
{
    int n;
    int i,j,k;
    scanf("%d",&n);
    int spiral[100][100];
    int value=n;
    //value=value+1;


		//if(n%2!=0)
        //{
            int minCol = 0;

		int maxCol = (n*2)-2;

		int minRow = 0;

		int maxRow = (n*2)-2;
            while (value >= 1)
		{
			for (int i = minCol; i <= maxCol; i++)
			{
				spiral[minRow][i] = value;


			}

			for (int i = minRow+1; i <= maxRow; i++)
			{
				spiral[i][maxCol] = value;

				//value--;
			}

			for (int i = maxCol-1; i >= minCol; i--)
			{
				spiral[maxRow][i] = value;

				//value--;
			}

			for (int i = maxRow-1; i > minRow; i--)
			{
				spiral[i][minCol] = value;

				//value--;
			}

			minCol++;

			minRow++;

			maxCol--;

			maxRow--;

			value--;
		}




		for(int i=0;i<n*2-1;i++,printf("\n"))
        {

            for(int j=0;j<n*2-1;j++)
                //if(spiral[i][j]!=0)
                printf("%d ",spiral[i][j]);
        }
}
