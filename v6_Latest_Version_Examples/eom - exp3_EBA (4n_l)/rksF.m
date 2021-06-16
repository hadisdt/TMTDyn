function out1 = rksF(in1,in2,s,ds,t_sym)
%RKSF
%    OUT1 = RKSF(IN1,IN2,S,DS,T_SYM)

%    This function was generated by the Symbolic Math Toolbox version 8.6.
%    15-Jun-2021 01:39:28

lambda_ = in1(:,34);
q1 = in2(1,:);
q2 = in2(2,:);
q3 = in2(3,:);
q4 = in2(4,:);
q5 = in2(5,:);
q6 = in2(6,:);
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
r_s2_ = in1(:,4);
t2 = q4.^2;
t3 = q5.^2;
t4 = q6.^2;
t5 = q10.^2;
t6 = q11.^2;
t7 = q12.^2;
t14 = 1.0./sqrt(lambda_);
t8 = -t2;
t9 = -t3;
t10 = -t4;
t11 = -t5;
t12 = -t6;
t13 = -t7;
t15 = r_s2_.*t14;
t16 = t8+t9+t10+1.0;
t17 = t11+t12+t13+1.0;
t18 = sqrt(t16);
t19 = sqrt(t17);
out1 = reshape([0.0,q1,q7,0.0,q2,q8,0.0,q3,q9,q1,q7,q13,q2,q8,q14,q3,q9,q15,1.0,t18,t19,0.0,q4,q10,0.0,q5,q11,0.0,q6,q12,t18,t19,sqrt(-q16.^2-q17.^2-q18.^2+1.0),q4,q10,q16,q5,q11,q17,q6,q12,q18,t15,t15,t15],[3,15]);