function [out1,out2,out3,out4] = massF3(in1,in2,s)
%MASSF3
%    [OUT1,OUT2,OUT3,OUT4] = MASSF3(IN1,IN2,S)

%    This function was generated by the Symbolic Math Toolbox version 8.0.
%    30-Jan-2019 18:06:34

g_xsym = in1(:,13);
g_ysym = in1(:,14);
g_zsym = in1(:,15);
l_s_sym = in1(:,5);
lambda_sym = in1(:,34);
q16 = in2(:,16);
q17 = in2(:,17);
q18 = in2(:,18);
r_p1_sym = in1(:,19);
r_s1_sym = in1(:,3);
r_s2_sym = in1(:,4);
sigma_s_sym = in1(:,1);
u16 = in2(:,46);
u17 = in2(:,47);
u18 = in2(:,48);
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
t14 = t12.*t13.*(1.0./3.0e2);
t15 = t11+t14;
t16 = t4-t5;
out1 = reshape([l_s_sym.*sigma_s_sym.*t6.*pi.*(-1.0./5.0),0.0,0.0,0.0,0.0,0.0,0.0,l_s_sym.*sigma_s_sym.*t6.*pi.*(-1.0./5.0),0.0,0.0,0.0,0.0,0.0,0.0,l_s_sym.*sigma_s_sym.*t6.*pi.*(-1.0./5.0),0.0,0.0,0.0,0.0,0.0,0.0,l_s_sym.*sigma_s_sym.*t15.*t16.*pi.*(-1.0./5.0),0.0,0.0,0.0,0.0,0.0,0.0,l_s_sym.*sigma_s_sym.*t15.*t16.*pi.*(-1.0./5.0),0.0,0.0,0.0,0.0,0.0,0.0,l_s_sym.*sigma_s_sym.*t7.*t16.*pi.*(t4.*(1.0./2.0)+t5.*(1.0./2.0)).*(-1.0./5.0)],[6,6]);
if nargout > 1
    t17 = q16.^2;
    t18 = q17.^2;
    t19 = q18.^2;
    t20 = -t17-t18-t19+1.0;
    t21 = 1.0./sqrt(t20);
    t22 = q18.*2.0;
    t23 = q16.*q17.*t21.*2.0;
    t24 = sqrt(t20);
    t25 = t24.*2.0;
    t26 = q16.*q18.*t21.*2.0;
    t27 = q16.*2.0;
    t28 = q17.*q18.*t21.*2.0;
    out2 = reshape([0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,0.0,0.0,0.0,t25+t17.*t21.*2.0,-t22+t23,q17.*2.0+t26,0.0,0.0,0.0,t22+t23,t25+t18.*t21.*2.0,-t27+t28,0.0,0.0,0.0,q17.*-2.0+t26,t27+t28,t25+t19.*t21.*2.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0],[6,30]);
end
if nargout > 2
    t29 = 1.0./t20.^(3.0./2.0);
    t30 = q17.*t21.*2.0;
    t31 = q17.*t17.*t29.*2.0;
    t32 = q16.*t21.*2.0;
    t33 = q16.*q17.*q18.*t29.*2.0;
    t34 = q18.*t21.*2.0;
    t35 = q18.*t17.*t29.*2.0;
    t36 = t33+2.0;
    t37 = t30+t31;
    t38 = q16.*t18.*t29.*2.0;
    t39 = t32+t38;
    t40 = t33-2.0;
    t41 = q18.*t18.*t29.*2.0;
    t42 = t34+t35;
    t43 = q16.*t19.*t29.*2.0;
    t44 = t34+t41;
    t45 = q17.*t19.*t29.*2.0;
    t46 = t32+t43;
    t47 = t30+t45;
    out3 = reshape([0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,t37.*u17+t42.*u18+u16.*(t32+q16.*t17.*t29.*2.0),t37.*u16+t36.*u18-u17.*(t32-t38),t40.*u17+t42.*u16-u18.*(t32-t43),0.0,0.0,0.0,t39.*u17+t40.*u18-u16.*(t30-t31),t39.*u16+t44.*u18+u17.*(t30+q17.*t18.*t29.*2.0),t36.*u16+t44.*u17-u18.*(t30-t45),0.0,0.0,0.0,t36.*u17+t46.*u18-u16.*(t34-t35),t40.*u16+t47.*u18-u17.*(t34-t41),t46.*u16+t47.*u17+u18.*(t34+q18.*t19.*t29.*2.0),0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0],[6,30]);
end
if nargout > 3
    out4 = [g_xsym;g_ysym;g_zsym;0.0;0.0;0.0];
end
