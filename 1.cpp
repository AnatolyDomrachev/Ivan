#include <iostream> 

using  namespace  std;

void printm(double matrixA[][4], int N)
{
	for(int i=0; i<N; i++)
	{
		cout << endl;

		for(int j=0; j<N; j++)
		{
			cout << matrixA[i][j]<< " ";
		}
	}
}

int main()
{
	const int N = 4;
	double matrixA[N][N];
	double matrixB[N][N];
	int num = 0;
	double sum = 0 , sred;

	for(int i=0; i<N; i++)
	{
		for(int j=0; j<N; j++)
		{
			matrixA[i][j] = i+j;
		}
	}

	printm(matrixA,N);

	for(int i=0; i<N; i++)
	{
		for(int j=0; j<N; j++)
		{
			if(matrixA[i][j] > 0)
			{
				num+=1;
				sum+=matrixA[i][j];
			}
		}
	}
	sred = sum/num;
	cout << sred ;

	for(int i=0; i<N; i++)
	{
		for(int j=0; j<N; j++)
		{
			matrixB[i][j] = matrixA[i][j] - sred;
		}
	}
	
	cout << endl;
	cout << endl;

	printm(matrixB,N);

	return 0;
}

