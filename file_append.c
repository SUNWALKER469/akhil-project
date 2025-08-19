//WAP to appppend some text to a  file by reading filename from user.
#include <stdio.h>

int main() {
    char filename[100], text[500];
    FILE *fp;

    // Read filename from user
    printf("Akhil Hamal\n");
    printf("Enter filename: ");
    scanf("%s", filename);

    // Open file in append mode
    fp = fopen(filename, "a");
    if (!fp) {
        printf("Unable to open file!\n");
        return 1;
    }

    // Read text to append
    getchar(); // consume leftover newline
    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    // Write text to file
    fprintf(fp, "%s", text);
    fclose(fp);

    printf("Text appended successfully.\n");
    return 0;
}
