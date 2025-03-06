/*

     C header file to employ J.D. Smith's polygon clipping code.

     This header file was written by Russell Ryan.

     This file moves the function definitions from the `polyclip.c` file
     into this header file to facilitate linking to python.  The
     function definitions are not changed.

     Version 1: May 7, 2019
     Version 2: Feb 1, 2023 (added more comments.  RR)
*/

#ifndef POLYCLIP_H
#define POLYCLIP_H

int  polyclip(float *,float *, int, int, int, float *, float *);
void  polyclip_shclip(float, float, int, int, int);
void polyclip_shclose(int, int, int);
int  polyclip_inside(float, float, int, int, int);
void polyclip_intersect(float, float, int, int, int);
float polyclip_area(float *,float *, int );
char polyclip_test(void);
void polyclip_multi(int*,int*,int*,int*,float*,float*,int,int*,int*,int*,int*,float*);
void polyclip_single(int,int,int,int,float*,float*,int,int*,int*,float*,float*,float*,int*);

#endif
