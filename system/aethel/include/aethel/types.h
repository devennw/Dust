#ifndef TYPES_H
#define TYPES_H

// data types for Dust-OS
typedef unsigned long long    unlong_t;
typedef unsigned long         ulong_t;
typedef unsigned int          unint_t;
typedef unsigned short        unshort_t;
typedef unsigned char         unchar_t;

typedef signed long long      slong_t;
typedef signed long           long_t;
typedef signed int            sint_t;
typedef signed short          sshort_t;
typedef signed char           schar_t;

//
// standart type deffinition 
//
typedef unlong_t        daddr_t;    // disk address
typedef schar_t *       caddr_t;    // core address
typedef unint_t         ino_t;      // i-node number
typedef unint_t         time_t;     // a time
typedef sint_t          label_t[8]; // program status
typedef unlong_t        dev_t;      // device code
typedef unlong_t        off_t;      // offset in file
typedef long            key_t;      // IPC key
typedef unshort_t       mode_t;     // permissions
typedef int             acc_mode_t; // access permissions

typedef slong_t         id_t;        // can hold a gid_t, pid_t, or uid_t
typedef ulong_t         gid_t;
typedef long_t          pid_t;       // process [group]
typedef ulong_t         uid_t;

#endif
