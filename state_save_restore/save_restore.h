#ifndef _SAVE_RESTORE_H
#define _SAVE_RESTORE_H

#include<linux/kernel.h>

#define STATE_SAVE 0
#define STATE_RESTORE 1

asmlinkage long sys_save_restore(unsigned int op, unsigned int flags,
			    const char __user *uargs);

#endif
