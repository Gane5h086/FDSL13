# Matrix addition
def matrix_addition(A, B):
  # Check if the matrices are of the same size
  if len(A) == len(B) and len(A[0]) == len(B[0]):
    # Create a result matrix of the same size
    C = [[0 for j in range(len(A[0]))] for i in range(len(A))]
    # Add the matrices element by element
    for i in range(len(A)):
      for j in range(len(A[0])):
        C[i][j] = A[i][j] + B[i][j]
    return C
  else:
    print("Error: Matrices are not of the same size.")

# Matrix multiplication
def matrix_multiplication(A, B):
  # Check if the matrices are compatible for multiplication
  if len(A[0]) == len(B):
    # Create a result matrix of the appropriate size
    C = [[0 for j in range(len(B[0]))] for i in range(len(A))]
    # Perform the matrix multiplication
    for i in range(len(A)):
      for j in range(len(B[0])):
        for k in range(len(B)):
          C[i][j] += A[i][k] * B[k][j]
    return C
  else:
    print("Error: Matrices are not compatible for multiplication.")

# Matrix transpose
def matrix_transpose(A):
  # Create a result matrix with the number of rows and columns switched
  C = [[0 for j in range(len(A))] for i in range(len(A[0]))]
  # Transpose the matrix
  for i in range(len(A)):
    for j in range(len(A[0])):
      C[j][i] = A[i][j]
  return C

# Test the functions
A = [1,2], [3,4]
B = [4,7],  [3,3]
C = [1,1], [3,9]

print(matrix_addition(A, C))
print(matrix_multiplication(A, B))
print(matrix_transpose(A))