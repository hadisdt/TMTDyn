function [out1,out2,out3,out4] = massF2(in1,in2,s)
%MASSF2
%    [OUT1,OUT2,OUT3,OUT4] = MASSF2(IN1,IN2,S)

%    This function was generated by the Symbolic Math Toolbox version 8.0.
%    30-Jan-2019 18:12:43

g_xsym = in1(:,13);
g_ysym = in1(:,14);
g_zsym = in1(:,15);
l_s_sym = in1(:,5);
lambda_sym = in1(:,34);
q10 = in2(:,10);
q11 = in2(:,11);
q12 = in2(:,12);
r_p1_sym = in1(:,19);
r_s1_sym = in1(:,3);
r_s2_sym = in1(:,4);
sigma_s_sym = in1(:,1);
u10 = in2(:,46);
u11 = in2(:,47);
u12 = in2(:,48);
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
t14 = t12.*t13.*(1.0./4.32e2);
t15 = t11+t14;
t16 = t4-t5;
out1 = reshape([l_s_sym.*sigma_s_sym.*t6.*pi.*(-1.0./6.0),0.0,0.0,0.0,0.0,0.0,0.0,l_s_sym.*sigma_s_sym.*t6.*pi.*(-1.0./6.0),0.0,0.0,0.0,0.0,0.0,0.0,l_s_sym.*sigma_s_sym.*t6.*pi.*(-1.0./6.0),0.0,0.0,0.0,0.0,0.0,0.0,l_s_sym.*sigma_s_sym.*t15.*t16.*pi.*(-1.0./6.0),0.0,0.0,0.0,0.0,0.0,0.0,l_s_sym.*sigma_s_sym.*t15.*t16.*pi.*(-1.0./6.0),0.0,0.0,0.0,0.0,0.0,0.0,l_s_sym.*sigma_s_sym.*t7.*t16.*pi.*(t4.*(1.0./2.0)+t5.*(1.0./2.0)).*(-1.0./6.0)],[6,6]);
if nargout > 1
    t17 = q10.^2;
    t18 = q11.^2;
    t19 = q12.^2;
    t20 = -t17-t18-t19+1.0;
    t21 = 1.0./sqrt(t20);
    t22 = q12.*2.0;
    t23 = q10.*q11.*t21.*2.0;
    t24 = sqrt(t20);
    t25 = t24.*2.0;
    t26 = q10.*q12.*t21.*2.0;
    t27 = q10.*2.0;
    t28 = q11.*q12.*t21.*2.0;
    out2 = reshape([0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,0.0,0.0,0.0,t25+t17.*t21.*2.0,-t22+t23,q11.*2.0+t26,0.0,0.0,0.0,t22+t23,t25+t18.*t21.*2.0,-t27+t28,0.0,0.0,0.0,q11.*-2.0+t26,t27+t28,t25+t19.*t21.*2.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0],[6,36]);
end
if nargout > 2
    t29 = 1.0./t20.^(3.0./2.0);
    t30 = q11.*t21.*2.0;
    t31 = q11.*t17.*t29.*2.0;
    t32 = q10.*t21.*2.0;
    t33 = q10.*q11.*q12.*t29.*2.0;
    t34 = q12.*t21.*2.0;
    t35 = q12.*t17.*t29.*2.0;
    t36 = t33+2.0;
    t37 = t30+t31;
    t38 = q10.*t18.*t29.*2.0;
    t39 = t32+t38;
    t40 = t33-2.0;
    t41 = q12.*t18.*t29.*2.0;
    t42 = t34+t35;
    t43 = q10.*t19.*t29.*2.0;
    t44 = t34+t41;
    t45 = q11.*t19.*t29.*2.0;
    t46 = t32+t43;
    t47 = t30+t45;
    out3 = reshape([0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,t37.*u11+t42.*u12+u10.*(t32+q10.*t17.*t29.*2.0),t37.*u10+t36.*u12-u11.*(t32-t38),t40.*u11+t42.*u10-u12.*(t32-t43),0.0,0.0,0.0,t39.*u11+t40.*u12-u10.*(t30-t31),t39.*u10+t44.*u12+u11.*(t30+q11.*t18.*t29.*2.0),t36.*u10+t44.*u11-u12.*(t30-t45),0.0,0.0,0.0,t36.*u11+t46.*u12-u10.*(t34-t35),t40.*u10+t47.*u12-u11.*(t34-t41),t46.*u10+t47.*u11+u12.*(t34+q12.*t19.*t29.*2.0),0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0],[6,36]);
end
if nargout > 3
    out4 = [g_xsym;g_ysym;g_zsym;0.0;0.0;0.0];
end
