function [out1,out2,out3,out4,out5,out6,out7] = sprdmpF21(in1,in2,s,ds,t_sym)
%SPRDMPF21
%    [OUT1,OUT2,OUT3,OUT4,OUT5,OUT6,OUT7] = SPRDMPF21(IN1,IN2,S,DS,T_SYM)

%    This function was generated by the Symbolic Math Toolbox version 8.6.
%    15-Jun-2021 01:39:25

E_s_ = in1(:,2);
gamma_ = in1(:,21);
l_s_ = in1(:,5);
lambda_ = in1(:,34);
mu_x_ = in1(:,6);
mu_y_ = in1(:,7);
mu_z_ = in1(:,8);
mu_xx_ = in1(:,9);
mu_yy_ = in1(:,10);
mu_zz_ = in1(:,11);
p1_ = in1(:,22);
p2_ = in1(:,23);
p3_ = in1(:,24);
p4_ = in1(:,25);
p5_ = in1(:,26);
p6_ = in1(:,27);
q7 = in2(7,:);
q8 = in2(8,:);
q9 = in2(9,:);
q10 = in2(10,:);
q11 = in2(11,:);
q12 = in2(12,:);
q13 = in2(13,:);
q14 = in2(14,:);
q15 = in2(15,:);
q16 = in2(16,:);
q17 = in2(17,:);
q18 = in2(18,:);
r_o_ = in1(:,20);
r_p1_ = in1(:,19);
r_s1_ = in1(:,3);
r_s2_ = in1(:,4);
u7 = in2(25,:);
u8 = in2(26,:);
u9 = in2(27,:);
u10 = in2(28,:);
u11 = in2(29,:);
u12 = in2(30,:);
u13 = in2(31,:);
u14 = in2(32,:);
u15 = in2(33,:);
u16 = in2(34,:);
u17 = in2(35,:);
u18 = in2(36,:);
t2 = cos(gamma_);
t3 = sin(gamma_);
t4 = lambda_.^2;
t5 = q10.*2.0;
t6 = q11.*2.0;
t7 = q12.*2.0;
t8 = q16.*2.0;
t9 = q17.*2.0;
t10 = q18.*2.0;
t11 = q10.^2;
t12 = q11.^2;
t13 = q12.^2;
t14 = q16.^2;
t15 = q17.^2;
t16 = q18.^2;
t17 = r_o_.^2;
t18 = r_p1_.^2;
t20 = r_s1_.^2;
t21 = r_s2_.^2;
t28 = 1.0./l_s_;
t29 = 1.0./lambda_;
t31 = -q7;
t32 = -q8;
t33 = -q9;
t34 = -q13;
t35 = -q14;
t36 = -q15;
t37 = -q16;
t38 = -q17;
t39 = -q18;
t45 = q10.*q11.*-2.0;
t46 = q10.*q12.*-2.0;
t47 = q11.*q12.*-2.0;
t48 = l_s_./3.0;
t66 = 1.0./sqrt(lambda_);
t67 = sqrt(7.0e+1);
t19 = t18.^2;
t22 = t20.^2;
t23 = t21.^2;
t24 = t2.^2;
t25 = q11.*t5;
t26 = q12.*t5;
t27 = q12.*t6;
t30 = 1.0./t4;
t40 = q10.*t5;
t41 = q11.*t6;
t42 = q12.*t7;
t43 = 1.0./t3.^2;
t49 = -t11;
t50 = t11.*-2.0;
t51 = -t12;
t52 = t12.*-2.0;
t53 = -t13;
t54 = t13.*-2.0;
t55 = -t14;
t56 = -t15;
t57 = -t16;
t58 = -t21;
t60 = q7+t34;
t61 = q8+t35;
t62 = q9+t36;
t63 = q10+t37;
t64 = q11+t38;
t65 = q12+t39;
t44 = t43.^2;
t59 = -t23;
t68 = t4.*t24;
t69 = q10.*t60;
t70 = q11.*t60;
t71 = q10.*t61;
t72 = q12.*t60;
t73 = q11.*t61;
t74 = q10.*t62;
t75 = q12.*t61;
t76 = q11.*t62;
t77 = q12.*t62;
t78 = t6.*t60;
t79 = t5.*t61;
t80 = t7.*t60;
t81 = t5.*t62;
t82 = t7.*t61;
t83 = t6.*t62;
t84 = t20+t58;
t100 = t40+t41-1.0;
t101 = t40+t42-1.0;
t102 = t41+t42-1.0;
t105 = t49+t51+t53+1.0;
t106 = t55+t56+t57+1.0;
t85 = t22+t59;
t86 = -t69;
t87 = -t71;
t88 = t70.*-2.0;
t89 = -t72;
t90 = t71.*-2.0;
t91 = -t73;
t92 = t72.*-2.0;
t93 = t74.*-2.0;
t94 = -t76;
t95 = t75.*-2.0;
t96 = t76.*-2.0;
t97 = -t77;
t98 = t68-1.0;
t103 = t29.*t84;
t110 = sqrt(t105);
t111 = sqrt(t106);
t114 = t69+t73+t77;
t99 = t98.^2;
t104 = t30.*t85;
t107 = t18.*t43.*t98.*6.0;
t112 = 1.0./t110;
t113 = 1.0./t111;
t115 = t110.*2.0;
t116 = t111.*2.0;
t117 = t5.*t110;
t118 = t6.*t110;
t119 = t7.*t110;
t120 = -t111;
t122 = q10.*t110.*-2.0;
t123 = q11.*t110.*-2.0;
t124 = q12.*t110.*-2.0;
t143 = t60.*t110;
t144 = t61.*t110;
t145 = t62.*t110;
t108 = -t107;
t109 = t19.*t44.*t99.*6.0;
t121 = -t116;
t125 = t25.*t112;
t126 = t26.*t112;
t127 = t27.*t112;
t128 = q16.*t5.*t113;
t129 = q17.*t5.*t113;
t130 = q16.*t6.*t113;
t131 = q18.*t5.*t113;
t132 = q17.*t6.*t113;
t133 = q16.*t7.*t113;
t134 = q18.*t6.*t113;
t135 = q17.*t7.*t113;
t136 = q18.*t7.*t113;
t137 = t40.*t112;
t138 = t41.*t112;
t139 = t42.*t112;
t140 = t45.*t112;
t141 = t46.*t112;
t142 = t47.*t112;
t146 = t27+t117;
t147 = t26+t118;
t148 = t25+t119;
t149 = -t143;
t150 = -t144;
t151 = -t145;
t152 = t70.*t112;
t153 = t71.*t112;
t154 = t72.*t112;
t155 = t74.*t112;
t156 = t75.*t112;
t157 = t76.*t112;
t158 = t47+t117;
t159 = t46+t118;
t160 = t45+t119;
t164 = q11.*t69.*t112;
t165 = q12.*t69.*t112;
t167 = q12.*t73.*t112;
t170 = t5.*t63.*t112;
t171 = t6.*t63.*t112;
t172 = t5.*t64.*t112;
t173 = t7.*t63.*t112;
t174 = t6.*t64.*t112;
t175 = t5.*t65.*t112;
t176 = t7.*t64.*t112;
t177 = t6.*t65.*t112;
t178 = t7.*t65.*t112;
t179 = q12.*t86.*t112;
t180 = q11.*t87.*t112;
t181 = q12.*t94.*t112;
t206 = t70+t87+t145;
t207 = t74+t89+t144;
t208 = t75+t94+t143;
t209 = t110+t120;
t161 = t5+t134;
t162 = t6+t133;
t163 = t7+t129;
t166 = q11.*t153;
t168 = q12.*t155;
t169 = q12.*t157;
t182 = t103+t108;
t183 = t60+t156;
t184 = q14+t32+t154;
t185 = t62+t152;
t186 = q13+t31+t157;
t187 = t61+t155;
t188 = q15+t33+t153;
t189 = t104+t109;
t210 = t115+t128;
t211 = t115+t132;
t212 = t115+t136;
t219 = t9+t141+t173;
t220 = t10+t140+t172;
t221 = t8+t142+t177;
t222 = q10.*t112.*t206;
t223 = q10.*t112.*t207;
t224 = q11.*t112.*t206;
t225 = q10.*t112.*t208;
t226 = q11.*t112.*t207;
t227 = q12.*t112.*t206;
t228 = q11.*t112.*t208;
t229 = q12.*t112.*t207;
t230 = q12.*t112.*t208;
t190 = q10.*t183;
t191 = q10.*t186;
t192 = q11.*t184;
t193 = q10.*t187;
t194 = q10.*t188;
t195 = q11.*t185;
t196 = q11.*t186;
t197 = q12.*t183;
t198 = q12.*t184;
t199 = q11.*t187;
t200 = q12.*t185;
t201 = q12.*t188;
t205 = (t189.*pi)./4.0;
t213 = t110.*t183;
t214 = t110.*t184;
t215 = t110.*t185;
t216 = t110.*t186;
t217 = t110.*t187;
t218 = t110.*t188;
t202 = -t194;
t203 = -t196;
t204 = -t198;
t234 = t71+t88+t151+t179+t193+t218+t223;
t235 = t76+t95+t149+t180+t195+t216+t224;
t236 = t72+t93+t150+t181+t197+t214+t230;
t231 = t74+t92+t144+t164+t202+t217+t222;
t232 = t70+t90+t145+t167+t203+t215+t228;
t233 = t75+t96+t143+t168+t204+t213+t229;
out1 = reshape([0.0,0.0,0.0,0.0,0.0,0.0,t102,t45+t124,t159,t86+t91+t97-t199+t201+t225,t232,t236,t52+t54+1.0,t148,t26+t123,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,t160,t101,t47+t122,t234,t86+t91+t97+t191-t200+t226,t233,t25+t124,t50+t54+1.0,t146,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,t46+t123,t158,t100,t231,t235,t86+t91+t97-t190+t192+t227,t147,t27+t122,t50+t52+1.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,t121+t170+t50.*t112,-t10+t140+t171,t219,0.0,0.0,0.0,t210,t163,-t6+t131,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,t220,t121+t174+t52.*t112,-t8+t142+t176,0.0,0.0,0.0,-t7+t130,t211,t161,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,-t9+t141+t175,t221,t121+t178+t54.*t112,0.0,0.0,0.0,t162,-t5+t135,t212],[18,6]);
if nargout > 1
    out2 = [-E_s_.*t28.*t29.*t182.*pi.*(q10.*t114-q11.*t206+q12.*t207+t110.*t208);-E_s_.*t28.*t29.*t182.*pi.*(q11.*t114+q10.*t206-q12.*t208+t110.*t207);E_s_.*t28.*t29.*t182.*pi.*(t48+q12.*t114-q10.*t207+q11.*t208+t110.*t206).*-3.0;E_s_.*t28.*t29.*(t205-t17.*t18.*t29.*t43.*t98.*pi.*3.0).*(q12.*t64.*2.0-t6.*t65+t63.*t115-t5.*t209).*-3.0;E_s_.*t28.*t29.*(t205-t17.*t18.*t29.*t43.*t98.*pi.*3.0).*(q10.*t65.*2.0-t7.*t63+t64.*t115-t6.*t209).*-3.0;-E_s_.*t28.*t29.*((t189.*pi)./2.0-lambda_.*t17.*t18.*t43.*t98.*pi).*(q11.*t63.*2.0-t5.*t64+t65.*t115-t7.*t209)];
end
if nargout > 2
    out3 = [-mu_x_.*(t102.*u7-t102.*u13-t148.*u8+t148.*u14+t159.*u9-t159.*u15+t232.*u11+t236.*u12-u10.*(t114+t199-t201-t225));-mu_y_.*(t101.*u8-t101.*u14-t146.*u9+t146.*u15+t160.*u7-t160.*u13+t234.*u10+t233.*u12-u11.*(t114-t191+t200-t226));-mu_z_.*(t100.*u9-t100.*u15-t147.*u7+t147.*u13+t158.*u8-t158.*u14+t231.*u10+t235.*u11-u12.*(t114+t190-t192-t227));-mu_xx_.*(t163.*u17+t210.*u16+t219.*u12-u18.*(t6-q10.*q18.*t113.*2.0)-u11.*(t10+t125-q11.*t63.*t112.*2.0)-u10.*(t116+t137-q10.*t63.*t112.*2.0));-mu_yy_.*(t161.*u18+t211.*u17+t220.*u10-u16.*(t7-q11.*q16.*t113.*2.0)-u12.*(t8+t127-q12.*t64.*t112.*2.0)-u11.*(t116+t138-q11.*t64.*t112.*2.0));-mu_zz_.*(t162.*u16+t212.*u18+t221.*u11-u17.*(t5-q12.*q17.*t113.*2.0)-u10.*(t9+t126-q10.*t65.*t112.*2.0)-u12.*(t116+t139-q12.*t65.*t112.*2.0))];
end
if nargout > 3
    out4 = [0.0;0.0;-t18.*t43.*t98.*pi.*(p1_+p2_+p3_+p4_+p5_+p6_);p1_.*r_o_.*t18.*t43.*t66.*t98.*pi.*(-2.71e+2./2.89e+2)-p2_.*r_o_.*t18.*t43.*t66.*t98.*pi.*(2.71e+2./2.89e+2)+p3_.*r_o_.*t18.*t43.*t66.*t98.*pi.*1.67999098695029e-1+p4_.*r_o_.*t18.*t43.*t66.*t98.*pi.*7.697171642807495e-1+p5_.*r_o_.*t18.*t43.*t66.*t98.*pi.*7.697171642807493e-1+p6_.*r_o_.*t18.*t43.*t66.*t98.*pi.*1.679990986950289e-1;p3_.*r_o_.*t18.*t43.*t66.*t98.*pi.*9.857871488499218e-1+p4_.*r_o_.*t18.*t43.*t66.*t98.*pi.*6.383850617077452e-1-p5_.*r_o_.*t18.*t43.*t66.*t98.*pi.*6.383850617077454e-1-p6_.*r_o_.*t18.*t43.*t66.*t98.*pi.*9.857871488499218e-1-p1_.*r_o_.*t18.*t43.*t66.*t67.*t98.*pi.*(1.2e+1./2.89e+2)+p2_.*r_o_.*t18.*t43.*t66.*t67.*t98.*pi.*(1.2e+1./2.89e+2);0.0];
end
if nargout > 4
    out5 = zeros(0,0);
end
if nargout > 5
    out6 = 1.0;
end
if nargout > 6
    out7 = -t48+sqrt(t60.^2+t61.^2+t62.^2);
end
