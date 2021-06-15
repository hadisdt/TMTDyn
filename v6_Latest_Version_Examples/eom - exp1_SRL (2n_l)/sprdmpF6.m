function [out1,out2,out3,out4,out5,out6,out7] = sprdmpF6(in1,in2,s,ds,t_sym)
%SPRDMPF6
%    [OUT1,OUT2,OUT3,OUT4,OUT5,OUT6,OUT7] = SPRDMPF6(IN1,IN2,S,DS,T_SYM)

%    This function was generated by the Symbolic Math Toolbox version 8.6.
%    15-Jun-2021 01:20:42

E_s_ = in1(:,2);
gamma_ = in1(:,21);
l_s_ = in1(:,5);
lambda_ = in1(:,34);
mu_yy_ = in1(:,10);
p1_ = in1(:,22);
p2_ = in1(:,23);
p3_ = in1(:,24);
p4_ = in1(:,25);
p5_ = in1(:,26);
p6_ = in1(:,27);
q6 = in2(6,:);
r_o_ = in1(:,20);
r_p1_ = in1(:,19);
r_s1_ = in1(:,3);
r_s2_ = in1(:,4);
u6 = in2(24,:);
out1 = [0.0;0.0;0.0;0.0;0.0;1.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0];
if nargout > 1
    t2 = cos(gamma_);
    t3 = sin(gamma_);
    t4 = lambda_.^2;
    t5 = r_p1_.^2;
    t7 = 1.0./lambda_;
    t9 = 1.0./sqrt(lambda_);
    t10 = sqrt(7.0e+1);
    t6 = t2.^2;
    t8 = 1.0./t3.^2;
    t11 = t4.*t6;
    t12 = t11-1.0;
    out2 = (E_s_.*q6.*t7.*((pi.*((r_s1_.^4-r_s2_.^4)./t4+t5.^2.*t8.^2.*t12.^2.*6.0))./4.0-r_o_.^2.*t5.*t7.*t8.*t12.*pi.*3.0).*3.0)./l_s_;
end
if nargout > 2
    out3 = -mu_yy_.*u6;
end
if nargout > 3
    out4 = p3_.*r_o_.*t5.*t8.*t9.*t12.*pi.*9.857871488499218e-1+p4_.*r_o_.*t5.*t8.*t9.*t12.*pi.*6.383850617077452e-1-p5_.*r_o_.*t5.*t8.*t9.*t12.*pi.*6.383850617077454e-1-p6_.*r_o_.*t5.*t8.*t9.*t12.*pi.*9.857871488499218e-1-p1_.*r_o_.*t5.*t8.*t9.*t10.*t12.*pi.*(1.2e+1./2.89e+2)+p2_.*r_o_.*t5.*t8.*t9.*t10.*t12.*pi.*(1.2e+1./2.89e+2);
end
if nargout > 4
    out5 = zeros(0,0);
end
if nargout > 5
    out6 = 1.0;
end
if nargout > 6
    out7 = q6;
end
