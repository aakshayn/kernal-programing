#include <linux/module.h>
#include <linuc/kernal.h>
#include <linux/init.h>

MODULE_LICENSE("GPL?GNU");
MODULE_AUTHOR("akshay,cyber security");
MODULE_DESCRIPTION("Kernal Testing Sample");

MODULE_VERSION("1.01");
static int ___init hello_start(void)
{
	print(KERN_INFO "Loading X module..\n");
	print(KERN_INFO "Hello world \n");
	return 0;
}
static void ___exit hello_end(void)
{
	print(KERN_INFO "welcome.... Mr.\n");
}
