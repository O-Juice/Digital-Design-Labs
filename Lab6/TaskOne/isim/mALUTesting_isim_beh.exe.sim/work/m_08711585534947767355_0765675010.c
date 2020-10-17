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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/work/Documents/UC/Freshman/EECE2060C/Labs/Lab6/TaskOne/mALUStructure.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static int ng3[] = {2, 0};
static int ng4[] = {1, 0};
static int ng5[] = {0, 0};
static unsigned int ng6[] = {2U, 0U};
static unsigned int ng7[] = {3U, 0U};



static void Always_29_0(char *t0)
{
    char t8[8];
    char t17[8];
    char t24[8];
    char t42[8];
    char t53[8];
    char t62[8];
    char t78[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    char *t41;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t51;
    char *t52;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    char *t83;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    char *t109;
    int t110;

LAB0:    t1 = (t0 + 3320U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 3640);
    *((int *)t2) = 1;
    t3 = (t0 + 3352);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30, ng0);

LAB5:    xsi_set_current_line(31, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1928);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);

LAB6:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t6 == 1)
        goto LAB13;

LAB14:
LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(36, ng0);

LAB16:    xsi_set_current_line(37, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t0 + 1368U);
    t7 = *((char **)t4);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 4, t5, 3, t7, 3);
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t8, 0, 0, 4);
    xsi_set_current_line(38, ng0);
    t2 = (t0 + 2248);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t8, 0, 8);
    t7 = (t8 + 4);
    t9 = (t5 + 4);
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 3);
    t12 = (t11 & 1);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t9);
    t14 = (t13 >> 3);
    t15 = (t14 & 1);
    *((unsigned int *)t7) = t15;
    t16 = (t0 + 2088);
    xsi_vlogvar_assign_value(t16, t8, 0, 0, 1);
    xsi_set_current_line(39, ng0);
    t2 = (t0 + 2248);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t8, 0, 8);
    t7 = (t8 + 4);
    t9 = (t5 + 4);
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 0);
    *((unsigned int *)t8) = t11;
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 0);
    *((unsigned int *)t7) = t13;
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t14 & 7U);
    t15 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t15 & 7U);
    t16 = (t0 + 1768);
    xsi_vlogvar_assign_value(t16, t8, 0, 0, 3);
    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    memset(t8, 0, 8);
    t2 = (t8 + 4);
    t5 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 2);
    t12 = (t11 & 1);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t5);
    t14 = (t13 >> 2);
    t15 = (t14 & 1);
    *((unsigned int *)t2) = t15;
    t7 = (t0 + 1368U);
    t9 = *((char **)t7);
    memset(t17, 0, 8);
    t7 = (t17 + 4);
    t16 = (t9 + 4);
    t18 = *((unsigned int *)t9);
    t19 = (t18 >> 2);
    t20 = (t19 & 1);
    *((unsigned int *)t17) = t20;
    t21 = *((unsigned int *)t16);
    t22 = (t21 >> 2);
    t23 = (t22 & 1);
    *((unsigned int *)t7) = t23;
    memset(t24, 0, 8);
    t25 = (t8 + 4);
    t26 = (t17 + 4);
    t27 = *((unsigned int *)t8);
    t28 = *((unsigned int *)t17);
    t29 = (t27 ^ t28);
    t30 = *((unsigned int *)t25);
    t31 = *((unsigned int *)t26);
    t32 = (t30 ^ t31);
    t33 = (t29 | t32);
    t34 = *((unsigned int *)t25);
    t35 = *((unsigned int *)t26);
    t36 = (t34 | t35);
    t37 = (~(t36));
    t38 = (t33 & t37);
    if (t38 != 0)
        goto LAB20;

LAB17:    if (t36 != 0)
        goto LAB19;

LAB18:    *((unsigned int *)t24) = 1;

LAB20:    t40 = (t0 + 1208U);
    t41 = *((char **)t40);
    memset(t42, 0, 8);
    t40 = (t42 + 4);
    t43 = (t41 + 4);
    t44 = *((unsigned int *)t41);
    t45 = (t44 >> 2);
    t46 = (t45 & 1);
    *((unsigned int *)t42) = t46;
    t47 = *((unsigned int *)t43);
    t48 = (t47 >> 2);
    t49 = (t48 & 1);
    *((unsigned int *)t40) = t49;
    t50 = (t0 + 1768);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    memset(t53, 0, 8);
    t54 = (t53 + 4);
    t55 = (t52 + 4);
    t56 = *((unsigned int *)t52);
    t57 = (t56 >> 2);
    t58 = (t57 & 1);
    *((unsigned int *)t53) = t58;
    t59 = *((unsigned int *)t55);
    t60 = (t59 >> 2);
    t61 = (t60 & 1);
    *((unsigned int *)t54) = t61;
    memset(t62, 0, 8);
    t63 = (t42 + 4);
    t64 = (t53 + 4);
    t65 = *((unsigned int *)t42);
    t66 = *((unsigned int *)t53);
    t67 = (t65 ^ t66);
    t68 = *((unsigned int *)t63);
    t69 = *((unsigned int *)t64);
    t70 = (t68 ^ t69);
    t71 = (t67 | t70);
    t72 = *((unsigned int *)t63);
    t73 = *((unsigned int *)t64);
    t74 = (t72 | t73);
    t75 = (~(t74));
    t76 = (t71 & t75);
    if (t76 != 0)
        goto LAB22;

LAB21:    if (t74 != 0)
        goto LAB23;

LAB24:    t79 = *((unsigned int *)t24);
    t80 = *((unsigned int *)t62);
    t81 = (t79 & t80);
    *((unsigned int *)t78) = t81;
    t82 = (t24 + 4);
    t83 = (t62 + 4);
    t84 = (t78 + 4);
    t85 = *((unsigned int *)t82);
    t86 = *((unsigned int *)t83);
    t87 = (t85 | t86);
    *((unsigned int *)t84) = t87;
    t88 = *((unsigned int *)t84);
    t89 = (t88 != 0);
    if (t89 == 1)
        goto LAB25;

LAB26:
LAB27:    t109 = (t0 + 1928);
    xsi_vlogvar_assign_value(t109, t78, 0, 0, 1);
    goto LAB15;

LAB9:    xsi_set_current_line(43, ng0);

LAB28:    xsi_set_current_line(44, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t0 + 1168U);
    t7 = (t4 + 72U);
    t9 = *((char **)t7);
    t16 = ((char*)((ng3)));
    xsi_vlog_generic_get_index_select_value(t8, 3, t5, t9, 2, t16, 32, 1);
    t25 = (t0 + 1208U);
    t26 = *((char **)t25);
    t25 = (t0 + 1168U);
    t39 = (t25 + 72U);
    t40 = *((char **)t39);
    t41 = ((char*)((ng4)));
    xsi_vlog_generic_get_index_select_value(t17, 3, t26, t40, 2, t41, 32, 1);
    memset(t24, 0, 8);
    xsi_vlog_unsigned_add(t24, 3, t8, 3, t17, 3);
    t43 = (t0 + 1208U);
    t50 = *((char **)t43);
    t43 = (t0 + 1168U);
    t51 = (t43 + 72U);
    t52 = *((char **)t51);
    t54 = ((char*)((ng5)));
    xsi_vlog_generic_get_index_select_value(t42, 3, t50, t52, 2, t54, 32, 1);
    memset(t53, 0, 8);
    xsi_vlog_unsigned_add(t53, 3, t24, 3, t42, 3);
    t55 = (t0 + 1768);
    xsi_vlogvar_assign_value(t55, t53, 0, 0, 3);
    goto LAB15;

LAB11:    xsi_set_current_line(47, ng0);

LAB29:    xsi_set_current_line(48, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t0 + 1368U);
    t7 = *((char **)t4);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t7);
    t12 = (t10 & t11);
    *((unsigned int *)t8) = t12;
    t4 = (t5 + 4);
    t9 = (t7 + 4);
    t16 = (t8 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t9);
    t15 = (t13 | t14);
    *((unsigned int *)t16) = t15;
    t18 = *((unsigned int *)t16);
    t19 = (t18 != 0);
    if (t19 == 1)
        goto LAB30;

LAB31:
LAB32:    t39 = (t0 + 1768);
    xsi_vlogvar_assign_value(t39, t8, 0, 0, 3);
    goto LAB15;

LAB13:    xsi_set_current_line(51, ng0);

LAB33:    xsi_set_current_line(52, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t0 + 1168U);
    t7 = (t4 + 72U);
    t9 = *((char **)t7);
    t16 = ((char*)((ng3)));
    xsi_vlog_generic_get_index_select_value(t8, 32, t5, t9, 2, t16, 32, 1);
    t25 = (t0 + 2408);
    xsi_vlogvar_assign_value(t25, t8, 0, 0, 32);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_lshift(t8, 3, t4, 3, t2, 32);
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t8, 0, 0, 3);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 2408);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 1768);
    t9 = (t0 + 1768);
    t16 = (t9 + 72U);
    t25 = *((char **)t16);
    t26 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t8, t25, 2, t26, 32, 1);
    t39 = (t8 + 4);
    t10 = *((unsigned int *)t39);
    t6 = (!(t10));
    if (t6 == 1)
        goto LAB34;

LAB35:    goto LAB15;

LAB19:    t39 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB20;

LAB22:    *((unsigned int *)t62) = 1;
    goto LAB24;

LAB23:    t77 = (t62 + 4);
    *((unsigned int *)t62) = 1;
    *((unsigned int *)t77) = 1;
    goto LAB24;

LAB25:    t90 = *((unsigned int *)t78);
    t91 = *((unsigned int *)t84);
    *((unsigned int *)t78) = (t90 | t91);
    t92 = (t24 + 4);
    t93 = (t62 + 4);
    t94 = *((unsigned int *)t24);
    t95 = (~(t94));
    t96 = *((unsigned int *)t92);
    t97 = (~(t96));
    t98 = *((unsigned int *)t62);
    t99 = (~(t98));
    t100 = *((unsigned int *)t93);
    t101 = (~(t100));
    t6 = (t95 & t97);
    t102 = (t99 & t101);
    t103 = (~(t6));
    t104 = (~(t102));
    t105 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t105 & t103);
    t106 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t106 & t104);
    t107 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t107 & t103);
    t108 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t108 & t104);
    goto LAB27;

LAB30:    t20 = *((unsigned int *)t8);
    t21 = *((unsigned int *)t16);
    *((unsigned int *)t8) = (t20 | t21);
    t25 = (t5 + 4);
    t26 = (t7 + 4);
    t22 = *((unsigned int *)t5);
    t23 = (~(t22));
    t27 = *((unsigned int *)t25);
    t28 = (~(t27));
    t29 = *((unsigned int *)t7);
    t30 = (~(t29));
    t31 = *((unsigned int *)t26);
    t32 = (~(t31));
    t102 = (t23 & t28);
    t110 = (t30 & t32);
    t33 = (~(t102));
    t34 = (~(t110));
    t35 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t35 & t33);
    t36 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t36 & t34);
    t37 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t37 & t33);
    t38 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t38 & t34);
    goto LAB32;

LAB34:    xsi_vlogvar_assign_value(t7, t5, 0, *((unsigned int *)t8), 1);
    goto LAB35;

}


extern void work_m_08711585534947767355_0765675010_init()
{
	static char *pe[] = {(void *)Always_29_0};
	xsi_register_didat("work_m_08711585534947767355_0765675010", "isim/mALUTesting_isim_beh.exe.sim/work/m_08711585534947767355_0765675010.didat");
	xsi_register_executes(pe);
}
