function fj_k = fj_kF(in1,in2,s)
%FJ_KF
%    FJ_K = FJ_KF(IN1,IN2,S)

%    This function was generated by the Symbolic Math Toolbox version 8.0.
%    06-Feb-2019 23:09:41

lambda_sym = in1(:,34);
q1 = in2(:,1);
q2 = in2(:,2);
q3 = in2(:,3);
q4 = in2(:,4);
q5 = in2(:,5);
q6 = in2(:,6);
q7 = in2(:,7);
q8 = in2(:,8);
q9 = in2(:,9);
q10 = in2(:,10);
q11 = in2(:,11);
q12 = in2(:,12);
q13 = in2(:,13);
q14 = in2(:,14);
q15 = in2(:,15);
q16 = in2(:,16);
q17 = in2(:,17);
q18 = in2(:,18);
q19 = in2(:,19);
q20 = in2(:,20);
q21 = in2(:,21);
q22 = in2(:,22);
q23 = in2(:,23);
q24 = in2(:,24);
t2 = 1.0./lambda_sym;
t3 = t2.*1.36e-4;
t4 = lambda_sym.^2;
t5 = t4.*1.672238728974578e-7;
t6 = t3+t5-3.766722387289746e-5;
t8 = t4.*4.439506172839557e-3;
t7 = t8-1.0;
t9 = t7.^2;
t10 = t9.*2.36469959048496e-10;
t11 = 1.0./lambda_sym.^2;
t16 = t11.*2.4004e-8;
t12 = t10-t16;
t13 = t12.*pi.*4.1e6;
t14 = t4.*2.787064548290963e-8;
t15 = t14-6.277870645482909e-6;
t19 = t2.*t15.*pi.*3.5547e3;
t17 = t13-t19;
t20 = t2.*t15.*pi.*3.5547e3;
t18 = t13-t20;
fj_k = [q1.*t2.*t6.*pi.*(-5.466666666666666e6);q2.*t2.*t6.*pi.*(-5.466666666666666e6);q3.*t2.*t6.*pi.*-1.64e7;q4.*t2.*t17;q5.*t2.*t18;q6.*t2.*t12.*pi.*2.733333333333333e6;q7.*t2.*t6.*pi.*(-5.466666666666666e6);q8.*t2.*t6.*pi.*(-5.466666666666666e6);q9.*t2.*t6.*pi.*-1.64e7;q10.*t2.*t17;q11.*t2.*t18;q12.*t2.*t12.*pi.*2.733333333333333e6;q13.*t2.*t6.*pi.*(-5.466666666666666e6);q14.*t2.*t6.*pi.*(-5.466666666666666e6);q15.*t2.*t6.*pi.*-1.64e7;q16.*t2.*t17;q17.*t2.*t18;q18.*t2.*t12.*pi.*2.733333333333333e6;q19.*t2.*t6.*pi.*(-5.466666666666666e6);q20.*t2.*t6.*pi.*(-5.466666666666666e6);q21.*t2.*t6.*pi.*-1.64e7;q22.*t2.*t17;q23.*t2.*t18;q24.*t2.*t12.*pi.*2.733333333333333e6];