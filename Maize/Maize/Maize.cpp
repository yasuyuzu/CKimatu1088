#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "View.h"
#include "ReadIni.h"

#define BUFFSIZE 1024
#define CHARBUFF 124

int main()
{
    const char* rout[3] = { 0 };
    char buf[CHARBUFF] = { 0 };
    const char* right = "D";
    const char* left = "A";
    const char* front = "S";
    const char* secret = "Q";
    const char* end = "E";

    while(1){

        view(1);
        scanf_s("%s", &buf);
        if (strncmp(buf, left, 1) == 0) {
            view(2);
            rout[0] = "left";
            if (strncmp(buf, right, 1) == 0) {
                view(6);
                rout[1] = "right";
                if (strncmp(buf, left, 1) == 0) {
                    view(4);
                    rout[2] = "left";
                }
                else if (strncmp(buf, right, 1) == 0) {
                    view(7);
                    rout[2] = "right";
                }
            }
            else if (strncmp(buf, front, 1) == 0) {
                view(5);
                rout[1] = "front";
            }
            else if (strncmp(buf, left, 1) == 0) {
                view(3);
                rout[1] = "left";
                if (strncmp(buf, front, 1) == 0) {
                    view(8);
                    rout[2] = "front";
                }
            }
        }
        else if (strncmp(buf, right, 1) == 0) {
            view(4);
            rout[0] = "right";
        }

        return (0);
    }

    FILE* fp;
    char s[BUFFSIZE];
    errno_t error;
    int i = 0;
    error = fopen_s(&fp, "rout.txt", "w");
    if (error != 0)
        fprintf_s(stderr, "failed to open");
    else {
        for (i = 0; i < 4; i++) {
            fprintf_s(fp, "rout%d = %s", i + 1, rout[i]);
        }
        fclose(fp);
    }
}