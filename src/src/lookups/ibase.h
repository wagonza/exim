/* $Cambridge: exim/src/src/lookups/ibase.h,v 1.1 2004/10/07 13:10:01 ph10 Exp $ */

/*************************************************
*     Exim - an Internet mail transport agent    *
*************************************************/

/* Copyright (c) University of Cambridge 1995 - 2004 */
/* See the file NOTICE for conditions of use and distribution. */

/* Header for the Interbase lookup functions */

extern void   *ibase_open(uschar *, uschar **);
extern int     ibase_find(void *, uschar *, uschar *, int, uschar **, uschar **,
                 BOOL *);
extern void    ibase_tidy(void);
extern uschar *ibase_quote(uschar *, uschar *);

/* End of lookups/ibase.h */