function [out1,out2,out3,out4] = massF5(in1,in2,s,ds,t_sym)
%MASSF5
%    [OUT1,OUT2,OUT3,OUT4] = MASSF5(IN1,IN2,S,DS,T_SYM)

%    This function was generated by the Symbolic Math Toolbox version 8.6.
%    10-Mar-2021 20:34:36

f_u3_ = in1(:,51);
g_xsym = in1(:,33);
g_ysym = in1(:,34);
g_zsym = in1(:,35);
l_b2_ = in1(:,37);
q4 = in2(4,:);
q5 = in2(5,:);
q6 = in2(6,:);
q7 = in2(7,:);
q8 = in2(8,:);
q9 = in2(9,:);
q20 = in2(20,:);
q21 = in2(21,:);
q22 = in2(22,:);
q23 = in2(23,:);
q24 = in2(24,:);
r_s11_ = in1(:,8);
r_s12_ = in1(:,9);
sigma_s_ = in1(:,1);
tau_u2_ = in1(:,50);
t2 = f_u3_.*2.0;
t3 = l_b2_.*2.0;
t4 = r_s11_.^2;
t5 = r_s12_.^2;
t6 = s.^2;
t7 = s.^3;
t8 = q4.*s.*2.0;
t9 = q6.*s.*2.0;
t10 = q8.*s.*2.0;
t11 = -l_b2_;
t13 = sqrt(2.0);
t14 = f_u3_./2.0;
t15 = l_b2_./2.0;
t16 = s./2.0;
t17 = tau_u2_./2.0;
t12 = -t3;
t18 = -t5;
t19 = f_u3_+t11;
t20 = q5.*t6.*3.0;
t21 = q7.*t6.*3.0;
t22 = q9.*t6.*3.0;
t23 = -t14;
t24 = t4./4.0;
t25 = t5./4.0;
t26 = (q23.*t6)./2.0;
t27 = (q24.*t7)./2.0;
t28 = t2+t12;
t29 = t19.^2;
t30 = t19.^3;
t31 = q21.*t19.*2.0;
t33 = t4+t18;
t34 = t8+t20;
t35 = t9+t21;
t36 = (q20.*t19)./2.0;
t38 = t10+t22+1.0;
t54 = t24+t25;
t55 = t15+t16+t23;
t32 = -t31;
t37 = q22.*t29.*3.0;
t39 = t29./2.0;
t40 = t30./2.0;
t41 = -t36;
t44 = sigma_s_.*t33.*pi;
t45 = t34.^2;
t46 = t35.^2;
t49 = t16.*t28;
t50 = s.*t29.*(3.0./2.0);
t51 = t38.^2;
t52 = q22.*t30.*(-1.0./2.0);
t42 = -t39;
t43 = -t40;
t47 = q21.*t39;
t48 = q22.*t40;
t53 = -t44;
t56 = q20+t32+t37;
t59 = t44.*t54;
t62 = t45+t46+t51;
t57 = t42+t49;
t58 = t43+t50;
t60 = t16.*t56;
t61 = t53.*t54;
out1 = reshape([t53,0.0,0.0,0.0,0.0,0.0,0.0,t53,0.0,0.0,0.0,0.0,0.0,0.0,t53,0.0,0.0,0.0,0.0,0.0,0.0,t61,0.0,0.0,0.0,0.0,0.0,0.0,t61,0.0,0.0,0.0,0.0,0.0,0.0,t53.*(t4./2.0+t5./2.0)],[6,6]);
if nargout > 1
    t63 = 1.0./t62.^2;
    t64 = 1.0./sqrt(t62);
    t65 = t64.^3;
    t66 = s.*t64.*2.0;
    t67 = t6.*t64.*3.0;
    t68 = t38.*t64;
    t77 = t17+t26+t27+t41+t47+t52+t60;
    t69 = t68+1.0;
    t70 = s.*t51.*t65.*2.0;
    t73 = t6.*t51.*t65.*3.0;
    t78 = cos(t77);
    t79 = sin(t77);
    t71 = -t70;
    t72 = sqrt(t69);
    t76 = -t73;
    t80 = t78.^2;
    t81 = t79.^2;
    t74 = 1.0./t72;
    t82 = t66+t71;
    t83 = t67+t76;
    t75 = t74.^3;
    t84 = s.*t13.*t64.*t74.*t78;
    t85 = s.*t13.*t64.*t74.*t79;
    t86 = t6.*t13.*t64.*t74.*t78.*(3.0./2.0);
    t87 = t6.*t13.*t64.*t74.*t79.*(3.0./2.0);
    t88 = t13.*t34.*t64.*t74.*t78;
    t89 = t13.*t35.*t64.*t74.*t78;
    t90 = t13.*t34.*t64.*t74.*t79;
    t91 = t13.*t35.*t64.*t74.*t79;
    t93 = s.*t13.*t45.*t65.*t74.*t78;
    t94 = s.*t13.*t46.*t65.*t74.*t78;
    t95 = s.*t13.*t45.*t65.*t74.*t79;
    t96 = s.*t13.*t46.*t65.*t74.*t79;
    t111 = t6.*t13.*t45.*t65.*t74.*t78.*(3.0./2.0);
    t112 = t6.*t13.*t46.*t65.*t74.*t78.*(3.0./2.0);
    t113 = t6.*t13.*t45.*t65.*t74.*t79.*(3.0./2.0);
    t114 = t6.*t13.*t46.*t65.*t74.*t79.*(3.0./2.0);
    t119 = s.*t13.*t34.*t35.*t65.*t74.*t78;
    t120 = s.*t13.*t34.*t35.*t65.*t74.*t79;
    t121 = s.*t13.*t34.*t38.*t65.*t74.*t78;
    t122 = s.*t13.*t35.*t38.*t65.*t74.*t78;
    t123 = s.*t13.*t34.*t38.*t65.*t74.*t79;
    t124 = s.*t13.*t35.*t38.*t65.*t74.*t79;
    t132 = t6.*t13.*t34.*t35.*t65.*t74.*t78.*(3.0./2.0);
    t133 = t6.*t13.*t34.*t35.*t65.*t74.*t79.*(3.0./2.0);
    t135 = t6.*t13.*t34.*t38.*t65.*t74.*t78.*(3.0./2.0);
    t136 = t6.*t13.*t35.*t38.*t65.*t74.*t78.*(3.0./2.0);
    t138 = t6.*t13.*t34.*t38.*t65.*t74.*t79.*(3.0./2.0);
    t139 = t6.*t13.*t35.*t38.*t65.*t74.*t79.*(3.0./2.0);
    t92 = -t90;
    t97 = -t93;
    t98 = -t94;
    t99 = -t95;
    t100 = -t96;
    t101 = (t6.*t88)./4.0;
    t102 = (t7.*t88)./4.0;
    t103 = (t6.*t89)./4.0;
    t104 = (t7.*t89)./4.0;
    t105 = (t6.*t90)./4.0;
    t106 = (t7.*t90)./4.0;
    t107 = (t6.*t91)./4.0;
    t108 = (t7.*t91)./4.0;
    t115 = -t111;
    t116 = -t112;
    t117 = -t113;
    t118 = -t114;
    t125 = -t119;
    t126 = -t120;
    t127 = -t123;
    t128 = t13.*t16.*t38.*t45.*t63.*t75.*t78;
    t129 = t13.*t16.*t38.*t46.*t63.*t75.*t78;
    t130 = t13.*t16.*t38.*t45.*t63.*t75.*t79;
    t131 = t13.*t16.*t38.*t46.*t63.*t75.*t79;
    t134 = -t132;
    t137 = -t133;
    t140 = t6.*t13.*t38.*t45.*t63.*t75.*t78.*(3.0./4.0);
    t141 = t6.*t13.*t38.*t46.*t63.*t75.*t78.*(3.0./4.0);
    t142 = t6.*t13.*t38.*t45.*t63.*t75.*t79.*(3.0./4.0);
    t143 = t6.*t13.*t38.*t46.*t63.*t75.*t79.*(3.0./4.0);
    t144 = -t138;
    t145 = (t55.*t88)./2.0;
    t146 = (t55.*t89)./2.0;
    t147 = (t55.*t90)./2.0;
    t148 = (t55.*t91)./2.0;
    t150 = t13.*t16.*t34.*t35.*t38.*t63.*t75.*t78;
    t151 = t13.*t16.*t34.*t35.*t38.*t63.*t75.*t79;
    t152 = s.*t13.*t34.*t35.*t38.*t63.*t75.*t78.*(-1.0./2.0);
    t153 = s.*t13.*t34.*t35.*t38.*t63.*t75.*t79.*(-1.0./2.0);
    t154 = t6.*t13.*t34.*t35.*t38.*t63.*t75.*t78.*(3.0./4.0);
    t155 = t6.*t13.*t34.*t35.*t38.*t63.*t75.*t79.*(3.0./4.0);
    t158 = t88.*(t39-t49).*(-1.0./2.0);
    t159 = t89.*(t39-t49).*(-1.0./2.0);
    t160 = t88.*(t40-t50).*(-1.0./2.0);
    t161 = t89.*(t40-t50).*(-1.0./2.0);
    t162 = t90.*(t39-t49).*(-1.0./2.0);
    t163 = t91.*(t39-t49).*(-1.0./2.0);
    t164 = t90.*(t40-t50).*(-1.0./2.0);
    t165 = t91.*(t40-t50).*(-1.0./2.0);
    t166 = (t90.*(t39-t49))./2.0;
    t167 = (t90.*(t40-t50))./2.0;
    t168 = (t13.*t34.*t64.*t75.*t78.*t82)./4.0;
    t169 = (t13.*t35.*t64.*t75.*t78.*t82)./4.0;
    t170 = (t13.*t34.*t64.*t75.*t79.*t82)./4.0;
    t171 = (t13.*t35.*t64.*t75.*t79.*t82)./4.0;
    t173 = (t13.*t34.*t64.*t75.*t78.*t83)./4.0;
    t174 = (t13.*t35.*t64.*t75.*t78.*t83)./4.0;
    t175 = (t13.*t34.*t64.*t75.*t79.*t83)./4.0;
    t176 = (t13.*t35.*t64.*t75.*t79.*t83)./4.0;
    t178 = t88+t91;
    t109 = -t105;
    t110 = -t106;
    t149 = -t147;
    t156 = -t154;
    t157 = -t155;
    t172 = -t170;
    t177 = -t175;
    t179 = t89+t92;
    t180 = t101+t107;
    t181 = t102+t108;
    t184 = t145+t148;
    t186 = t158+t163;
    t187 = t160+t165;
    t188 = t159+t166;
    t189 = t161+t167;
    t190 = t121+t124+t168+t171;
    t192 = t84+t98+t120+t129+t153;
    t193 = t85+t99+t119+t130+t152;
    t194 = t84+t97+t126+t128+t151;
    t195 = t85+t100+t125+t131+t150;
    t196 = t135+t139+t173+t176;
    t198 = t86+t115+t137+t140+t155;
    t201 = t87+t118+t134+t143+t154;
    t182 = t103+t109;
    t183 = t104+t110;
    t185 = t146+t149;
    t191 = t122+t127+t169+t172;
    t197 = t136+t144+t174+t177;
    t199 = t86+t116+t133+t141+t157;
    t200 = t87+t117+t132+t142+t156;
    out2 = reshape([0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,t6,0.0,0.0,t121.*t179.*(-1.0./2.0)+t13.*t72.*t78.*t193+t13.*t72.*t79.*t194+t13.*t16.*t34.*t38.*t65.*t74.*t79.*t178,t13.*t72.*t78.*t194-t13.*t72.*t79.*t193+t13.*t16.*t34.*t38.*t65.*t74.*t78.*t178+t13.*t16.*t34.*t38.*t65.*t74.*t79.*t179,t178.*t193+t179.*t194,t7,0.0,0.0,t13.*t72.*t79.*t198+t13.*t72.*t78.*t200-t6.*t13.*t34.*t38.*t65.*t74.*t78.*t179.*(3.0./4.0)+t6.*t13.*t34.*t38.*t65.*t74.*t79.*t178.*(3.0./4.0),t13.*t72.*t78.*t198-t13.*t72.*t79.*t200+t6.*t13.*t34.*t38.*t65.*t74.*t78.*t178.*(3.0./4.0)+t6.*t13.*t34.*t38.*t65.*t74.*t79.*t179.*(3.0./4.0),t179.*t198+t178.*t200,0.0,t6,0.0,t122.*t179.*(-1.0./2.0)-t13.*t72.*t78.*t192+t13.*t72.*t79.*t195+t13.*t16.*t35.*t38.*t65.*t74.*t79.*t178,t13.*t72.*t79.*t192+t13.*t72.*t78.*t195+t13.*t16.*t35.*t38.*t65.*t74.*t78.*t178+t13.*t16.*t35.*t38.*t65.*t74.*t79.*t179,-t178.*t192+t179.*t195,0.0,t7,0.0,-t13.*t72.*t78.*t199+t13.*t72.*t79.*t201-t6.*t13.*t35.*t38.*t65.*t74.*t78.*t179.*(3.0./4.0)+t6.*t13.*t35.*t38.*t65.*t74.*t79.*t178.*(3.0./4.0),t13.*t72.*t79.*t199+t13.*t72.*t78.*t201+t6.*t13.*t35.*t38.*t65.*t74.*t78.*t178.*(3.0./4.0)+t6.*t13.*t35.*t38.*t65.*t74.*t79.*t179.*(3.0./4.0),-t178.*t199+t179.*t201,0.0,0.0,t6,t13.*t72.*t78.*t191-t13.*t72.*t79.*t190+(t13.*t74.*t78.*t82.*t179)./4.0-(t13.*t74.*t79.*t82.*t178)./4.0,-t13.*t72.*t78.*t190-t13.*t72.*t79.*t191-(t13.*t74.*t78.*t82.*t178)./4.0-(t13.*t74.*t79.*t82.*t179)./4.0,t178.*t191-t179.*t190,0.0,0.0,t7,t13.*t72.*t78.*t197-t13.*t72.*t79.*t196+(t13.*t74.*t78.*t83.*t179)./4.0-(t13.*t74.*t79.*t83.*t178)./4.0,-t13.*t72.*t78.*t196-t13.*t72.*t79.*t197-(t13.*t74.*t78.*t83.*t178)./4.0-(t13.*t74.*t79.*t83.*t179)./4.0,t178.*t197-t179.*t196,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,t13.*t72.*t78.*t184+t13.*t72.*t79.*t185-(t13.*t55.*t72.*t78.*t178)./2.0-(t13.*t55.*t72.*t79.*t179)./2.0,t13.*t72.*t78.*t185-t13.*t72.*t79.*t184-(t13.*t55.*t72.*t78.*t179)./2.0+(t13.*t55.*t72.*t79.*t178)./2.0,t178.*t184+t179.*t185+t55.*t69.*t80+t55.*t69.*t81,0.0,0.0,0.0,t13.*t72.*t79.*(t162+(t89.*(t39-t49))./2.0)+t13.*t72.*t78.*((t88.*(t39-t49))./2.0+(t91.*(t39-t49))./2.0)-(t13.*t72.*t78.*t178.*(t39-t49))./2.0-(t13.*t72.*t79.*t179.*(t39-t49))./2.0,t13.*t72.*t78.*(t162+(t89.*(t39-t49))./2.0)-t13.*t72.*t79.*((t88.*(t39-t49))./2.0+(t91.*(t39-t49))./2.0)-(t13.*t72.*t78.*t179.*(t39-t49))./2.0+(t13.*t72.*t79.*t178.*(t39-t49))./2.0,t179.*(t162+(t89.*(t39-t49))./2.0)+t178.*((t88.*(t39-t49))./2.0+(t91.*(t39-t49))./2.0)+t69.*t80.*(t39-t49)+t69.*t81.*(t39-t49),0.0,0.0,0.0,-t13.*t72.*t79.*(t164+(t89.*(t40-t50))./2.0)-t13.*t72.*t78.*((t88.*(t40-t50))./2.0+(t91.*(t40-t50))./2.0)+(t13.*t72.*t78.*t178.*(t40-t50))./2.0+(t13.*t72.*t79.*t179.*(t40-t50))./2.0,-t13.*t72.*t78.*(t164+(t89.*(t40-t50))./2.0)+t13.*t72.*t79.*((t88.*(t40-t50))./2.0+(t91.*(t40-t50))./2.0)+(t13.*t72.*t78.*t179.*(t40-t50))./2.0-(t13.*t72.*t79.*t178.*(t40-t50))./2.0,-t179.*(t164+(t89.*(t40-t50))./2.0)-t178.*((t88.*(t40-t50))./2.0+(t91.*(t40-t50))./2.0)-t69.*t80.*(t40-t50)-t69.*t81.*(t40-t50),0.0,0.0,0.0,t13.*t72.*t78.*t180+t13.*t72.*t79.*t182-(t6.*t13.*t72.*t78.*t178)./4.0-(t6.*t13.*t72.*t79.*t179)./4.0,-t13.*t72.*t79.*t180+t13.*t72.*t78.*t182-(t6.*t13.*t72.*t78.*t179)./4.0+(t6.*t13.*t72.*t79.*t178)./4.0,t178.*t180+t179.*t182+(t6.*t69.*t80)./2.0+(t6.*t69.*t81)./2.0,0.0,0.0,0.0,t13.*t72.*t78.*t181+t13.*t72.*t79.*t183-(t7.*t13.*t72.*t78.*t178)./4.0-(t7.*t13.*t72.*t79.*t179)./4.0,-t13.*t72.*t79.*t181+t13.*t72.*t78.*t183-(t7.*t13.*t72.*t78.*t179)./4.0+(t7.*t13.*t72.*t79.*t178)./4.0,t178.*t181+t179.*t183+(t7.*t69.*t80)./2.0+(t7.*t69.*t81)./2.0],[6,24]);
end
if nargout > 2
    out3 = reshape([0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0],[6,24]);
end
if nargout > 3
    out4 = [g_xsym;g_ysym;g_zsym;0.0;0.0;0.0];
end
