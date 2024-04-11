/*
 * TITLE: PROGRAMMING II LABS
 * SUBTITLE: Practical 2
 * AUTHOR 1: López García, Víctor LOGIN 1: victor.lopezg@udc.es
 * AUTHOR 2: García Iglesias, Iago LOGIN 2: iago.garcia.iglesias@udc.es
 * GROUP: 2.4
 * DATE: ** / ** / **
 */

#ifndef USER_LIST_H
#define USER_LIST_H
#define NULLU ((tPosU)NULL)

#include <stdbool.h>

typedef char* tUserName;
typedef int tPlayTime;
typedef char* tUserCategory;
typedef void* tListS;

typedef struct {
    tUserName user_name;
    tPlayTime play_time;
    tUserCategory user_category;
    tListS song_list;
}tItemU;

typedef struct {
    tItemU* items;
    int size;
    int capacity;
} tListU;


bool insertItemU(tItemU item, tListU* list);
void deleteAtPositioU(int pos, tListU* list);
int findItemU(tUserName user_name, tListU list);

#endif



