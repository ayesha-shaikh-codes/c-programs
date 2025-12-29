/* WACP for Writing and Reading a File in a FILE HANDLING */
#include <stdio.h>

int main() {
    //Create file
    FILE *fp;
    char str[100];
    fp = fopen("data,txt","w"); //open for writing

    // fallback condition
    if(fp == NULL)
    {
        printf("Error opening file");
        return 1;
    }
    //writing to the file
    fprintf(fp,"Name: Ayesha\n");
    fprintf(fp, "Roll no: %d\n",10);
    fprintf(fp," Ayesha is in Btech 1st year");
    fclose(fp); //closing a file
    
    // Reading from file
    fp = fopen("data.txt","r"); 
    while(fgets(str,100,fp)!=NULL)
    {
    printf("%s\n",str);
    }
    fclose(fp); //closing file

    return 0;
}
