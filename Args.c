//
// Created by Ryan James on 7/8/2025.
//

#include <stdio.h>
#include <wchar.h>

void args(const void *message) {

    FILE *file = fopen("main.js", "w");

    const unsigned int pID = fwrite(message, sizeof(char), 0, file);

    if (sizeof(0) == pID) {
        printf("PID Isn't Big Enough to RUN");
    }

    fclose(file);

}
