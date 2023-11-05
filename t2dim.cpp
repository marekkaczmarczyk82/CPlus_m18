#include <iostream>
using namespace std;

	double** allocMatrix2D( int, int );
	void deleteMatrix2D( double**& );


		int main()
		{
			int i, j, dim1 = 2, dim2 = 3;

			double** macierz2d = allocMatrix2D( dim1, dim2 );

				for( i = 0; i < dim1; i++ )
					for( j = 0; j < dim2; j++ )
						macierz2d[i][j] = 3 * i + j + 1.5;

				for( i = 0; i < dim1; ++i )
				{
					for( j = 0; j < dim2; j++ )
						cout << macierz2d[i][j] << " ";
					cout << endl;
				}

			deleteMatrix2D( macierz2d );

			return 0;

		}


		double** allocMatrix2D( int dim1, int dim2 )
		{
			double** macierz2d = new double*[dim1];
			double* dumm = new double[dim1*dim2];

				for( int i = 0; i < dim1; i++ )
					macierz2d[i] = dumm + i * dim2;
				return macierz2d;


		}

		void deleteMatrix2D( double**& macierz2d )
		{
			delete [] macierz2d[0];
			delete [] macierz2d;
			macierz2d = 0;

		}
