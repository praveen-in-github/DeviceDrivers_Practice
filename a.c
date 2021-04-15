// Madivada Praveen
//CED17I037

#include<linux/kernel.h>
#include<linux/module.h>
#include<linux/moduleparam.h>
#include<linux/init.h>
#include<linux/stat.h>


MODULE_LICENSE("GPL");
MODULE_AUTHOR("Praveen");

int input_int=0;

module_param(input_int,int,S_IRUSR | S_IWUSR);
MODULE_PARM_DESC(input_int,"Input Integer");

static int init_mo(void)
{
	printk(KERN_INFO "Kenrel Module Intialized\n");
	printk(KERN_INFO "%d is given input value\n",input_int);
	return 0;
} 

static void  exit_mo(void)
{
	printk(KERN_INFO "Module cleaned\n");
	 
}


module_init(init_mo);
module_exit(exit_mo);
