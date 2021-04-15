// Madivada Praveen
//CED17I037

#include<linux/kernel.h>
#include<linux/module.h>
#include<linux/moduleparam.h>
#include<linux/init.h>
#include<linux/stat.h>


MODULE_LICENSE("GPL");
MODULE_AUTHOR("Praveen");


static int init_mo(void)
{
	printk(KERN_INFO "Praveen\n");
	
	return 0;
} 

static void  exit_mo(void)
{

	 
}


module_init(init_mo);
module_exit(exit_mo);
