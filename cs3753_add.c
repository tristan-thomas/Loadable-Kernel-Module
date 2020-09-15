#include <linux/kernel.h>
#include <linux/linkage.h> 
// uaccess.h contains declaration for put_user(data, location)
#include <linux/uaccess.h>

asmlinkage long sys_cs3753_add(int a, int b, int* __user result)
{
  // Generate solution
  int soln = a + b;

  // Print the numbers to the kernel that are to be added
  printk(KERN_ALERT "Numbers to be added: %i and %i\n",a,b);

  // Copy the solution back into user space at the specified address
  put_user(soln, result);

  // Print the solution to the kernel
  printk(KERN_ALERT "The solution is: %i\n",soln);

  return 0;
}