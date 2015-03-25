/* 
 * File:   competitor.h
 * Author: szs1
 *
 * Created on 22 November 2012, 14:22
 */

#ifndef COMPETITOR_H
#define	COMPETITOR_H

#ifdef	__cplusplus
extern "C" {
#endif

struct competitor{ 
        char comp_name[50];
        int comp_no, 
        hours, minutes, seconds, 
        cycle_h, cycle_m, cycle_s,cycle_total,
        swim_h, swim_m, swim_s, swim_total,
        run_h, run_m, run_s, run_total,
        total_time;
    };

#ifdef	__cplusplus
}
#endif

#endif	/* COMPETITOR_H */

