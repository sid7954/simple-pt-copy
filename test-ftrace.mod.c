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
	{ 0x683cfe8d, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x6fe9e1dc, __VMLINUX_SYMBOL_STR(trace_event_raw_init) },
	{ 0x2389bd36, __VMLINUX_SYMBOL_STR(trace_event_reg) },
	{ 0xc3694ac9, __VMLINUX_SYMBOL_STR(param_get_int) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x477e59a3, __VMLINUX_SYMBOL_STR(__cpu_online_mask) },
	{ 0x7a2af7b4, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xcddfa2cf, __VMLINUX_SYMBOL_STR(trace_define_field) },
	{ 0x11caddc7, __VMLINUX_SYMBOL_STR(trace_seq_printf) },
	{ 0x9d05a363, __VMLINUX_SYMBOL_STR(trace_raw_output_prep) },
	{ 0xdb749ecf, __VMLINUX_SYMBOL_STR(trace_event_ignore_this_pid) },
	{ 0x22d52534, __VMLINUX_SYMBOL_STR(event_triggers_call) },
	{ 0x1d716301, __VMLINUX_SYMBOL_STR(trace_event_buffer_commit) },
	{ 0xae73d291, __VMLINUX_SYMBOL_STR(trace_event_buffer_reserve) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x6d335ecf, __VMLINUX_SYMBOL_STR(perf_trace_run_bpf_submit) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0xad5f0017, __VMLINUX_SYMBOL_STR(perf_trace_buf_alloc) },
	{ 0x53569707, __VMLINUX_SYMBOL_STR(this_cpu_off) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "7855A18ABB20E8E52B43B4F");
