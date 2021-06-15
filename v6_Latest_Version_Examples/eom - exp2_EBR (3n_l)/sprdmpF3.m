function [out1,out2,out3,out4,out5,out6,out7] = sprdmpF3(in1,in2,s,ds,t_sym)
%SPRDMPF3
%    [OUT1,OUT2,OUT3,OUT4,OUT5,OUT6,OUT7] = SPRDMPF3(IN1,IN2,S,DS,T_SYM)

%    This function was generated by the Symbolic Math Toolbox version 8.6.
%    14-Jun-2021 23:15:54

E_s_ = in1(:,2);
gamma_ = in1(:,21);
l_s_ = in1(:,5);
lambda_ = in1(:,34);
mu_z_ = in1(:,8);
p1_ = in1(:,22);
p2_ = in1(:,23);
p3_ = in1(:,24);
p4_ = in1(:,25);
p5_ = in1(:,26);
p6_ = in1(:,27);
q3 = in2(3,:);
r_p1_ = in1(:,19);
r_s1_ = in1(:,3);
r_s2_ = in1(:,4);
u3 = in2(21,:);
out1 = [0.0;0.0;1.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0];
if nargout > 1
    t2 = cos(gamma_);
    t3 = sin(gamma_);
    t4 = lambda_.^2;
    t5 = r_p1_.^2;
    t7 = 1.0./lambda_;
    t6 = t2.^2;
    t8 = 1.0./t3.^2;
    t9 = t4.*t6;
    t10 = t9-1.0;
    out2 = (E_s_.*q3.*t7.*pi.*(t7.*(r_s1_.^2-r_s2_.^2)-t5.*t8.*t10.*6.0).*3.0)./l_s_;
end
if nargout > 2
    out3 = -mu_z_.*u3;
end
if nargout > 3
    out4 = -t5.*t8.*t10.*pi.*(p1_+p2_+p3_+p4_+p5_+p6_);
end
if nargout > 4
    out5 = zeros(0,0);
end
if nargout > 5
    out6 = 1.0;
end
if nargout > 6
    out7 = q3;
end
