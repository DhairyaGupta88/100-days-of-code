//Write a program to print the following pattern:
//*
//***
//*****
//*******
//*********
//*******
//*****
//**
#include <stdio.h>

int main() {
    int i, j;

    // Upper half of pattern (increasing stars)
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half of pattern (decreasing stars)
    for(i = 4; i >= 1; i--) {
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}