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
static const char *ng0 = "E:/Spring 2016/CA/project1/00000000/project1/sorting_part.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {2, 0};
static int ng4[] = {3, 0};
static int ng5[] = {4, 0};



static void Always_38_0(char *t0)
{
    char t6[8];
    char t7[8];
    char t44[8];
    char t49[8];
    char t53[8];
    char t56[8];
    char t91[8];
    char t102[8];
    char t103[8];
    char t114[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    int t17;
    char *t18;
    unsigned int t19;
    int t20;
    int t21;
    unsigned int t22;
    unsigned int t23;
    int t24;
    int t25;
    unsigned int t26;
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
    char *t42;
    char *t43;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t50;
    char *t51;
    char *t52;
    char *t54;
    char *t55;
    char *t57;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    char *t88;
    char *t89;
    char *t90;
    char *t92;
    char *t93;
    char *t94;
    char *t95;
    char *t96;
    char *t97;
    char *t98;
    char *t99;
    char *t100;
    char *t101;
    char *t104;
    char *t105;
    char *t106;
    char *t107;
    char *t108;
    char *t109;
    char *t110;
    char *t111;
    char *t112;
    char *t113;
    char *t115;
    unsigned int t116;
    char *t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    int t121;
    int t122;

LAB0:    t1 = (t0 + 4448U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 4768);
    *((int *)t2) = 1;
    t3 = (t0 + 4480);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(39, ng0);

LAB5:    xsi_set_current_line(40, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t0 + 3208);
    t8 = (t0 + 3208);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 3208);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t6, t7, t10, t13, 2, 1, t14, 32, 1);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t7 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (!(t19));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 3208);
    t4 = (t0 + 3208);
    t5 = (t4 + 72U);
    t8 = *((char **)t5);
    t9 = (t0 + 3208);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t6, t7, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t6 + 4);
    t16 = *((unsigned int *)t13);
    t17 = (!(t16));
    t14 = (t7 + 4);
    t19 = *((unsigned int *)t14);
    t20 = (!(t19));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB8;

LAB9:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t0 + 3208);
    t4 = (t0 + 3208);
    t5 = (t4 + 72U);
    t8 = *((char **)t5);
    t9 = (t0 + 3208);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng3)));
    xsi_vlog_generic_convert_array_indices(t6, t7, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t6 + 4);
    t16 = *((unsigned int *)t13);
    t17 = (!(t16));
    t14 = (t7 + 4);
    t19 = *((unsigned int *)t14);
    t20 = (!(t19));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t0 + 3208);
    t4 = (t0 + 3208);
    t5 = (t4 + 72U);
    t8 = *((char **)t5);
    t9 = (t0 + 3208);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng4)));
    xsi_vlog_generic_convert_array_indices(t6, t7, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t6 + 4);
    t16 = *((unsigned int *)t13);
    t17 = (!(t16));
    t14 = (t7 + 4);
    t19 = *((unsigned int *)t14);
    t20 = (!(t19));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB12;

LAB13:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t16 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t2);
    t22 = (t16 ^ t19);
    t23 = *((unsigned int *)t4);
    t26 = *((unsigned int *)t5);
    t27 = (t23 ^ t26);
    t28 = (t22 | t27);
    t29 = *((unsigned int *)t4);
    t30 = *((unsigned int *)t5);
    t31 = (t29 | t30);
    t32 = (~(t31));
    t33 = (t28 & t32);
    if (t33 != 0)
        goto LAB15;

LAB14:    if (t31 != 0)
        goto LAB16;

LAB17:    t9 = (t6 + 4);
    t34 = *((unsigned int *)t9);
    t35 = (~(t34));
    t36 = *((unsigned int *)t6);
    t37 = (t36 & t35);
    t38 = (t37 != 0);
    if (t38 > 0)
        goto LAB18;

LAB19:
LAB20:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3208);
    t8 = (t5 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 3208);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t6, 4, t4, t9, t12, 2, 1, t13, 32, 1);
    t14 = (t0 + 2248);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 4);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3208);
    t8 = (t5 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 3208);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng2)));
    xsi_vlog_generic_get_array_select_value(t6, 4, t4, t9, t12, 2, 1, t13, 32, 1);
    t14 = (t0 + 2408);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 4);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3208);
    t8 = (t5 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 3208);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t6, 4, t4, t9, t12, 2, 1, t13, 32, 1);
    t14 = (t0 + 2568);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 4);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3208);
    t8 = (t5 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 3208);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng4)));
    xsi_vlog_generic_get_array_select_value(t6, 4, t4, t9, t12, 2, 1, t13, 32, 1);
    t14 = (t0 + 2728);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 4);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB2;

LAB6:    t22 = *((unsigned int *)t6);
    t23 = *((unsigned int *)t7);
    t24 = (t22 - t23);
    t25 = (t24 + 1);
    xsi_vlogvar_assign_value(t4, t5, 0, *((unsigned int *)t7), t25);
    goto LAB7;

LAB8:    t22 = *((unsigned int *)t6);
    t23 = *((unsigned int *)t7);
    t24 = (t22 - t23);
    t25 = (t24 + 1);
    xsi_vlogvar_assign_value(t2, t3, 0, *((unsigned int *)t7), t25);
    goto LAB9;

LAB10:    t22 = *((unsigned int *)t6);
    t23 = *((unsigned int *)t7);
    t24 = (t22 - t23);
    t25 = (t24 + 1);
    xsi_vlogvar_assign_value(t2, t3, 0, *((unsigned int *)t7), t25);
    goto LAB11;

LAB12:    t22 = *((unsigned int *)t6);
    t23 = *((unsigned int *)t7);
    t24 = (t22 - t23);
    t25 = (t24 + 1);
    xsi_vlogvar_assign_value(t2, t3, 0, *((unsigned int *)t7), t25);
    goto LAB13;

LAB15:    *((unsigned int *)t6) = 1;
    goto LAB17;

LAB16:    t8 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(45, ng0);

LAB21:    xsi_set_current_line(46, ng0);
    xsi_set_current_line(46, ng0);
    t10 = ((char*)((ng2)));
    t11 = (t0 + 3368);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 32);

LAB22:    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t8 = (t6 + 4);
    t16 = *((unsigned int *)t8);
    t19 = (~(t16));
    t22 = *((unsigned int *)t6);
    t23 = (t22 & t19);
    t26 = (t23 != 0);
    if (t26 > 0)
        goto LAB23;

LAB24:    goto LAB20;

LAB23:    xsi_set_current_line(47, ng0);

LAB25:    xsi_set_current_line(48, ng0);
    t9 = (t0 + 3208);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t0 + 3208);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = (t0 + 3208);
    t18 = (t15 + 64U);
    t39 = *((char **)t18);
    t40 = (t0 + 3368);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    xsi_vlog_generic_get_array_select_value(t7, 4, t11, t14, t39, 2, 1, t42, 32, 1);
    t43 = (t0 + 3048);
    xsi_vlogvar_assign_value(t43, t7, 0, 0, 4);
    xsi_set_current_line(49, ng0);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_minus(t6, 32, t4, 32, t5, 32);
    t8 = (t0 + 3528);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 32);

LAB26:    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_signed_greatereq(t6, 32, t4, 32, t5, 32);
    memset(t7, 0, 8);
    t8 = (t6 + 4);
    t16 = *((unsigned int *)t8);
    t19 = (~(t16));
    t22 = *((unsigned int *)t6);
    t23 = (t22 & t19);
    t26 = (t23 & 1U);
    if (t26 != 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t8) != 0)
        goto LAB29;

LAB30:    t10 = (t7 + 4);
    t27 = *((unsigned int *)t7);
    t28 = *((unsigned int *)t10);
    t29 = (t27 || t28);
    if (t29 > 0)
        goto LAB31;

LAB32:    memcpy(t56, t7, 8);

LAB33:    t82 = (t56 + 4);
    t83 = *((unsigned int *)t82);
    t84 = (~(t83));
    t85 = *((unsigned int *)t56);
    t86 = (t85 & t84);
    t87 = (t86 != 0);
    if (t87 > 0)
        goto LAB46;

LAB47:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3208);
    t8 = (t0 + 3208);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 3208);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = (t0 + 3528);
    t15 = (t14 + 56U);
    t18 = *((char **)t15);
    t39 = ((char*)((ng2)));
    memset(t44, 0, 8);
    xsi_vlog_signed_add(t44, 32, t18, 32, t39, 32);
    xsi_vlog_generic_convert_array_indices(t6, t7, t10, t13, 2, 1, t44, 32, 1);
    t40 = (t6 + 4);
    t16 = *((unsigned int *)t40);
    t17 = (!(t16));
    t41 = (t7 + 4);
    t19 = *((unsigned int *)t41);
    t20 = (!(t19));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB51;

LAB52:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t8 = (t0 + 3368);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 32);
    goto LAB22;

LAB27:    *((unsigned int *)t7) = 1;
    goto LAB30;

LAB29:    t9 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB30;

LAB31:    t11 = (t0 + 3048);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t0 + 3208);
    t15 = (t14 + 56U);
    t18 = *((char **)t15);
    t39 = (t0 + 3208);
    t40 = (t39 + 72U);
    t41 = *((char **)t40);
    t42 = (t0 + 3208);
    t43 = (t42 + 64U);
    t45 = *((char **)t43);
    t46 = (t0 + 3528);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    xsi_vlog_generic_get_array_select_value(t44, 4, t18, t41, t45, 2, 1, t48, 32, 1);
    memset(t49, 0, 8);
    t50 = (t13 + 4);
    if (*((unsigned int *)t50) != 0)
        goto LAB35;

LAB34:    t51 = (t44 + 4);
    if (*((unsigned int *)t51) != 0)
        goto LAB35;

LAB38:    if (*((unsigned int *)t13) < *((unsigned int *)t44))
        goto LAB36;

LAB37:    memset(t53, 0, 8);
    t54 = (t49 + 4);
    t30 = *((unsigned int *)t54);
    t31 = (~(t30));
    t32 = *((unsigned int *)t49);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t54) != 0)
        goto LAB41;

LAB42:    t35 = *((unsigned int *)t7);
    t36 = *((unsigned int *)t53);
    t37 = (t35 & t36);
    *((unsigned int *)t56) = t37;
    t57 = (t7 + 4);
    t58 = (t53 + 4);
    t59 = (t56 + 4);
    t38 = *((unsigned int *)t57);
    t60 = *((unsigned int *)t58);
    t61 = (t38 | t60);
    *((unsigned int *)t59) = t61;
    t62 = *((unsigned int *)t59);
    t63 = (t62 != 0);
    if (t63 == 1)
        goto LAB43;

LAB44:
LAB45:    goto LAB33;

LAB35:    t52 = (t49 + 4);
    *((unsigned int *)t49) = 1;
    *((unsigned int *)t52) = 1;
    goto LAB37;

LAB36:    *((unsigned int *)t49) = 1;
    goto LAB37;

LAB39:    *((unsigned int *)t53) = 1;
    goto LAB42;

LAB41:    t55 = (t53 + 4);
    *((unsigned int *)t53) = 1;
    *((unsigned int *)t55) = 1;
    goto LAB42;

LAB43:    t64 = *((unsigned int *)t56);
    t65 = *((unsigned int *)t59);
    *((unsigned int *)t56) = (t64 | t65);
    t66 = (t7 + 4);
    t67 = (t53 + 4);
    t68 = *((unsigned int *)t7);
    t69 = (~(t68));
    t70 = *((unsigned int *)t66);
    t71 = (~(t70));
    t72 = *((unsigned int *)t53);
    t73 = (~(t72));
    t74 = *((unsigned int *)t67);
    t75 = (~(t74));
    t17 = (t69 & t71);
    t20 = (t73 & t75);
    t76 = (~(t17));
    t77 = (~(t20));
    t78 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t78 & t76);
    t79 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t79 & t77);
    t80 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t80 & t76);
    t81 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t81 & t77);
    goto LAB45;

LAB46:    xsi_set_current_line(50, ng0);

LAB48:    xsi_set_current_line(51, ng0);
    t88 = (t0 + 3208);
    t89 = (t88 + 56U);
    t90 = *((char **)t89);
    t92 = (t0 + 3208);
    t93 = (t92 + 72U);
    t94 = *((char **)t93);
    t95 = (t0 + 3208);
    t96 = (t95 + 64U);
    t97 = *((char **)t96);
    t98 = (t0 + 3528);
    t99 = (t98 + 56U);
    t100 = *((char **)t99);
    xsi_vlog_generic_get_array_select_value(t91, 4, t90, t94, t97, 2, 1, t100, 32, 1);
    t101 = (t0 + 3208);
    t104 = (t0 + 3208);
    t105 = (t104 + 72U);
    t106 = *((char **)t105);
    t107 = (t0 + 3208);
    t108 = (t107 + 64U);
    t109 = *((char **)t108);
    t110 = (t0 + 3528);
    t111 = (t110 + 56U);
    t112 = *((char **)t111);
    t113 = ((char*)((ng2)));
    memset(t114, 0, 8);
    xsi_vlog_signed_add(t114, 32, t112, 32, t113, 32);
    xsi_vlog_generic_convert_array_indices(t102, t103, t106, t109, 2, 1, t114, 32, 1);
    t115 = (t102 + 4);
    t116 = *((unsigned int *)t115);
    t21 = (!(t116));
    t117 = (t103 + 4);
    t118 = *((unsigned int *)t117);
    t24 = (!(t118));
    t25 = (t21 && t24);
    if (t25 == 1)
        goto LAB49;

LAB50:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_minus(t6, 32, t4, 32, t5, 32);
    t8 = (t0 + 3528);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 32);
    goto LAB26;

LAB49:    t119 = *((unsigned int *)t102);
    t120 = *((unsigned int *)t103);
    t121 = (t119 - t120);
    t122 = (t121 + 1);
    xsi_vlogvar_assign_value(t101, t91, 0, *((unsigned int *)t103), t122);
    goto LAB50;

LAB51:    t22 = *((unsigned int *)t6);
    t23 = *((unsigned int *)t7);
    t24 = (t22 - t23);
    t25 = (t24 + 1);
    xsi_vlogvar_assign_value(t5, t4, 0, *((unsigned int *)t7), t25);
    goto LAB52;

}


extern void work_m_00000000003711620327_0433454861_init()
{
	static char *pe[] = {(void *)Always_38_0};
	xsi_register_didat("work_m_00000000003711620327_0433454861", "isim/test_project1_isim_beh.exe.sim/work/m_00000000003711620327_0433454861.didat");
	xsi_register_executes(pe);
}
