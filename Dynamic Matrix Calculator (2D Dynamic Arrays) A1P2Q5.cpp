/*Dynamic Matrix Calculator (2D Dynamic Arrays)
Background: You are building a matrix calculator for a math application. The matrices can vary in
size, and you need to perform operations dynamically.
Task:
1. Ask the user to input the dimensions of two matrices.
2. Dynamically allocate memory for both matrices.
3. Populate the matrices with user-provided values.

4. Implement the following operations:
• Matrix addition.
• Matrix multiplication.
• Transpose of a matrix.
5. Display the results of each operation.
6. Deallocate the memory after use.
Real-world connection: This scenario simulates real-world matrix calculations used in engineering,
physics, and computer graphics applications*/
 // displaying matrux 1 

#include<iostream>
#include<conio.h>
#include<iomanip>
#include<string>
using namespace std;
void display(int**matrix, int row, int col)
{
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++)
			cout<<setw(4)<<matrix[i][j]<<" ";
		cout<<"\n";
	}	
}
int main()
{
	
//1. Ask the user to input the dimensions of two matrices.
    int rows1, cols1, rows2, cols2;

    // Get dimensions of the first matrix
    cout<<"\nEnter positive number of rows and column only";
    cout << "\nEnter the number of rows for the first matrix: ";
    cin >> rows1;
    cout << "\nEnter the number of columns for the first matrix: ";
    cin >> cols1;

    // Get dimensions of the second matrix
    cout << "\nEnter the number of rows for the second matrix: ";
    cin >> rows2;
    cout << "\nEnter the number of columns for the second matrix: ";
    cin >> cols2;
    
//2. Dynamically allocate memory for both matrices.  
// matrix 1 
 int** matrix1 = new int*[rows1];
    for (int i = 0; i < rows1; i++) {
        matrix1[i] = new int[cols1];
    }

    // second matrix 
    int** matrix2 = new int*[rows2];
    for (int i = 0; i < rows2; i++) {
        matrix2[i] = new int[cols2];
    }  
 
//3. Populate the matrices with user-provided values.
 cout<<"\nEnter data for matrix 1"<<endl;
 for(int i = 0; i < rows1; i++){
 	for(int j = 0; j < cols1; j++)
 	{
 		
	cout<<"Value at row "<<i<<" column "<<j<<" is : ";
 	cin>>matrix1[i][j];
 }
 }
 cout<<"\nEnter data for matrix 2"<<endl;
 for(int i = 0; i < rows2; i++){
 	for(int j = 0; j < cols2; j++)
 	{		
	cout<<"Value at row "<<i<<" column "<<j<<" is : ";
 	cin>>matrix2[i][j];
 }
 }
// displaying matrux 1 
 cout<<"\nMatrix 1"<<endl;
display(matrix1, rows1, cols1);

// displaying matrux  2
   cout<<"\nMatrix 2"<<endl;
display(matrix2, rows2, cols2);
 
//4. Implement the following operations:
//• Matrix addition. 
//cout<<"\nAddition of matrices is only possible when both have same number of rows and columns"
cout<<"\nAddition of Matrices "<<endl;
if(rows1 == rows2 && cols1 == cols2)
{
	for(int i = 0; i < rows2; i++){
 	for(int j = 0; j < cols2; j++)
 	cout<<setw(5)<<matrix1[i][j]+matrix2[i][j];	
	
	cout<<"\n";
}	
}

else cout<<"\n Number of rows and columns of matrix1 and matrix2 are not same "<<endl;

//• Matrix multiplication.
// multiplication of matrices is possible if number of rows of first matrix are equal to number 0f columns of second matrix m1 = n2
 if(rows2 == cols1)
{
	cout<<"\nMultiplication is possible"<<endl;
	int** matrix3 = new int*[rows1];
	for(int i = 0; i < rows1; i++)
	{
		matrix3[i] = new int[cols2];
	}
	// 5. Perform matrix multiplication
    for(int i = 0; i < rows1; i++) {       // Rows of result (from Matrix 1)
        for(int j = 0; j < cols2; j++) {   // Columns of result (from Matrix 2)
            matrix3[i][j] = 0;             // Initialize element
            for(int k = 0; k < cols1; k++) { // Dot product over cols1 (or rows2)
                matrix3[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    // display matrix 
cout<<"\nMatrix Multiplied"<<endl;
display(matrix3, rows1, cols2);

// de allocating matrix3 	
	for(int i = 0; i < rows1; i++)
{
	delete[] matrix3[i];
}
delete[] matrix3;	
}
else
	cout<<"Multiplication is not possible ";
	
    cout << "\nTranspose of Matrix 1  "<< endl;
    int** transpose1 = new int*[cols1];
    for(int i = 0; i < cols1; i++) 
        transpose1[i] = new int[rows1];
    
    // finding  transpose1
    for(int i = 0; i < rows1; i++) {
        for(int j = 0; j < cols1; j++) 
            transpose1[j][i] = matrix1[i][j];       
    }
    // Display transpose1
display(transpose1, cols1, rows1);

    // Transpose of Matrix 2
    cout << "\nTranspose of Matrix 2  "<< endl;
    int** transpose2 = new int*[cols2];
    for(int i = 0; i < cols2; i++) {
        transpose2[i] = new int[rows2];
    }
    // find  transpose
    for(int i = 0; i < rows2; i++) {
        for(int j = 0; j < cols2; j++) 
            transpose2[j][i] = matrix2[i][j];
    }
    // Display transpose2
	display(transpose2, cols2, rows2);

//6. Deallocate the memory after use.
for(int i = 0; i < rows1; i++)
{
	delete[] matrix1[i];
	delete[] matrix2[i];
    delete[] transpose1[i];
	delete[] transpose2[i];
}

delete[] matrix1;
delete[] matrix2;
delete[] transpose1;
delete[] transpose2;
return 0;}




