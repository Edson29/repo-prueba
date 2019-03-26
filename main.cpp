/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: alulab14
 *
 * Created on 26 de marzo de 2019, 03:33 PM
 */

#include <cstdlib>
#include <cstdio>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int residuo3, residuo5;
    for(int i = 1; i<=100; i++){
        printf("%d ", i);
        residuo3 = i%3;
        residuo5 = i%5;
        if(!residuo3){
            printf("%s", "Fizz");
        }
        if(!residuo5){
            printf("%s", "Buzz");
        }
        
        printf("\n");
    }

    return 0;
}

