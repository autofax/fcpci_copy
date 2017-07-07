#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x84e6b870, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x5e25804, __VMLINUX_SYMBOL_STR(__request_region) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x210ba5e7, __VMLINUX_SYMBOL_STR(attach_capi_ctr) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x6bf1c17f, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0xe03f9acf, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x2baa6586, __VMLINUX_SYMBOL_STR(capilib_new_ncci) },
	{ 0x9f823278, __VMLINUX_SYMBOL_STR(register_capi_driver) },
	{ 0xfd014799, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x56d4ca56, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xaa165d27, __VMLINUX_SYMBOL_STR(capilib_release_appl) },
	{ 0x32ca767e, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x2b8eab1f, __VMLINUX_SYMBOL_STR(capilib_free_ncci) },
	{ 0xfdfd14d4, __VMLINUX_SYMBOL_STR(capi_ctr_handle_message) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xc7cbb827, __VMLINUX_SYMBOL_STR(capi_ctr_down) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x7a2af7b4, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0xe9d0d8c9, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xdd16a9d8, __VMLINUX_SYMBOL_STR(PDE_DATA) },
	{ 0x150ad92b, __VMLINUX_SYMBOL_STR(ioport_resource) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xee57e7e0, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x1250c7e1, __VMLINUX_SYMBOL_STR(_raw_spin_trylock) },
	{ 0x4403fcf, __VMLINUX_SYMBOL_STR(unregister_capi_driver) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x486eb4ad, __VMLINUX_SYMBOL_STR(capi_ctr_ready) },
	{ 0x71e8d5ba, __VMLINUX_SYMBOL_STR(capilib_data_b3_req) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x8dcf4dcd, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x7585cd2c, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x8d15114a, __VMLINUX_SYMBOL_STR(__release_region) },
	{ 0x86a17ddb, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x99195078, __VMLINUX_SYMBOL_STR(vsnprintf) },
	{ 0x74a017d3, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xc1d2e6e0, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xaeda4f99, __VMLINUX_SYMBOL_STR(detach_capi_ctr) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x557b12de, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x8c55396, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x62e32d43, __VMLINUX_SYMBOL_STR(capilib_data_b3_conf) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=kernelcapi";

MODULE_ALIAS("pci:v00001244d00000A00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001244d00000E00sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "6401AF813B3C701395A5A89");
