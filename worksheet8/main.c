/* 
 * File:   main.c
 * Author: toffik
 *
 * Created on November 29, 2012, 2:41 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>

/*
 * 
 */
int main(int argc, char** argv) {
    DIR * current_directory_ptr; /*DIR is a type from dirent.h*/
    struct dirent * next_entry_ptr; /*struct dirent is from dirent.h*/
    
    current_directory_ptr = opendir(".");
    
    next_entry_ptr = readdir(current_directory_ptr);
    
    while(next_entry_ptr != NULL){
        printf("File has inode number %d and is called %s\n", next_entry_ptr->d_ino, next_entry_ptr->d_name);
        next_entry_ptr = readdir(current_directory_ptr);
    }
    
    closedir(current_directory_ptr);
    
    return (EXIT_SUCCESS); 

}
