function [out1,out2,out3,out4,out5,out6,out7,out8] = sprdmpF10(in1,in2,s)
%SPRDMPF10
%    [OUT1,OUT2,OUT3,OUT4,OUT5,OUT6,OUT7,OUT8] = SPRDMPF10(IN1,IN2,S)

%    This function was generated by the Symbolic Math Toolbox version 8.2.
%    04-Jan-2019 15:00:36

q10 = in2(:,10);
out1 = [0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;1.0;0.0;0.0];
if nargout > 1
    out2 = 0.0;
end
if nargout > 2
    out3 = 0.0;
end
if nargout > 3
    out4 = 0.0;
end
if nargout > 4
    out5 = q10;
end
if nargout > 5
    t2 = [0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0];
    out6 = t2;
end
if nargout > 6
    out7 = t2;
end
if nargout > 7
    out8 = 1.0;
end
