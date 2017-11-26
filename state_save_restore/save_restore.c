#include<linux/kernel.h>
#include<linux/init.h>
#include<linux/sched.h>
#include<linux/syscalls.h>

#include "save_restore.h"

static long state_save(unsigned int flags, const char __user *uargs)
{
	return -EINVAL;
}

static long state_restore(unsigned int flags, const char __user *uargs)
{
	return -EINVAL;
}

/* Entry point for syscall. #TODO: can use prctl */
static long do_save_restore(unsigned int op, unsigned int flags,
		       const char __user *uargs)
{
	switch (op) {
	case STATE_SAVE:
		if (flags != 0 || uargs != NULL)
			return -EINVAL;
		return state_save(flags, uargs);
	case STATE_RESTORE:
		if (flags != 0 || uargs != NULL)
			return -EINVAL;
		return state_restore(flags, uargs);
	default:
		return -EINVAL;
	}
}

SYSCALL_DEFINE3(save_restore, unsigned int, op, unsigned int, flags,
			 const char __user *, uargs)
{
	return do_save_restore(op, flags, uargs);
}
