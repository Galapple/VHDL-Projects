/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2013 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/


#include "iki.h"
#include <string.h>
#include <math.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2013 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/


#include "iki.h"
#include <string.h>
#include <math.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
typedef void (*funcp)(char *, char *);
extern int main(int, char**);
extern void execute_1375(char*, char *);
extern void execute_1376(char*, char *);
extern void execute_1370(char*, char *);
extern void execute_1371(char*, char *);
extern void execute_1372(char*, char *);
extern void execute_1373(char*, char *);
extern void execute_1374(char*, char *);
extern void execute_31(char*, char *);
extern void execute_46(char*, char *);
extern void execute_49(char*, char *);
extern void execute_50(char*, char *);
extern void execute_51(char*, char *);
extern void execute_52(char*, char *);
extern void execute_53(char*, char *);
extern void execute_54(char*, char *);
extern void execute_55(char*, char *);
extern void execute_56(char*, char *);
extern void execute_58(char*, char *);
extern void execute_59(char*, char *);
extern void execute_60(char*, char *);
extern void execute_61(char*, char *);
extern void execute_62(char*, char *);
extern void execute_63(char*, char *);
extern void execute_64(char*, char *);
extern void execute_65(char*, char *);
extern void execute_66(char*, char *);
extern void execute_67(char*, char *);
extern void execute_68(char*, char *);
extern void execute_69(char*, char *);
extern void execute_70(char*, char *);
extern void execute_71(char*, char *);
extern void execute_72(char*, char *);
extern void execute_73(char*, char *);
extern void execute_74(char*, char *);
extern void execute_75(char*, char *);
extern void execute_170(char*, char *);
extern void execute_134(char*, char *);
extern void execute_135(char*, char *);
extern void execute_136(char*, char *);
extern void execute_137(char*, char *);
extern void execute_138(char*, char *);
extern void execute_139(char*, char *);
extern void execute_140(char*, char *);
extern void execute_141(char*, char *);
extern void execute_142(char*, char *);
extern void execute_143(char*, char *);
extern void execute_144(char*, char *);
extern void execute_145(char*, char *);
extern void execute_146(char*, char *);
extern void execute_147(char*, char *);
extern void execute_148(char*, char *);
extern void execute_149(char*, char *);
extern void execute_150(char*, char *);
extern void execute_151(char*, char *);
extern void execute_152(char*, char *);
extern void execute_153(char*, char *);
extern void execute_154(char*, char *);
extern void execute_155(char*, char *);
extern void execute_156(char*, char *);
extern void execute_157(char*, char *);
extern void execute_158(char*, char *);
extern void execute_159(char*, char *);
extern void execute_160(char*, char *);
extern void execute_161(char*, char *);
extern void execute_162(char*, char *);
extern void execute_163(char*, char *);
extern void execute_164(char*, char *);
extern void execute_165(char*, char *);
extern void execute_166(char*, char *);
extern void execute_167(char*, char *);
extern void execute_168(char*, char *);
extern void execute_172(char*, char *);
extern void execute_358(char*, char *);
extern void execute_359(char*, char *);
extern void execute_434(char*, char *);
extern void execute_1365(char*, char *);
extern void execute_1366(char*, char *);
extern void execute_1367(char*, char *);
extern void execute_1368(char*, char *);
extern void execute_180(char*, char *);
extern void execute_181(char*, char *);
extern void execute_182(char*, char *);
extern void execute_446(char*, char *);
extern void execute_361(char*, char *);
extern void execute_373(char*, char *);
extern void execute_457(char*, char *);
extern void execute_481(char*, char *);
extern void execute_721(char*, char *);
extern void execute_821(char*, char *);
extern void execute_839(char*, char *);
extern void execute_913(char*, char *);
extern void execute_947(char*, char *);
extern void execute_936(char*, char *);
extern void execute_956(char*, char *);
extern void execute_957(char*, char *);
extern void execute_958(char*, char *);
extern void execute_959(char*, char *);
extern void execute_960(char*, char *);
extern void execute_961(char*, char *);
extern void execute_962(char*, char *);
extern void execute_963(char*, char *);
extern void execute_964(char*, char *);
extern void execute_965(char*, char *);
extern void execute_966(char*, char *);
extern void execute_967(char*, char *);
extern void execute_968(char*, char *);
extern void execute_969(char*, char *);
extern void execute_970(char*, char *);
extern void execute_971(char*, char *);
extern void execute_177(char*, char *);
extern void execute_197(char*, char *);
extern void execute_212(char*, char *);
extern void execute_216(char*, char *);
extern void execute_231(char*, char *);
extern void execute_245(char*, char *);
extern void execute_250(char*, char *);
extern void execute_255(char*, char *);
extern void execute_259(char*, char *);
extern void execute_264(char*, char *);
extern void execute_269(char*, char *);
extern void execute_279(char*, char *);
extern void execute_289(char*, char *);
extern void execute_294(char*, char *);
extern void execute_299(char*, char *);
extern void execute_314(char*, char *);
extern void execute_329(char*, char *);
extern void execute_343(char*, char *);
extern void execute_347(char*, char *);
extern void execute_371(char*, char *);
extern void execute_377(char*, char *);
extern void execute_383(char*, char *);
extern void execute_393(char*, char *);
extern void execute_404(char*, char *);
extern void execute_414(char*, char *);
extern void execute_421(char*, char *);
extern void execute_427(char*, char *);
extern void execute_777(char*, char *);
extern void execute_778(char*, char *);
extern void execute_779(char*, char *);
extern void execute_780(char*, char *);
extern void execute_781(char*, char *);
extern void execute_782(char*, char *);
extern void execute_783(char*, char *);
extern void execute_784(char*, char *);
extern void execute_785(char*, char *);
extern void execute_786(char*, char *);
extern void execute_787(char*, char *);
extern void execute_788(char*, char *);
extern void execute_789(char*, char *);
extern void execute_790(char*, char *);
extern void execute_791(char*, char *);
extern void execute_792(char*, char *);
extern void vhdl_transfunc_eventcallback(char*, char*, unsigned, unsigned, unsigned, char *);
extern void transaction_1(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_2(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_25(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_75(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_78(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_81(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_82(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_84(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_85(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_86(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_87(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_88(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_89(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_116(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_117(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_118(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_119(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_137(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_144(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_146(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_153(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_169(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_170(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_171(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_172(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_173(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_174(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_175(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_176(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_189(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_190(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_191(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_192(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_195(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_205(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_245(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_258(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_265(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_290(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_292(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_295(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_297(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_610(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_619(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_628(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_637(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_646(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_655(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_664(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_673(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_682(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_691(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_700(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_708(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_716(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_724(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_732(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_740(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_748(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_756(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_765(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_774(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_783(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_790(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_799(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_806(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_815(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_823(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_834(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_841(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_851(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_859(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_869(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_876(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_886(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_894(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_904(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_911(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_921(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_929(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_939(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_946(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_956(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_964(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_974(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_981(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_991(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_999(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1009(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1016(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1025(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1034(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1043(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1052(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1061(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1075(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1090(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1106(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1115(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1124(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1133(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1142(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1154(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1162(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1172(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1182(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1197(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1205(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1214(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1226(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1234(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1244(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1254(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1262(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1271(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1283(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1291(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1301(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1311(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1326(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1334(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1343(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1355(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1363(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1373(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1383(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1391(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1400(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1410(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1425(char*, char*, unsigned, unsigned, unsigned);
funcp funcTab[283] = {(funcp)execute_1375, (funcp)execute_1376, (funcp)execute_1370, (funcp)execute_1371, (funcp)execute_1372, (funcp)execute_1373, (funcp)execute_1374, (funcp)execute_31, (funcp)execute_46, (funcp)execute_49, (funcp)execute_50, (funcp)execute_51, (funcp)execute_52, (funcp)execute_53, (funcp)execute_54, (funcp)execute_55, (funcp)execute_56, (funcp)execute_58, (funcp)execute_59, (funcp)execute_60, (funcp)execute_61, (funcp)execute_62, (funcp)execute_63, (funcp)execute_64, (funcp)execute_65, (funcp)execute_66, (funcp)execute_67, (funcp)execute_68, (funcp)execute_69, (funcp)execute_70, (funcp)execute_71, (funcp)execute_72, (funcp)execute_73, (funcp)execute_74, (funcp)execute_75, (funcp)execute_170, (funcp)execute_134, (funcp)execute_135, (funcp)execute_136, (funcp)execute_137, (funcp)execute_138, (funcp)execute_139, (funcp)execute_140, (funcp)execute_141, (funcp)execute_142, (funcp)execute_143, (funcp)execute_144, (funcp)execute_145, (funcp)execute_146, (funcp)execute_147, (funcp)execute_148, (funcp)execute_149, (funcp)execute_150, (funcp)execute_151, (funcp)execute_152, (funcp)execute_153, (funcp)execute_154, (funcp)execute_155, (funcp)execute_156, (funcp)execute_157, (funcp)execute_158, (funcp)execute_159, (funcp)execute_160, (funcp)execute_161, (funcp)execute_162, (funcp)execute_163, (funcp)execute_164, (funcp)execute_165, (funcp)execute_166, (funcp)execute_167, (funcp)execute_168, (funcp)execute_172, (funcp)execute_358, (funcp)execute_359, (funcp)execute_434, (funcp)execute_1365, (funcp)execute_1366, (funcp)execute_1367, (funcp)execute_1368, (funcp)execute_180, (funcp)execute_181, (funcp)execute_182, (funcp)execute_446, (funcp)execute_361, (funcp)execute_373, (funcp)execute_457, (funcp)execute_481, (funcp)execute_721, (funcp)execute_821, (funcp)execute_839, (funcp)execute_913, (funcp)execute_947, (funcp)execute_936, (funcp)execute_956, (funcp)execute_957, (funcp)execute_958, (funcp)execute_959, (funcp)execute_960, (funcp)execute_961, (funcp)execute_962, (funcp)execute_963, (funcp)execute_964, (funcp)execute_965, (funcp)execute_966, (funcp)execute_967, (funcp)execute_968, (funcp)execute_969, (funcp)execute_970, (funcp)execute_971, (funcp)execute_177, (funcp)execute_197, (funcp)execute_212, (funcp)execute_216, (funcp)execute_231, (funcp)execute_245, (funcp)execute_250, (funcp)execute_255, (funcp)execute_259, (funcp)execute_264, (funcp)execute_269, (funcp)execute_279, (funcp)execute_289, (funcp)execute_294, (funcp)execute_299, (funcp)execute_314, (funcp)execute_329, (funcp)execute_343, (funcp)execute_347, (funcp)execute_371, (funcp)execute_377, (funcp)execute_383, (funcp)execute_393, (funcp)execute_404, (funcp)execute_414, (funcp)execute_421, (funcp)execute_427, (funcp)execute_777, (funcp)execute_778, (funcp)execute_779, (funcp)execute_780, (funcp)execute_781, (funcp)execute_782, (funcp)execute_783, (funcp)execute_784, (funcp)execute_785, (funcp)execute_786, (funcp)execute_787, (funcp)execute_788, (funcp)execute_789, (funcp)execute_790, (funcp)execute_791, (funcp)execute_792, (funcp)vhdl_transfunc_eventcallback, (funcp)transaction_1, (funcp)transaction_2, (funcp)transaction_25, (funcp)transaction_75, (funcp)transaction_78, (funcp)transaction_81, (funcp)transaction_82, (funcp)transaction_84, (funcp)transaction_85, (funcp)transaction_86, (funcp)transaction_87, (funcp)transaction_88, (funcp)transaction_89, (funcp)transaction_116, (funcp)transaction_117, (funcp)transaction_118, (funcp)transaction_119, (funcp)transaction_137, (funcp)transaction_144, (funcp)transaction_146, (funcp)transaction_153, (funcp)transaction_169, (funcp)transaction_170, (funcp)transaction_171, (funcp)transaction_172, (funcp)transaction_173, (funcp)transaction_174, (funcp)transaction_175, (funcp)transaction_176, (funcp)transaction_189, (funcp)transaction_190, (funcp)transaction_191, (funcp)transaction_192, (funcp)transaction_195, (funcp)transaction_205, (funcp)transaction_245, (funcp)transaction_258, (funcp)transaction_265, (funcp)transaction_290, (funcp)transaction_292, (funcp)transaction_295, (funcp)transaction_297, (funcp)transaction_610, (funcp)transaction_619, (funcp)transaction_628, (funcp)transaction_637, (funcp)transaction_646, (funcp)transaction_655, (funcp)transaction_664, (funcp)transaction_673, (funcp)transaction_682, (funcp)transaction_691, (funcp)transaction_700, (funcp)transaction_708, (funcp)transaction_716, (funcp)transaction_724, (funcp)transaction_732, (funcp)transaction_740, (funcp)transaction_748, (funcp)transaction_756, (funcp)transaction_765, (funcp)transaction_774, (funcp)transaction_783, (funcp)transaction_790, (funcp)transaction_799, (funcp)transaction_806, (funcp)transaction_815, (funcp)transaction_823, (funcp)transaction_834, (funcp)transaction_841, (funcp)transaction_851, (funcp)transaction_859, (funcp)transaction_869, (funcp)transaction_876, (funcp)transaction_886, (funcp)transaction_894, (funcp)transaction_904, (funcp)transaction_911, (funcp)transaction_921, (funcp)transaction_929, (funcp)transaction_939, (funcp)transaction_946, (funcp)transaction_956, (funcp)transaction_964, (funcp)transaction_974, (funcp)transaction_981, (funcp)transaction_991, (funcp)transaction_999, (funcp)transaction_1009, (funcp)transaction_1016, (funcp)transaction_1025, (funcp)transaction_1034, (funcp)transaction_1043, (funcp)transaction_1052, (funcp)transaction_1061, (funcp)transaction_1075, (funcp)transaction_1090, (funcp)transaction_1106, (funcp)transaction_1115, (funcp)transaction_1124, (funcp)transaction_1133, (funcp)transaction_1142, (funcp)transaction_1154, (funcp)transaction_1162, (funcp)transaction_1172, (funcp)transaction_1182, (funcp)transaction_1197, (funcp)transaction_1205, (funcp)transaction_1214, (funcp)transaction_1226, (funcp)transaction_1234, (funcp)transaction_1244, (funcp)transaction_1254, (funcp)transaction_1262, (funcp)transaction_1271, (funcp)transaction_1283, (funcp)transaction_1291, (funcp)transaction_1301, (funcp)transaction_1311, (funcp)transaction_1326, (funcp)transaction_1334, (funcp)transaction_1343, (funcp)transaction_1355, (funcp)transaction_1363, (funcp)transaction_1373, (funcp)transaction_1383, (funcp)transaction_1391, (funcp)transaction_1400, (funcp)transaction_1410, (funcp)transaction_1425};
const int NumRelocateId= 283;

void relocate(char *dp)
{
	iki_relocate(dp, "xsim.dir/tb_lab5_short_behav/xsim.reloc",  (void **)funcTab, 283);
	iki_vhdl_file_variable_register(dp + 306600);
	iki_vhdl_file_variable_register(dp + 306656);


	/*Populate the transaction function pointer field in the whole net structure */
}

void sensitize(char *dp)
{
	iki_sensitize(dp, "xsim.dir/tb_lab5_short_behav/xsim.reloc");
}

	// Initialize Verilog nets in mixed simulation, for the cases when the value at time 0 should be propagated from the mixed language Vhdl net

void simulate(char *dp)
{
		iki_schedule_processes_at_time_zero(dp, "xsim.dir/tb_lab5_short_behav/xsim.reloc");

	iki_execute_processes();

	// Schedule resolution functions for the multiply driven Verilog nets that have strength
	// Schedule transaction functions for the singly driven Verilog nets that have strength

}
#include "iki_bridge.h"
void relocate(char *);

void sensitize(char *);

void simulate(char *);

extern SYSTEMCLIB_IMP_DLLSPEC void local_register_implicit_channel(int, char*);
extern void implicit_HDL_SCinstatiate();

extern SYSTEMCLIB_IMP_DLLSPEC int xsim_argc_copy ;
extern SYSTEMCLIB_IMP_DLLSPEC char** xsim_argv_copy ;

int main(int argc, char **argv)
{
    iki_heap_initialize("ms", "isimmm", 0, 2147483648) ;
    iki_set_sv_type_file_path_name("xsim.dir/tb_lab5_short_behav/xsim.svtype");
    iki_set_crvs_dump_file_path_name("xsim.dir/tb_lab5_short_behav/xsim.crvsdump");
    void* design_handle = iki_create_design("xsim.dir/tb_lab5_short_behav/xsim.mem", (void *)relocate, (void *)sensitize, (void *)simulate, 0, isimBridge_getWdbWriter(), 0, argc, argv);
     iki_set_rc_trial_count(100);
    (void) design_handle;
    return iki_simulate_design();
}
