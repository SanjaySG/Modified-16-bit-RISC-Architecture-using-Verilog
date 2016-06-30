/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "time = %d\n";
static const char *ng1 = "\tmemory[0] = %b\n";
static int ng2[] = {0, 0};
static const char *ng3 = "\tmemory[1] = %b\n";
static int ng4[] = {1, 0};
static const char *ng5 = "\tmemory[2] = %b\n";
static int ng6[] = {2, 0};
static const char *ng7 = "\tmemory[3] = %b\n";
static int ng8[] = {3, 0};
static const char *ng9 = "\tmemory[4] = %b\n";
static int ng10[] = {4, 0};
static const char *ng11 = "\tmemory[5] = %b\n";
static int ng12[] = {5, 0};
static const char *ng13 = "\tmemory[6] = %b\n";
static int ng14[] = {6, 0};
static const char *ng15 = "\tmemory[7] = %b\n";
static int ng16[] = {7, 0};
static const char *ng17 = "E:/Xilinx Workspace/Project2/Project_2/Data_Memory.v";
static const char *ng18 = "test\\test.data";
static const char *ng19 = "test\\monitor_output.o";
static const char *ng20 = "Load or Store task inside Data_Memory";
static const char *ng21 = "Load task inside Data Memory";
static const char *ng22 = "Result = %b";
static const char *ng23 = "Load complete. Rdata = %b";
static const char *ng24 = "Time %0t";
static const char *ng25 = "Store task inside Data Memory %0t";
static const char *ng26 = "Rd2 = %b";
static const char *ng27 = "Store complete";
static const char *ng28 = "Inside Data Memory - No memory operation required";
static const char *ng29 = "Rdata = %b";

void Monitor_24_1(char *);
void Monitor_24_1(char *);


static void Monitor_24_1_Func(char *t0)
{
    char t4[16];
    char t9[8];
    char t20[8];
    char t31[8];
    char t42[8];
    char t53[8];
    char t64[8];
    char t75[8];
    char t86[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    char *t92;
    char *t93;

LAB0:    t1 = (t0 + 2888);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = xsi_vlog_time(t4, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_fwrite(*((unsigned int *)t3), 0, 0, 3, ng0, 2, t0, (char)118, t4, 64);
    t6 = (t0 + 2728);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t10 = (t0 + 2728);
    t11 = (t10 + 72U);
    t12 = *((char **)t11);
    t13 = (t0 + 2728);
    t14 = (t13 + 64U);
    t15 = *((char **)t14);
    t16 = ((char*)((ng2)));
    xsi_vlog_generic_get_array_select_value(t9, 16, t8, t12, t15, 2, 1, t16, 32, 1);
    xsi_vlogfile_fwrite(*((unsigned int *)t3), 0, 0, 3, ng1, 2, t0, (char)118, t9, 16);
    t17 = (t0 + 2728);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t21 = (t0 + 2728);
    t22 = (t21 + 72U);
    t23 = *((char **)t22);
    t24 = (t0 + 2728);
    t25 = (t24 + 64U);
    t26 = *((char **)t25);
    t27 = ((char*)((ng4)));
    xsi_vlog_generic_get_array_select_value(t20, 16, t19, t23, t26, 2, 1, t27, 32, 1);
    xsi_vlogfile_fwrite(*((unsigned int *)t3), 0, 0, 3, ng3, 2, t0, (char)118, t20, 16);
    t28 = (t0 + 2728);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t32 = (t0 + 2728);
    t33 = (t32 + 72U);
    t34 = *((char **)t33);
    t35 = (t0 + 2728);
    t36 = (t35 + 64U);
    t37 = *((char **)t36);
    t38 = ((char*)((ng6)));
    xsi_vlog_generic_get_array_select_value(t31, 16, t30, t34, t37, 2, 1, t38, 32, 1);
    xsi_vlogfile_fwrite(*((unsigned int *)t3), 0, 0, 3, ng5, 2, t0, (char)118, t31, 16);
    t39 = (t0 + 2728);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    t43 = (t0 + 2728);
    t44 = (t43 + 72U);
    t45 = *((char **)t44);
    t46 = (t0 + 2728);
    t47 = (t46 + 64U);
    t48 = *((char **)t47);
    t49 = ((char*)((ng8)));
    xsi_vlog_generic_get_array_select_value(t42, 16, t41, t45, t48, 2, 1, t49, 32, 1);
    xsi_vlogfile_fwrite(*((unsigned int *)t3), 0, 0, 3, ng7, 2, t0, (char)118, t42, 16);
    t50 = (t0 + 2728);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    t54 = (t0 + 2728);
    t55 = (t54 + 72U);
    t56 = *((char **)t55);
    t57 = (t0 + 2728);
    t58 = (t57 + 64U);
    t59 = *((char **)t58);
    t60 = ((char*)((ng10)));
    xsi_vlog_generic_get_array_select_value(t53, 16, t52, t56, t59, 2, 1, t60, 32, 1);
    xsi_vlogfile_fwrite(*((unsigned int *)t3), 0, 0, 3, ng9, 2, t0, (char)118, t53, 16);
    t61 = (t0 + 2728);
    t62 = (t61 + 56U);
    t63 = *((char **)t62);
    t65 = (t0 + 2728);
    t66 = (t65 + 72U);
    t67 = *((char **)t66);
    t68 = (t0 + 2728);
    t69 = (t68 + 64U);
    t70 = *((char **)t69);
    t71 = ((char*)((ng12)));
    xsi_vlog_generic_get_array_select_value(t64, 16, t63, t67, t70, 2, 1, t71, 32, 1);
    xsi_vlogfile_fwrite(*((unsigned int *)t3), 0, 0, 3, ng11, 2, t0, (char)118, t64, 16);
    t72 = (t0 + 2728);
    t73 = (t72 + 56U);
    t74 = *((char **)t73);
    t76 = (t0 + 2728);
    t77 = (t76 + 72U);
    t78 = *((char **)t77);
    t79 = (t0 + 2728);
    t80 = (t79 + 64U);
    t81 = *((char **)t80);
    t82 = ((char*)((ng14)));
    xsi_vlog_generic_get_array_select_value(t75, 16, t74, t78, t81, 2, 1, t82, 32, 1);
    xsi_vlogfile_fwrite(*((unsigned int *)t3), 0, 0, 3, ng13, 2, t0, (char)118, t75, 16);
    t83 = (t0 + 2728);
    t84 = (t83 + 56U);
    t85 = *((char **)t84);
    t87 = (t0 + 2728);
    t88 = (t87 + 72U);
    t89 = *((char **)t88);
    t90 = (t0 + 2728);
    t91 = (t90 + 64U);
    t92 = *((char **)t91);
    t93 = ((char*)((ng16)));
    xsi_vlog_generic_get_array_select_value(t86, 16, t85, t89, t92, 2, 1, t93, 32, 1);
    xsi_vlogfile_fwrite(*((unsigned int *)t3), 1, 0, 3, ng15, 2, t0, (char)118, t86, 16);

LAB1:    return;
}

static void Initial_19_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 3808U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(20, ng17);

LAB4:    xsi_set_current_line(21, ng17);
    t2 = (t0 + 2728);
    xsi_vlogfile_readmemb(ng18, 0, t2, 0, 0, 0, 0);
    xsi_set_current_line(23, ng17);
    *((int *)t3) = xsi_vlogfile_file_open_of_cname(ng19);
    t2 = (t3 + 4);
    *((int *)t2) = 0;
    t4 = (t0 + 2888);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(24, ng17);
    Monitor_24_1(t0);
    xsi_set_current_line(42, ng17);
    t2 = (t0 + 3616);
    xsi_process_wait(t2, 20000000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(43, ng17);
    t2 = (t0 + 2888);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_vlogfile_fclose(*((unsigned int *)t5));
    goto LAB1;

}

static void Always_50_2(char *t0)
{
    char t4[8];
    char t20[8];
    char t34[8];
    char t50[8];
    char t58[8];
    char t98[16];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    int t82;
    int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;
    char *t97;
    char *t99;
    int t100;
    int t101;
    int t102;

LAB0:    t1 = (t0 + 4056U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng17);
    t2 = (t0 + 4872);
    *((int *)t2) = 1;
    t3 = (t0 + 4088);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(50, ng17);

LAB5:    xsi_set_current_line(51, ng17);
    xsi_vlogfile_write(1, 0, 0, ng20, 1, t0);
    xsi_set_current_line(52, ng17);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB9;

LAB6:    if (t16 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t4) = 1;

LAB9:    memset(t20, 0, 8);
    t21 = (t4 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (~(t22));
    t24 = *((unsigned int *)t4);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t21) != 0)
        goto LAB12;

LAB13:    t28 = (t20 + 4);
    t29 = *((unsigned int *)t20);
    t30 = *((unsigned int *)t28);
    t31 = (t29 || t30);
    if (t31 > 0)
        goto LAB14;

LAB15:    memcpy(t58, t20, 8);

LAB16:    t90 = (t58 + 4);
    t91 = *((unsigned int *)t90);
    t92 = (~(t91));
    t93 = *((unsigned int *)t58);
    t94 = (t93 & t92);
    t95 = (t94 != 0);
    if (t95 > 0)
        goto LAB28;

LAB29:    xsi_set_current_line(59, ng17);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB35;

LAB32:    if (t16 != 0)
        goto LAB34;

LAB33:    *((unsigned int *)t4) = 1;

LAB35:    memset(t20, 0, 8);
    t21 = (t4 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (~(t22));
    t24 = *((unsigned int *)t4);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t21) != 0)
        goto LAB38;

LAB39:    t28 = (t20 + 4);
    t29 = *((unsigned int *)t20);
    t30 = *((unsigned int *)t28);
    t31 = (t29 || t30);
    if (t31 > 0)
        goto LAB40;

LAB41:    memcpy(t58, t20, 8);

LAB42:    t90 = (t58 + 4);
    t91 = *((unsigned int *)t90);
    t92 = (~(t91));
    t93 = *((unsigned int *)t58);
    t94 = (t93 & t92);
    t95 = (t94 != 0);
    if (t95 > 0)
        goto LAB54;

LAB55:    xsi_set_current_line(70, ng17);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB65;

LAB62:    if (t16 != 0)
        goto LAB64;

LAB63:    *((unsigned int *)t4) = 1;

LAB65:    memset(t20, 0, 8);
    t21 = (t4 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (~(t22));
    t24 = *((unsigned int *)t4);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB66;

LAB67:    if (*((unsigned int *)t21) != 0)
        goto LAB68;

LAB69:    t28 = (t20 + 4);
    t29 = *((unsigned int *)t20);
    t30 = *((unsigned int *)t28);
    t31 = (t29 || t30);
    if (t31 > 0)
        goto LAB70;

LAB71:    memcpy(t58, t20, 8);

LAB72:    t90 = (t58 + 4);
    t91 = *((unsigned int *)t90);
    t92 = (~(t91));
    t93 = *((unsigned int *)t58);
    t94 = (t93 & t92);
    t95 = (t94 != 0);
    if (t95 > 0)
        goto LAB84;

LAB85:
LAB86:
LAB56:
LAB30:    xsi_set_current_line(77, ng17);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB2;

LAB8:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB9;

LAB10:    *((unsigned int *)t20) = 1;
    goto LAB13;

LAB12:    t27 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB13;

LAB14:    t32 = (t0 + 1368U);
    t33 = *((char **)t32);
    t32 = ((char*)((ng2)));
    memset(t34, 0, 8);
    t35 = (t33 + 4);
    t36 = (t32 + 4);
    t37 = *((unsigned int *)t33);
    t38 = *((unsigned int *)t32);
    t39 = (t37 ^ t38);
    t40 = *((unsigned int *)t35);
    t41 = *((unsigned int *)t36);
    t42 = (t40 ^ t41);
    t43 = (t39 | t42);
    t44 = *((unsigned int *)t35);
    t45 = *((unsigned int *)t36);
    t46 = (t44 | t45);
    t47 = (~(t46));
    t48 = (t43 & t47);
    if (t48 != 0)
        goto LAB20;

LAB17:    if (t46 != 0)
        goto LAB19;

LAB18:    *((unsigned int *)t34) = 1;

LAB20:    memset(t50, 0, 8);
    t51 = (t34 + 4);
    t52 = *((unsigned int *)t51);
    t53 = (~(t52));
    t54 = *((unsigned int *)t34);
    t55 = (t54 & t53);
    t56 = (t55 & 1U);
    if (t56 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t51) != 0)
        goto LAB23;

LAB24:    t59 = *((unsigned int *)t20);
    t60 = *((unsigned int *)t50);
    t61 = (t59 & t60);
    *((unsigned int *)t58) = t61;
    t62 = (t20 + 4);
    t63 = (t50 + 4);
    t64 = (t58 + 4);
    t65 = *((unsigned int *)t62);
    t66 = *((unsigned int *)t63);
    t67 = (t65 | t66);
    *((unsigned int *)t64) = t67;
    t68 = *((unsigned int *)t64);
    t69 = (t68 != 0);
    if (t69 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB16;

LAB19:    t49 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB20;

LAB21:    *((unsigned int *)t50) = 1;
    goto LAB24;

LAB23:    t57 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB24;

LAB25:    t70 = *((unsigned int *)t58);
    t71 = *((unsigned int *)t64);
    *((unsigned int *)t58) = (t70 | t71);
    t72 = (t20 + 4);
    t73 = (t50 + 4);
    t74 = *((unsigned int *)t20);
    t75 = (~(t74));
    t76 = *((unsigned int *)t72);
    t77 = (~(t76));
    t78 = *((unsigned int *)t50);
    t79 = (~(t78));
    t80 = *((unsigned int *)t73);
    t81 = (~(t80));
    t82 = (t75 & t77);
    t83 = (t79 & t81);
    t84 = (~(t82));
    t85 = (~(t83));
    t86 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t86 & t84);
    t87 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t87 & t85);
    t88 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t88 & t84);
    t89 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t89 & t85);
    goto LAB27;

LAB28:    xsi_set_current_line(53, ng17);

LAB31:    xsi_set_current_line(54, ng17);
    xsi_vlogfile_write(1, 0, 0, ng21, 1, t0);
    xsi_set_current_line(55, ng17);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng22, 2, t0, (char)118, t3, 16);
    xsi_set_current_line(56, ng17);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2728);
    t19 = (t6 + 72U);
    t21 = *((char **)t19);
    t27 = (t0 + 2728);
    t28 = (t27 + 64U);
    t32 = *((char **)t28);
    t33 = (t0 + 1528U);
    t35 = *((char **)t33);
    xsi_vlog_generic_get_array_select_value(t4, 16, t5, t21, t32, 2, 1, t35, 16, 2);
    t33 = (t0 + 2408);
    xsi_vlogvar_assign_value(t33, t4, 0, 0, 16);
    xsi_set_current_line(57, ng17);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng23, 2, t0, (char)118, t5, 16);
    goto LAB30;

LAB34:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB35;

LAB36:    *((unsigned int *)t20) = 1;
    goto LAB39;

LAB38:    t27 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB39;

LAB40:    t32 = (t0 + 1368U);
    t33 = *((char **)t32);
    t32 = ((char*)((ng4)));
    memset(t34, 0, 8);
    t35 = (t33 + 4);
    t36 = (t32 + 4);
    t37 = *((unsigned int *)t33);
    t38 = *((unsigned int *)t32);
    t39 = (t37 ^ t38);
    t40 = *((unsigned int *)t35);
    t41 = *((unsigned int *)t36);
    t42 = (t40 ^ t41);
    t43 = (t39 | t42);
    t44 = *((unsigned int *)t35);
    t45 = *((unsigned int *)t36);
    t46 = (t44 | t45);
    t47 = (~(t46));
    t48 = (t43 & t47);
    if (t48 != 0)
        goto LAB46;

LAB43:    if (t46 != 0)
        goto LAB45;

LAB44:    *((unsigned int *)t34) = 1;

LAB46:    memset(t50, 0, 8);
    t51 = (t34 + 4);
    t52 = *((unsigned int *)t51);
    t53 = (~(t52));
    t54 = *((unsigned int *)t34);
    t55 = (t54 & t53);
    t56 = (t55 & 1U);
    if (t56 != 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t51) != 0)
        goto LAB49;

LAB50:    t59 = *((unsigned int *)t20);
    t60 = *((unsigned int *)t50);
    t61 = (t59 & t60);
    *((unsigned int *)t58) = t61;
    t62 = (t20 + 4);
    t63 = (t50 + 4);
    t64 = (t58 + 4);
    t65 = *((unsigned int *)t62);
    t66 = *((unsigned int *)t63);
    t67 = (t65 | t66);
    *((unsigned int *)t64) = t67;
    t68 = *((unsigned int *)t64);
    t69 = (t68 != 0);
    if (t69 == 1)
        goto LAB51;

LAB52:
LAB53:    goto LAB42;

LAB45:    t49 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB46;

LAB47:    *((unsigned int *)t50) = 1;
    goto LAB50;

LAB49:    t57 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB50;

LAB51:    t70 = *((unsigned int *)t58);
    t71 = *((unsigned int *)t64);
    *((unsigned int *)t58) = (t70 | t71);
    t72 = (t20 + 4);
    t73 = (t50 + 4);
    t74 = *((unsigned int *)t20);
    t75 = (~(t74));
    t76 = *((unsigned int *)t72);
    t77 = (~(t76));
    t78 = *((unsigned int *)t50);
    t79 = (~(t78));
    t80 = *((unsigned int *)t73);
    t81 = (~(t80));
    t82 = (t75 & t77);
    t83 = (t79 & t81);
    t84 = (~(t82));
    t85 = (~(t83));
    t86 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t86 & t84);
    t87 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t87 & t85);
    t88 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t88 & t84);
    t89 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t89 & t85);
    goto LAB53;

LAB54:    xsi_set_current_line(60, ng17);

LAB57:    xsi_set_current_line(61, ng17);
    t96 = (t0 + 4888);
    *((int *)t96) = 1;
    t97 = (t0 + 4088);
    *((char **)t97) = t96;
    *((char **)t1) = &&LAB58;
    goto LAB1;

LAB58:    xsi_set_current_line(61, ng17);

LAB59:    xsi_set_current_line(62, ng17);
    t99 = xsi_vlog_time(t98, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(1, 0, 0, ng24, 2, t0, (char)118, t98, 64);
    xsi_set_current_line(63, ng17);
    t2 = xsi_vlog_time(t98, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(1, 0, 0, ng25, 2, t0, (char)118, t98, 64);
    xsi_set_current_line(64, ng17);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng22, 2, t0, (char)118, t3, 16);
    xsi_set_current_line(65, ng17);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng26, 2, t0, (char)118, t3, 16);
    xsi_set_current_line(66, ng17);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t0 + 2728);
    t5 = (t0 + 2728);
    t6 = (t5 + 72U);
    t19 = *((char **)t6);
    t21 = (t0 + 2728);
    t27 = (t21 + 64U);
    t28 = *((char **)t27);
    t32 = (t0 + 1528U);
    t33 = *((char **)t32);
    xsi_vlog_generic_convert_array_indices(t4, t20, t19, t28, 2, 1, t33, 16, 2);
    t32 = (t4 + 4);
    t7 = *((unsigned int *)t32);
    t82 = (!(t7));
    t35 = (t20 + 4);
    t8 = *((unsigned int *)t35);
    t83 = (!(t8));
    t100 = (t82 && t83);
    if (t100 == 1)
        goto LAB60;

LAB61:    xsi_set_current_line(67, ng17);
    xsi_vlogfile_write(1, 0, 0, ng27, 1, t0);
    goto LAB56;

LAB60:    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t20);
    t101 = (t9 - t10);
    t102 = (t101 + 1);
    xsi_vlogvar_assign_value(t2, t3, 0, *((unsigned int *)t20), t102);
    goto LAB61;

LAB64:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB65;

LAB66:    *((unsigned int *)t20) = 1;
    goto LAB69;

LAB68:    t27 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB69;

LAB70:    t32 = (t0 + 1368U);
    t33 = *((char **)t32);
    t32 = ((char*)((ng2)));
    memset(t34, 0, 8);
    t35 = (t33 + 4);
    t36 = (t32 + 4);
    t37 = *((unsigned int *)t33);
    t38 = *((unsigned int *)t32);
    t39 = (t37 ^ t38);
    t40 = *((unsigned int *)t35);
    t41 = *((unsigned int *)t36);
    t42 = (t40 ^ t41);
    t43 = (t39 | t42);
    t44 = *((unsigned int *)t35);
    t45 = *((unsigned int *)t36);
    t46 = (t44 | t45);
    t47 = (~(t46));
    t48 = (t43 & t47);
    if (t48 != 0)
        goto LAB76;

LAB73:    if (t46 != 0)
        goto LAB75;

LAB74:    *((unsigned int *)t34) = 1;

LAB76:    memset(t50, 0, 8);
    t51 = (t34 + 4);
    t52 = *((unsigned int *)t51);
    t53 = (~(t52));
    t54 = *((unsigned int *)t34);
    t55 = (t54 & t53);
    t56 = (t55 & 1U);
    if (t56 != 0)
        goto LAB77;

LAB78:    if (*((unsigned int *)t51) != 0)
        goto LAB79;

LAB80:    t59 = *((unsigned int *)t20);
    t60 = *((unsigned int *)t50);
    t61 = (t59 & t60);
    *((unsigned int *)t58) = t61;
    t62 = (t20 + 4);
    t63 = (t50 + 4);
    t64 = (t58 + 4);
    t65 = *((unsigned int *)t62);
    t66 = *((unsigned int *)t63);
    t67 = (t65 | t66);
    *((unsigned int *)t64) = t67;
    t68 = *((unsigned int *)t64);
    t69 = (t68 != 0);
    if (t69 == 1)
        goto LAB81;

LAB82:
LAB83:    goto LAB72;

LAB75:    t49 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB76;

LAB77:    *((unsigned int *)t50) = 1;
    goto LAB80;

LAB79:    t57 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB80;

LAB81:    t70 = *((unsigned int *)t58);
    t71 = *((unsigned int *)t64);
    *((unsigned int *)t58) = (t70 | t71);
    t72 = (t20 + 4);
    t73 = (t50 + 4);
    t74 = *((unsigned int *)t20);
    t75 = (~(t74));
    t76 = *((unsigned int *)t72);
    t77 = (~(t76));
    t78 = *((unsigned int *)t50);
    t79 = (~(t78));
    t80 = *((unsigned int *)t73);
    t81 = (~(t80));
    t82 = (t75 & t77);
    t83 = (t79 & t81);
    t84 = (~(t82));
    t85 = (~(t83));
    t86 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t86 & t84);
    t87 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t87 & t85);
    t88 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t88 & t84);
    t89 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t89 & t85);
    goto LAB83;

LAB84:    xsi_set_current_line(71, ng17);

LAB87:    xsi_set_current_line(72, ng17);
    xsi_vlogfile_write(1, 0, 0, ng28, 1, t0);
    xsi_set_current_line(73, ng17);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng22, 2, t0, (char)118, t3, 16);
    xsi_set_current_line(74, ng17);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 2408);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 16);
    xsi_set_current_line(75, ng17);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng29, 2, t0, (char)118, t5, 16);
    goto LAB86;

}

static void Always_80_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 4304U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(80, ng17);
    t2 = (t0 + 4904);
    *((int *)t2) = 1;
    t3 = (t0 + 4336);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(81, ng17);

LAB5:    xsi_set_current_line(82, ng17);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 2568);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB2;

}

void Monitor_24_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 2888);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t0 + 4360);
    t5 = (t0 + 4920);
    xsi_vlog_fmonitor(*((unsigned int *)t3), (void *)Monitor_24_1_Func, t4, t5);

LAB1:    return;
}


extern void work_m_00000000000871106124_1124448613_init()
{
	static char *pe[] = {(void *)Initial_19_0,(void *)Always_50_2,(void *)Always_80_3,(void *)Monitor_24_1};
	xsi_register_didat("work_m_00000000000871106124_1124448613", "isim/Risc_16_bit_isim_beh.exe.sim/work/m_00000000000871106124_1124448613.didat");
	xsi_register_executes(pe);
}
