function fj_in = fj_inF(in1,in2,s)
%FJ_INF
%    FJ_IN = FJ_INF(IN1,IN2,S)

%    This function was generated by the Symbolic Math Toolbox version 8.0.
%    06-Feb-2019 23:09:41

lambda_sym = in1(:,34);
p1_sym = in1(:,22);
p3_sym = in1(:,24);
p5_sym = in1(:,26);
t2 = lambda_sym.^2;
t3 = t2.*2.787064548290963e-8;
t4 = t3-6.277870645482909e-6;
t5 = 1.0./sqrt(lambda_sym);
t6 = p1_sym.*2.0;
t7 = p3_sym.*2.0;
t8 = p5_sym.*2.0;
t9 = t6+t7+t8;
t10 = p3_sym.*t4.*t5.*pi.*7.970588235294118e-3;
t11 = p5_sym.*t4.*t5.*pi.*7.970588235294115e-3;
t16 = p1_sym.*t4.*t5.*pi.*1.594117647058824e-2;
t12 = t10+t11-t16;
t13 = p1_sym.*t4.*t5.*pi.*1.301042606982605e-18;
t14 = p3_sym.*t4.*t5.*pi.*1.380546378974017e-2;
t17 = p5_sym.*t4.*t5.*pi.*1.380546378974017e-2;
t15 = t13+t14-t17;
fj_in = [0.0;0.0;-t4.*t9.*pi;t12;t15;0.0;0.0;0.0;-t4.*t9.*pi;t12;t15;0.0;0.0;0.0;-t4.*t9.*pi;t12;t15;0.0;0.0;0.0;-t4.*t9.*pi;t12;t15;0.0];
