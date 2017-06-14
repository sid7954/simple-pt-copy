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
	{ 0x540289ce, __VMLINUX_SYMBOL_STR(param_get_ulong) },
	{ 0xb3f1303c, __VMLINUX_SYMBOL_STR(param_ops_string) },
	{ 0xdf5df45e, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x80afab1d, __VMLINUX_SYMBOL_STR(param_ops_ulong) },
	{ 0x32eec6bd, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x1c06bdd1, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0xfa1eb910, __VMLINUX_SYMBOL_STR(unregister_syscore_ops) },
	{ 0xf3dd3ec1, __VMLINUX_SYMBOL_STR(atomic_notifier_chain_unregister) },
	{ 0x7474647a, __VMLINUX_SYMBOL_STR(tracepoint_probe_unregister) },
	{ 0x8ae99469, __VMLINUX_SYMBOL_STR(__cpuhp_remove_state) },
	{ 0xb9c425de, __VMLINUX_SYMBOL_STR(register_syscore_ops) },
	{ 0x59688cf7, __VMLINUX_SYMBOL_STR(atomic_notifier_chain_register) },
	{ 0xae044bc7, __VMLINUX_SYMBOL_STR(panic_notifier_list) },
	{ 0x867bb0f5, __VMLINUX_SYMBOL_STR(tracepoint_probe_register) },
	{ 0x1806831a, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0x84f8f882, __VMLINUX_SYMBOL_STR(__cpuhp_setup_state) },
	{ 0x6a27bb42, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x8efb1ee3, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x672c5471, __VMLINUX_SYMBOL_STR(pv_cpu_ops) },
	{ 0xb2fd5ceb, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0x764b0a91, __VMLINUX_SYMBOL_STR(d_path) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x2270cd45, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x512b1d19, __VMLINUX_SYMBOL_STR(register_kprobe) },
	{ 0x638fe045, __VMLINUX_SYMBOL_STR(unregister_kprobe) },
	{ 0x6780dd1, __VMLINUX_SYMBOL_STR(param_set_ulong) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0x69ad2f20, __VMLINUX_SYMBOL_STR(kstrtouint) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x1afab522, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x5541ea93, __VMLINUX_SYMBOL_STR(on_each_cpu) },
	{ 0x6d55026b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xcddfa2cf, __VMLINUX_SYMBOL_STR(trace_define_field) },
	{ 0x6e60c338, __VMLINUX_SYMBOL_STR(remap_pfn_range) },
	{ 0x5ecfeec6, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0xe007de41, __VMLINUX_SYMBOL_STR(kallsyms_lookup_name) },
	{ 0x477e59a3, __VMLINUX_SYMBOL_STR(__cpu_online_mask) },
	{ 0x7cd8d75e, __VMLINUX_SYMBOL_STR(page_offset_base) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x179651ac, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0x7fac60e1, __VMLINUX_SYMBOL_STR(init_task) },
	{ 0x3f2f2ce0, __VMLINUX_SYMBOL_STR(param_set_int) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x7a2af7b4, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
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


MODULE_INFO(srcversion, "732D6D81025E0F289C73FD8");
