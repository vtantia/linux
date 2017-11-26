#include<linux/kernel.h>

asmlinkage long sys_save_restore(unsigned int op, unsigned int flags,
			    const char __user *uargs);

// TODO: follow remaining steps in https://medium.com/@ssreehari/implementing-a-system-call-in-linux-kernel-4-7-1-6f98250a8c38 to allow syscall
