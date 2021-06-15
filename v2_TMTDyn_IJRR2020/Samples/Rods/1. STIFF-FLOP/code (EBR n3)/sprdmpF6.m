function [out1,out2,out3,out4,out5,out6,out7,out8] = sprdmpF6(in1,in2,s)
%SPRDMPF6
%    [OUT1,OUT2,OUT3,OUT4,OUT5,OUT6,OUT7,OUT8] = SPRDMPF6(IN1,IN2,S)

%    This function was generated by the Symbolic Math Toolbox version 8.0.
%    30-Jan-2019 17:47:49

E_s_sym = in1(:,2);
gamma_sym = in1(:,21);
l_s_sym = in1(:,5);
lambda_sym = in1(:,34);
mu_zz_sym = in1(:,11);
q6 = in2(:,6);
r_p1_sym = in1(:,19);
r_s1_sym = in1(:,3);
r_s2_sym = in1(:,4);
u6 = in2(:,24);
out1 = [0.0;0.0;0.0;0.0;0.0;1.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0];
if nargout > 1
    t2 = r_s1_sym.^2;
    t3 = r_s2_sym.^2;
    t4 = r_p1_sym.^2;
    t5 = cos(gamma_sym);
    t17 = lambda_sym.^2;
    t18 = t5.^2;
    t19 = t17.*t18;
    t6 = t19-1.0;
    t7 = 1.0./l_s_sym;
    t8 = 1.0./lambda_sym;
    t9 = 1.0./lambda_sym.^2;
    t10 = t2.^2;
    t11 = t3.^2;
    t12 = t10-t11;
    t13 = t9.*t12;
    t14 = t4.^2;
    t15 = sin(gamma_sym);
    t16 = 1.0./t15.^4;
    t20 = t6.^2;
    t21 = t14.*t16.*t20.*6.0;
    t22 = t13+t21;
    out2 = E_s_sym.*q6.*t7.*t8.*t22.*pi.*(1.0./2.0);
end
if nargout > 2
    out3 = -mu_zz_sym.*u6;
end
if nargout > 3
    out4 = 0.0;
end
if nargout > 4
    out5 = q6;
end
if nargout > 5
    out6 = [0.0,0.0,0.0,0.0,0.0,E_s_sym.*t7.*t8.*t22.*pi.*(-1.0./2.0),0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0];
end
if nargout > 6
    out7 = [0.0,0.0,0.0,0.0,0.0,-mu_zz_sym,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0];
end
if nargout > 7
    out8 = 1.0;
end
