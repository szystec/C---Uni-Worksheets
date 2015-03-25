/* 
 * File:   header.h
 * Author: szs1
 *
 * Created on 19 October 2012, 10:21
 */

#ifndef HEADER_H
#define	HEADER_H
double convert(int feet, int inch){
    float c;
    feet =(float) feet*304;
    inch =(float) inch*25;
    c=(feet+inch)/1000.0;
    return c;
}
#ifdef	__cplusplus
extern "C" {
#endif




#ifdef	__cplusplus
}
#endif

#endif	/* HEADER_H */

