/*
 * $Id: dbd.h,v 1.1.4.1 2003-09-09 16:42:20 didg Exp $
 *
 * Copyright (C) Joerg Lenneis 2003
 * All Rights Reserved.  See COPYRIGHT.
 */

#ifndef CNID_DBD_DBD_H
#define CNID_DBD_DBD_H 1


#include <atalk/cnid_dbd_private.h>

extern int      dbd_stamp __P((void));
extern int      dbd_add  __P((struct cnid_dbd_rqst *, struct cnid_dbd_rply *));
extern int      dbd_get  __P((struct cnid_dbd_rqst *, struct cnid_dbd_rply *));
extern int      dbd_resolve  __P((struct cnid_dbd_rqst *, struct cnid_dbd_rply *));
extern int      dbd_lookup  __P((struct cnid_dbd_rqst *, struct cnid_dbd_rply *));
extern int      dbd_update  __P((struct cnid_dbd_rqst *, struct cnid_dbd_rply *));
extern int      dbd_delete  __P((struct cnid_dbd_rqst *, struct cnid_dbd_rply *));

#endif /* CNID_DBD_DBD_H */