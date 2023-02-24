#include <linux/module.h>
#include <linux/init.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Task3 Hello Program");
MODULE_DESCRIPTION("A hello world module");

static int __init ModuleInit(void) {
	printk("Hello, Kernel!\n");
	return 0;
}

static void __exit ModuleExit(void) {
	printk("Goodbye, Kernel\n");
}

module_init(ModuleInit);
module_exit(ModuleExit);
