var n:longint;
	f3,f5,f7:boolean;
begin
	readln(n);
	f3:=false;
	f5:=false;
	f7:=false;
	if n mod 3=0 then f3:=true;
	if n mod 5=0 then f5:=true;
	if n mod 7=0 then f7:=true;
	if f3 and f5 and f7 then writeln('3 5 7');
	if f3 and f5 and not f7 then writeln('3 5');
	if f3 and f7 and not f5 then writeln('3 7');
	if f5 and f7 and not f3 then writeln('5 7');
	if f3 and not f5 and not f7 then writeln(3);
	if f5 and not f3 and not f7 then writeln(5);
	if f7 and not f3 and not f5 then writeln(7);
	if not f3 and not f5 and not f7 then writeln('n');
end.
