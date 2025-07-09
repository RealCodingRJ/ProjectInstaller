//
// Created by Ryan James on 7/8/2025.
//

#include "stdio.h"
#include "string.h"

FILE *generateFile(const char *message, const char *fileName) {

    FILE *file = fopen(fileName, "w");

    const unsigned int pID = fwrite(message, sizeof(char), strlen(message), file);

    if (strlen(message) == pID) {

        printf("Written to File");
    }



    fclose(file);
    return file;
}