#include <stdio.h>

void displayMatrix(int matrix[100][100], int total, int cols) {
    printf("\nMatrix:\n");
    for (int i=0;i<(total+cols - 1) / cols; i++) {
        for (int j=0;j<cols;j++) {
            if (i*cols+j<total)
                printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void insertElement(int matrix[100][100], int *total, int cols, int r, int c, int val) {
    int pos = r * cols + c;
    for (int i = *total; i > pos; i--) {
        int rr = i / cols, cc = i % cols;
        int pr = (i - 1) / cols, pc = (i - 1) % cols;
        matrix[rr][cc] = matrix[pr][pc];
    }
    matrix[r][c] = val;
    (*total)++;
}

void deleteElement(int matrix[100][100], int *total, int cols, int r, int c) {
    int pos = r * cols + c;
    for (int i = pos; i < *total - 1; i++) {
        int rr = i / cols, cc = i % cols;
        int nr = (i + 1) / cols, nc = (i + 1) % cols;
        matrix[rr][cc] = matrix[nr][nc];
    }
    (*total)--;
}
int main()
{
     int rows, cols;
     printf("Enter number of rows and columns: ");
     scanf("%d %d", &rows, &cols);

     int matrix[100][100];
     int total = rows * cols;

     printf("Enter elements of the matrix:\n");
     for (int i = 0; i < rows; i++){
          for (int j = 0; j < cols; j++){
               scanf("%d", &matrix[i][j]);
          }
     }

     printf("\nOriginal Matrix:\n");
     for (int i = 0; i < rows; i++){
          for (int j = 0; j < cols; j++){
               printf("%d ", matrix[i][j]);
          }
          printf("\n");
     }
     int choice;
     int r = 0, c = 0, val = 0;
     do{
          printf("\n--- MENU ---\n");
          printf("1. Display Matrix\n");
          printf("2. Insert Element\n");
          printf("3. Delete Element\n");
          printf("4. Exit\n");
          printf("Enter your choice: ");
          scanf("%d", &choice);

          switch (choice){
          case 1:
               displayMatrix(matrix, total, cols);
               break;

          case 2:
          {
               printf("Enter row and column to insert (0-based index): ");
               scanf("%d %d", &r, &c);
               printf("Enter value to insert: ");
               scanf("%d", &val);
               if (c >= 0 && c < cols) {
                    int pos = r * cols + c;
                    if (pos >= 0 && pos <= total) {
                         insertElement(matrix, &total, cols, r, c, val);
                         printf("Element Inserted!\n");
                    } else {
                         printf("Invalid position!\n");
                    }
               } else {
                    printf("Invalid position!\n");
               }
               break;
          }

          case 3:
          {
               printf("Enter row and column to delete (0-based index): ");
               scanf("%d %d", &r, &c);
               int pos = r * cols + c;
               if (pos >= 0 && pos < total) {
                    deleteElement(matrix, &total, cols, r, c);
                    printf("Element Deleted!\n");
               } else {
                    printf("Invalid position!\n");
               }
               break;
          }
          
          case 4:
               printf("Exiting program...\n");
               break;

          default:
               printf("Invalid choice! Try again.\n");
          }
     } while (choice != 4);

     return 0;
}
