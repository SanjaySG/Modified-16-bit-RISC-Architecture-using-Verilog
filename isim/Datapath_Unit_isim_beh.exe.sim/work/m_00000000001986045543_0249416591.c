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
static const char *ng0 = "\tR[0] = %d";
static int ng1[] = {0, 0};
static const char *ng2 = "\tR[1] = %d";
static int ng3[] = {1, 0};
static const char *ng4 = "\tR[2] = %d";
static int ng5[] = {2, 0};
static const char *ng6 = "\tR[3] = %d";
static int ng7[] = {3, 0};
static const char *ng8 = "\tR[4] = %d";
static int ng9[] = {4, 0};
static const char *ng10 = "\tR[5] = %d";
static int ng11[] = {5, 0};
static const char *ng12 = "\tR[6] = %d";
static int ng13[] = {6, 0};
static const char *ng14 = "\tR[7] = %d\n";
static int ng15[] = {7, 0};
static const char *ng16 = "E:/Xilinx Workspace/Project2/Project_2/Datapath_Unit.v";
static const char *ng17 = "Initial block of Datapath_Unit";
static unsigned int ng18[] = {15U, 15U};
static const char *ng19 = "Rs1 = %b";
static const char *ng20 = "Rs2 = %b";
static const char *ng21 = "Opcode = %b";
static const char *ng22 = "No write back required";
static const char *ng23 = "Write back done.";
static const char *ng24 = "Branch/Jump execution complete";

void Monitor_92_3(char *);
void Monitor_92_3(char *);


static void Monitor_92_3_Func(char *t0)
{
    char t4[8];
    char t15[8];
    char t26[8];
    char t37[8];
    char t48[8];
    char t59[8];
    char t70[8];
    char t81[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    char *t87;
    char *t88;

LAB0:    t1 = (t0 + 5768);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t0 + 5768);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 5768);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t4, 16, t3, t7, t10, 2, 1, t11, 32, 1);
    xsi_vlogfile_write(0, 0, 3, ng0, 2, t0, (char)118, t4, 16);
    t12 = (t0 + 5768);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t16 = (t0 + 5768);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 5768);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t15, 16, t14, t18, t21, 2, 1, t22, 32, 1);
    xsi_vlogfile_write(0, 0, 3, ng2, 2, t0, (char)118, t15, 16);
    t23 = (t0 + 5768);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t27 = (t0 + 5768);
    t28 = (t27 + 72U);
    t29 = *((char **)t28);
    t30 = (t0 + 5768);
    t31 = (t30 + 64U);
    t32 = *((char **)t31);
    t33 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t26, 16, t25, t29, t32, 2, 1, t33, 32, 1);
    xsi_vlogfile_write(0, 0, 3, ng4, 2, t0, (char)118, t26, 16);
    t34 = (t0 + 5768);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t38 = (t0 + 5768);
    t39 = (t38 + 72U);
    t40 = *((char **)t39);
    t41 = (t0 + 5768);
    t42 = (t41 + 64U);
    t43 = *((char **)t42);
    t44 = ((char*)((ng7)));
    xsi_vlog_generic_get_array_select_value(t37, 16, t36, t40, t43, 2, 1, t44, 32, 1);
    xsi_vlogfile_write(0, 0, 3, ng6, 2, t0, (char)118, t37, 16);
    t45 = (t0 + 5768);
    t46 = (t45 + 56U);
    t47 = *((char **)t46);
    t49 = (t0 + 5768);
    t50 = (t49 + 72U);
    t51 = *((char **)t50);
    t52 = (t0 + 5768);
    t53 = (t52 + 64U);
    t54 = *((char **)t53);
    t55 = ((char*)((ng9)));
    xsi_vlog_generic_get_array_select_value(t48, 16, t47, t51, t54, 2, 1, t55, 32, 1);
    xsi_vlogfile_write(0, 0, 3, ng8, 2, t0, (char)118, t48, 16);
    t56 = (t0 + 5768);
    t57 = (t56 + 56U);
    t58 = *((char **)t57);
    t60 = (t0 + 5768);
    t61 = (t60 + 72U);
    t62 = *((char **)t61);
    t63 = (t0 + 5768);
    t64 = (t63 + 64U);
    t65 = *((char **)t64);
    t66 = ((char*)((ng11)));
    xsi_vlog_generic_get_array_select_value(t59, 16, t58, t62, t65, 2, 1, t66, 32, 1);
    xsi_vlogfile_write(0, 0, 3, ng10, 2, t0, (char)118, t59, 16);
    t67 = (t0 + 5768);
    t68 = (t67 + 56U);
    t69 = *((char **)t68);
    t71 = (t0 + 5768);
    t72 = (t71 + 72U);
    t73 = *((char **)t72);
    t74 = (t0 + 5768);
    t75 = (t74 + 64U);
    t76 = *((char **)t75);
    t77 = ((char*)((ng13)));
    xsi_vlog_generic_get_array_select_value(t70, 16, t69, t73, t76, 2, 1, t77, 32, 1);
    xsi_vlogfile_write(0, 0, 3, ng12, 2, t0, (char)118, t70, 16);
    t78 = (t0 + 5768);
    t79 = (t78 + 56U);
    t80 = *((char **)t79);
    t82 = (t0 + 5768);
    t83 = (t82 + 72U);
    t84 = *((char **)t83);
    t85 = (t0 + 5768);
    t86 = (t85 + 64U);
    t87 = *((char **)t86);
    t88 = ((char*)((ng15)));
    xsi_vlog_generic_get_array_select_value(t81, 16, t80, t84, t87, 2, 1, t88, 32, 1);
    xsi_vlogfile_write(1, 0, 3, ng14, 2, t0, (char)118, t81, 16);

LAB1:    return;
}

static void Initial_50_0(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    int t14;
    char *t15;
    unsigned int t16;
    int t17;
    int t18;
    unsigned int t19;
    unsigned int t20;
    int t21;
    int t22;

LAB0:    xsi_set_current_line(51, ng16);

LAB2:    xsi_set_current_line(52, ng16);
    xsi_vlogfile_write(1, 0, 0, ng17, 1, t0);
    xsi_set_current_line(54, ng16);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 5768);
    t5 = (t0 + 5768);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 5768);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB3;

LAB4:    xsi_set_current_line(55, ng16);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 5768);
    t5 = (t0 + 5768);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 5768);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng3)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB5;

LAB6:    xsi_set_current_line(56, ng16);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 5768);
    t5 = (t0 + 5768);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 5768);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng5)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(57, ng16);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 5768);
    t5 = (t0 + 5768);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 5768);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng7)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB9;

LAB10:    xsi_set_current_line(58, ng16);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 5768);
    t5 = (t0 + 5768);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 5768);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng9)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB11;

LAB12:    xsi_set_current_line(59, ng16);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 5768);
    t5 = (t0 + 5768);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 5768);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng11)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB13;

LAB14:    xsi_set_current_line(60, ng16);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 5768);
    t5 = (t0 + 5768);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 5768);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng13)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(61, ng16);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 5768);
    t5 = (t0 + 5768);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 5768);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng15)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB17;

LAB18:    xsi_set_current_line(62, ng16);
    t1 = ((char*)((ng18)));
    t2 = (t0 + 4488);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 4);
    xsi_set_current_line(63, ng16);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 5448);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(64, ng16);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 5288);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
LAB3:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB4;

LAB5:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB6;

LAB7:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB8;

LAB9:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB10;

LAB11:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB12;

LAB13:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB14;

LAB15:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB16;

LAB17:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB18;

}

static void Always_67_1(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    t1 = (t0 + 7416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(67, ng16);
    t2 = (t0 + 8480);
    *((int *)t2) = 1;
    t3 = (t0 + 7448);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(67, ng16);

LAB5:    xsi_set_current_line(68, ng16);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 5288);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(69, ng16);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 9);
    *((unsigned int *)t6) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 9);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t11 & 7U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 7U);
    t5 = (t0 + 5928);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 3);
    xsi_set_current_line(70, ng16);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 6);
    *((unsigned int *)t6) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 6);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t11 & 7U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 7U);
    t5 = (t0 + 6088);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 3);
    xsi_set_current_line(71, ng16);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 3);
    *((unsigned int *)t6) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 3);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t11 & 7U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 7U);
    t5 = (t0 + 6248);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 3);
    xsi_set_current_line(72, ng16);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 0);
    *((unsigned int *)t6) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t11 & 63U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 63U);
    t5 = (t0 + 4968);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 6);
    xsi_set_current_line(73, ng16);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 0);
    *((unsigned int *)t6) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t11 & 4095U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 4095U);
    t5 = (t0 + 5128);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 12);
    xsi_set_current_line(74, ng16);
    t2 = (t0 + 5928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng19, 2, t0, (char)118, t4, 3);
    xsi_set_current_line(75, ng16);
    t2 = (t0 + 6088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng20, 2, t0, (char)118, t4, 3);
    xsi_set_current_line(76, ng16);
    t2 = (t0 + 5768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5768);
    t13 = (t5 + 72U);
    t14 = *((char **)t13);
    t15 = (t0 + 5768);
    t16 = (t15 + 64U);
    t17 = *((char **)t16);
    t18 = (t0 + 5928);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    xsi_vlog_generic_get_array_select_value(t6, 16, t4, t14, t17, 2, 1, t20, 3, 2);
    t21 = (t0 + 4648);
    xsi_vlogvar_assign_value(t21, t6, 0, 0, 16);
    xsi_set_current_line(77, ng16);
    t2 = (t0 + 5768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5768);
    t13 = (t5 + 72U);
    t14 = *((char **)t13);
    t15 = (t0 + 5768);
    t16 = (t15 + 64U);
    t17 = *((char **)t16);
    t18 = (t0 + 6088);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    xsi_vlog_generic_get_array_select_value(t6, 16, t4, t14, t17, 2, 1, t20, 3, 2);
    t21 = (t0 + 4808);
    xsi_vlogvar_assign_value(t21, t6, 0, 0, 16);
    xsi_set_current_line(78, ng16);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 12);
    *((unsigned int *)t6) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 12);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t11 & 15U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 15U);
    t5 = (t0 + 4488);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 4);
    xsi_set_current_line(79, ng16);
    t2 = (t0 + 4488);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng21, 2, t0, (char)118, t4, 4);
    xsi_set_current_line(80, ng16);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB2;

}

static void Always_84_2(char *t0)
{
    char t6[8];
    char t28[8];
    char t29[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
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
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    unsigned int t40;
    int t41;
    char *t42;
    unsigned int t43;
    int t44;
    int t45;
    unsigned int t46;
    unsigned int t47;
    int t48;
    int t49;

LAB0:    t1 = (t0 + 7664U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(84, ng16);
    t2 = (t0 + 8496);
    *((int *)t2) = 1;
    t3 = (t0 + 7696);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(84, ng16);

LAB5:    xsi_set_current_line(85, ng16);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 5448);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(86, ng16);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB9;

LAB6:    if (t16 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t20 = (t6 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(90, ng16);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB17;

LAB14:    if (t16 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t6) = 1;

LAB17:    t20 = (t6 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB18;

LAB19:
LAB20:
LAB12:    goto LAB2;

LAB8:    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(86, ng16);

LAB13:    xsi_set_current_line(87, ng16);
    xsi_vlogfile_write(1, 0, 0, ng22, 1, t0);
    xsi_set_current_line(88, ng16);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB12;

LAB16:    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(90, ng16);

LAB21:    xsi_set_current_line(91, ng16);
    t26 = (t0 + 3768U);
    t27 = *((char **)t26);
    t26 = (t0 + 5768);
    t30 = (t0 + 5768);
    t31 = (t30 + 72U);
    t32 = *((char **)t31);
    t33 = (t0 + 5768);
    t34 = (t33 + 64U);
    t35 = *((char **)t34);
    t36 = (t0 + 6248);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    xsi_vlog_generic_convert_array_indices(t28, t29, t32, t35, 2, 1, t38, 3, 2);
    t39 = (t28 + 4);
    t40 = *((unsigned int *)t39);
    t41 = (!(t40));
    t42 = (t29 + 4);
    t43 = *((unsigned int *)t42);
    t44 = (!(t43));
    t45 = (t41 && t44);
    if (t45 == 1)
        goto LAB22;

LAB23:    xsi_set_current_line(92, ng16);
    Monitor_92_3(t0);
    xsi_set_current_line(100, ng16);
    xsi_vlogfile_write(1, 0, 0, ng23, 1, t0);
    xsi_set_current_line(101, ng16);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB20;

LAB22:    t46 = *((unsigned int *)t28);
    t47 = *((unsigned int *)t29);
    t48 = (t46 - t47);
    t49 = (t48 + 1);
    xsi_vlogvar_assign_value(t26, t27, 0, *((unsigned int *)t29), t49);
    goto LAB23;

}

static void Always_105_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 7912U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(105, ng16);
    t2 = (t0 + 8512);
    *((int *)t2) = 1;
    t3 = (t0 + 7944);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(106, ng16);

LAB5:    xsi_set_current_line(107, ng16);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 5448);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(108, ng16);
    xsi_vlogfile_write(1, 0, 0, ng22, 1, t0);
    xsi_set_current_line(109, ng16);
    xsi_vlogfile_write(1, 0, 0, ng24, 1, t0);
    xsi_set_current_line(110, ng16);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB2;

}

void Monitor_92_3(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 7968);
    t2 = (t0 + 8528);
    xsi_vlogfile_monitor((void *)Monitor_92_3_Func, t1, t2);

LAB1:    return;
}


extern void work_m_00000000001986045543_0249416591_init()
{
	static char *pe[] = {(void *)Initial_50_0,(void *)Always_67_1,(void *)Always_84_2,(void *)Always_105_4,(void *)Monitor_92_3};
	xsi_register_didat("work_m_00000000001986045543_0249416591", "isim/Datapath_Unit_isim_beh.exe.sim/work/m_00000000001986045543_0249416591.didat");
	xsi_register_executes(pe);
}
