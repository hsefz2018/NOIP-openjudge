//Still Debugging
var a,b,c,d,t:longint;
	va,vb,vc,vd,cycle,rest:extended;
begin
	readln(a,b,c,d);
	va:=1/a;
	vb:=1/b;
	vc:=1/c;
	vd:=1/d;
    cycle:=0;
	t:=0;
	repeat
		cycle:=cycle+va-vb+vc-vd;
		inc(t);
	until cycle>1;
	dec(t);
	rest:=1-(cycle-(va-vb+vc-vd));
	if rest<va then writeln(t+(rest/va):0:2);
	if rest>va then writeln(t+(rest-va+vb)/vc):0:2);
end.
