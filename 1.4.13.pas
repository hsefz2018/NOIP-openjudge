var x,y:double;
begin
	readln(x);
	if (0<=x)and(x<5) then y:=-x+2.5;
	if (5<=x)and(x<10) then y:=2-1.5*(x-3)*(x-3);
	if (10<=x)and(x<20) then y:=x/2-1.5;
	writeln(y:0:3);
end.
