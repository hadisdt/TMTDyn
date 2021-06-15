function [out1,out2,out3,out4] = massF2(in1,in2,s)
%MASSF2
%    [OUT1,OUT2,OUT3,OUT4] = MASSF2(IN1,IN2,S)

%    This function was generated by the Symbolic Math Toolbox version 8.0.
%    30-Jan-2019 17:33:24

g_xsym = in1(:,13);
g_ysym = in1(:,14);
g_zsym = in1(:,15);
l_s_sym = in1(:,5);
lambda_sym = in1(:,34);
q4 = in2(:,4);
q5 = in2(:,5);
q6 = in2(:,6);
q7 = in2(:,7);
q8 = in2(:,8);
q9 = in2(:,9);
q10 = in2(:,10);
q11 = in2(:,11);
q12 = in2(:,12);
r_p1_sym = in1(:,19);
r_s1_sym = in1(:,3);
r_s2_sym = in1(:,4);
sigma_s_sym = in1(:,1);
u4 = in2(:,22);
u5 = in2(:,23);
u6 = in2(:,24);
u7 = in2(:,25);
u8 = in2(:,26);
u9 = in2(:,27);
u10 = in2(:,28);
u11 = in2(:,29);
u12 = in2(:,30);
t2 = r_p1_sym.^2;
t3 = t2.*6.0;
t4 = r_s1_sym.^2;
t5 = r_s2_sym.^2;
t6 = t3+t4-t5;
t7 = 1.0./lambda_sym;
t8 = t4.*3.0;
t9 = t5.*3.0;
t10 = t8+t9;
t11 = t7.*t10.*(1.0./1.2e1);
t12 = l_s_sym.^2;
t13 = lambda_sym.^2;
t14 = t12.*t13.*(1.0./1.08e2);
t15 = t11+t14;
t16 = t4-t5;
out1 = reshape([l_s_sym.*sigma_s_sym.*t6.*pi.*(-1.0./3.0),0.0,0.0,0.0,0.0,0.0,0.0,l_s_sym.*sigma_s_sym.*t6.*pi.*(-1.0./3.0),0.0,0.0,0.0,0.0,0.0,0.0,l_s_sym.*sigma_s_sym.*t6.*pi.*(-1.0./3.0),0.0,0.0,0.0,0.0,0.0,0.0,l_s_sym.*sigma_s_sym.*t15.*t16.*pi.*(-1.0./3.0),0.0,0.0,0.0,0.0,0.0,0.0,l_s_sym.*sigma_s_sym.*t15.*t16.*pi.*(-1.0./3.0),0.0,0.0,0.0,0.0,0.0,0.0,l_s_sym.*sigma_s_sym.*t7.*t16.*pi.*(t4.*(1.0./2.0)+t5.*(1.0./2.0)).*(-1.0./3.0)],[6,6]);
if nargout > 1
    t17 = l_s_sym.*(1.0./3.0);
    t18 = q9+t17;
    t19 = l_s_sym.*(1.0./6.0);
    t20 = q9.*(1.0./2.0);
    t21 = t19+t20;
    t22 = q4.*q8.*(1.0./2.0);
    t23 = q4.*q7.*(1.0./2.0);
    t24 = q5.*q8.*(1.0./2.0);
    t25 = q6.*t18.*(1.0./4.0);
    t26 = q6.*t21.*(1.0./2.0);
    t27 = t23+t24+t25+t26;
    t28 = q4.*q5.*(1.0./2.0);
    t29 = q4.^2;
    t30 = t29.*(1.0./4.0);
    t31 = q5.^2;
    t32 = q6.^2;
    t33 = q4.*t18.*(1.0./4.0);
    t34 = q4.*t21.*(1.0./2.0);
    t35 = q5.*t18.*(1.0./4.0);
    t36 = q5.*t21.*(1.0./2.0);
    t37 = q4.*q6.*(1.0./2.0);
    t38 = q5.*q6.*(1.0./2.0);
    t39 = t31.*(1.0./4.0);
    t40 = q6.*(1.0./2.0);
    t41 = q12.*(1.0./2.0);
    t42 = q4.*q11.*(1.0./4.0);
    t43 = q5.*(1.0./2.0);
    t44 = q11.*(1.0./2.0);
    t45 = q6.*q10.*(1.0./4.0);
    t51 = q4.*q12.*(1.0./4.0);
    t46 = t43+t44+t45-t51;
    t47 = q4.*(1.0./2.0);
    t48 = q10.*(1.0./2.0);
    t49 = q5.*q12.*(1.0./4.0);
    t53 = q6.*q11.*(1.0./4.0);
    t50 = t47+t48+t49-t53;
    t58 = q5.*q10.*(1.0./4.0);
    t52 = t40+t41+t42-t58;
    t54 = q4.*q10.*(1.0./4.0);
    t55 = q5.*q11.*(1.0./4.0);
    t56 = q6.*q12.*(1.0./4.0);
    t57 = t54+t55+t56-1.0;
    t59 = q10.*t46.*(1.0./2.0);
    t60 = q11.*t50.*(1.0./2.0);
    t61 = q10.*t50.*(1.0./2.0);
    t62 = q5.*t50.*(1.0./2.0);
    t63 = q6.*t57.*(1.0./2.0);
    t64 = q4.*t50.*(1.0./2.0);
    t65 = q5.*t46.*(1.0./2.0);
    t66 = q6.*t52.*(1.0./2.0);
    t67 = -t54-t55-t56+t64+t65+t66+1.0;
    t68 = q10.*t52.*(1.0./2.0);
    t69 = q12.*t50.*(1.0./2.0);
    t70 = q11.*t57.*(1.0./2.0);
    t71 = q11.*t52.*(1.0./2.0);
    t72 = q12.*t46.*(1.0./2.0);
    t73 = q11.*t46.*(1.0./2.0);
    t74 = q6.*t50.*(1.0./2.0);
    t75 = q6.*t46.*(1.0./2.0);
    t76 = q4.*t57.*(1.0./2.0);
    out2 = reshape([1.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,t27,-q9-t17-t22+q5.*q7.*(1.0./2.0),q8-t33-t34+q6.*q7.*(1.0./2.0),t61-q4.*q10.*(1.0./4.0)-q5.*q11.*(1.0./4.0)-q6.*q12.*(1.0./4.0)-q11.*t46.*(1.0./2.0)-q12.*t52.*(1.0./2.0)+1.0,-t40-t41-t42+t58+t59+t60+q12.*t57.*(1.0./2.0),t43+t44+t45-t51+t68+t69-t70,q9+t17+t22-q5.*q7.*(1.0./2.0),t27,-q7-t35-t36+q6.*q8.*(1.0./2.0),t40+t41+t42+t59+t60-q5.*q10.*(1.0./4.0)-q12.*t57.*(1.0./2.0),-t54-t55-t56-t61+t73-q12.*t52.*(1.0./2.0)+1.0,-t47-t48-t49+t53+t71+t72+q10.*t57.*(1.0./2.0),-q8+t33+t34-q6.*q7.*(1.0./2.0),q7+t35+t36-q6.*q8.*(1.0./2.0),t27,-t43-t44-t45+t51+t68+t69+t70,t47+t48+t49-t53+t71+t72-q10.*t57.*(1.0./2.0),-t54-t55-t56-t61-t73+q12.*t52.*(1.0./2.0)+1.0,t30-t31.*(1.0./4.0)-t32.*(1.0./4.0)+1.0,q6+t28,-q5+t37,0.0,0.0,0.0,-q6+t28,-t30-t32.*(1.0./4.0)+t39+1.0,q4+t38,0.0,0.0,0.0,q5+t37,-q4+t38,-t30+t32.*(1.0./4.0)-t39+1.0,0.0,0.0,0.0,0.0,0.0,0.0,t67,-t40-t41-t42+t58-t62-t63+q4.*t46.*(1.0./2.0),t43+t44+t45-t51-t74+q4.*t52.*(1.0./2.0)+q5.*t57.*(1.0./2.0),0.0,0.0,0.0,t40+t41+t42-t58+t62+t63-q4.*t46.*(1.0./2.0),t67,-t47-t48-t49+t53-t75-t76+q5.*t52.*(1.0./2.0),0.0,0.0,0.0,-t43-t44-t45+t51+t74-q4.*t52.*(1.0./2.0)-q5.*t57.*(1.0./2.0),t47+t48+t49-t53+t75+t76-q5.*t52.*(1.0./2.0),t67,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0],[6,18]);
end
if nargout > 2
    t77 = q4.*u8.*(1.0./2.0);
    t78 = q8.*u4.*(1.0./2.0);
    t79 = q4.*u7.*(1.0./2.0);
    t80 = q7.*u4.*(1.0./2.0);
    t81 = q5.*u8.*(1.0./2.0);
    t82 = q8.*u5.*(1.0./2.0);
    t83 = q6.*u9.*(1.0./2.0);
    t84 = t21.*u6;
    t85 = t79+t80+t81+t82+t83+t84;
    t86 = q4.*u5.*(1.0./2.0);
    t87 = q5.*u4.*(1.0./2.0);
    t88 = q4.*u4.*(1.0./2.0);
    t89 = q4.*u9.*(1.0./2.0);
    t90 = t21.*u4;
    t91 = q5.*u9.*(1.0./2.0);
    t92 = t21.*u5;
    t93 = q4.*u6.*(1.0./2.0);
    t94 = q6.*u4.*(1.0./2.0);
    t95 = q5.*u6.*(1.0./2.0);
    t96 = q6.*u5.*(1.0./2.0);
    t97 = q5.*u5.*(1.0./2.0);
    t128 = q10.*q12.*(1.0./4.0);
    t98 = t44-t128;
    t99 = q10.*q11.*(1.0./4.0);
    t100 = t41+t99;
    t101 = q10.^2;
    t102 = t101.*(1.0./8.0);
    t103 = q11.^2;
    t104 = q12.^2;
    t110 = t103.*(1.0./8.0);
    t111 = t104.*(1.0./8.0);
    t105 = t102-t110-t111+1.0./2.0;
    t106 = t29.*(1.0./8.0);
    t107 = t31.*(1.0./8.0);
    t108 = t32.*(1.0./8.0);
    t109 = t106+t107+t108+1.0./2.0;
    t112 = q11.*q12.*(1.0./4.0);
    t113 = t48+t112;
    t114 = t41-t99;
    t115 = t102-t110+t111-1.0./2.0;
    t116 = t43+t44+t45;
    t117 = t47+t48-t53;
    t118 = t117.*u5;
    t119 = t54+t55-1.0;
    t120 = t119.*u6;
    t121 = t48+t49-t53;
    t122 = t121.*u4;
    t123 = t44+t45-t51;
    t124 = t123.*u5;
    t125 = t41+t42-t58;
    t126 = t125.*u6;
    t127 = t122+t124+t126;
    t129 = t102+t110-t111-1.0./2.0;
    t130 = t48-t112;
    t131 = t44+t128;
    t132 = t40+t41-t58;
    t133 = t47+t48+t49;
    t134 = t133.*u6;
    t135 = t54+t56-1.0;
    t136 = t109.*u11;
    t137 = t40+t41+t42;
    t138 = t43+t44-t51;
    t139 = t138.*u6;
    t140 = t55+t56-1.0;
    t141 = t140.*u4;
    out3 = reshape([0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,t85,-t77-t78-u9+q5.*u7.*(1.0./2.0)+q7.*u5.*(1.0./2.0),-t89-t90+u8+q6.*u7.*(1.0./2.0)+q7.*u6.*(1.0./2.0),q4.*u10.*(1.0./2.0)+t98.*u5+t100.*u6-q4.*q11.*u12.*(1.0./4.0)+q4.*q12.*u11.*(1.0./4.0),q4.*u11.*(1.0./2.0)-t113.*u5-t115.*u6+q4.*q10.*u12.*(1.0./4.0)-q4.*q12.*u10.*(1.0./4.0),q4.*u12.*(1.0./2.0)+t129.*u5-t130.*u6-q4.*q10.*u11.*(1.0./4.0)+q4.*q11.*u10.*(1.0./4.0),t77+t78+u9-q5.*u7.*(1.0./2.0)-q7.*u5.*(1.0./2.0),t85,-t91-t92-u7+q6.*u8.*(1.0./2.0)+q8.*u6.*(1.0./2.0),q5.*u10.*(1.0./2.0)-t98.*u4-t105.*u6-q5.*q11.*u12.*(1.0./4.0)+q5.*q12.*u11.*(1.0./4.0),q5.*u11.*(1.0./2.0)+t113.*u4+t114.*u6+q5.*q10.*u12.*(1.0./4.0)-q5.*q12.*u10.*(1.0./4.0),q5.*u12.*(1.0./2.0)-t129.*u4-t131.*u6-q5.*q10.*u11.*(1.0./4.0)+q5.*q11.*u10.*(1.0./4.0),t89+t90-u8-q6.*u7.*(1.0./2.0)-q7.*u6.*(1.0./2.0),t91+t92+u7-q6.*u8.*(1.0./2.0)-q8.*u6.*(1.0./2.0),t85,q6.*u10.*(1.0./2.0)-t100.*u4+t105.*u5-q6.*q11.*u12.*(1.0./4.0)+q6.*q12.*u11.*(1.0./4.0),q6.*u11.*(1.0./2.0)-t114.*u5+t115.*u4+q6.*q10.*u12.*(1.0./4.0)-q6.*q12.*u10.*(1.0./4.0),q6.*u12.*(1.0./2.0)+t130.*u4+t131.*u5-q6.*q10.*u11.*(1.0./4.0)+q6.*q11.*u10.*(1.0./4.0),t88-q5.*u5.*(1.0./2.0)-q6.*u6.*(1.0./2.0),t86+t87+u6,t93+t94-u5,0.0,0.0,0.0,t86+t87-u6,-t88+t97-q6.*u6.*(1.0./2.0),t95+t96+u4,0.0,0.0,0.0,t93+t94+u5,t95+t96-u4,-t88-t97+q6.*u6.*(1.0./2.0),0.0,0.0,0.0,0.0,0.0,0.0,t127,-t118-t120+t116.*u4+t109.*u12,-t134-t136+t132.*u4+t135.*u5,0.0,0.0,0.0,t118+t120-t116.*u4-t109.*u12,t127,-t139-t141+t109.*u10+t137.*u5,0.0,0.0,0.0,t134+t136-t132.*u4-t135.*u5,t139+t141-t109.*u10-t137.*u5,t127,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0],[6,18]);
end
if nargout > 3
    out4 = [g_xsym;g_ysym;g_zsym;0.0;0.0;0.0];
end
