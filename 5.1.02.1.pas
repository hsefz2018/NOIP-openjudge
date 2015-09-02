var a,b,c,d,t:longint;
	va,vb,vc,vd,cycle,backup:extended;
begin
	readln(a,b,c,d);
	va:=1000/a;
	vb:=1000/b;
	vc:=1000/c;
	vd:=1000/d;
    cycle:=0;
	t:=0;
	repeat
		inc(t);
		backup:=cycle;
		if t mod 4=1 then cycle:=cycle+va;
		if t mod 4=2 then cycle:=cycle-vb;
		if t mod 4=3 then cycle:=cycle+vc;
		if t mod 4=0 then cycle:=cycle-vd;
	until cycle>=1000;
    if cycle=1000 then writeln(t,'.00') else begin
      t:=t-1;
	  if t mod 4=0 then writeln((1000-backup)/va+t:0:2)
	    else if t mod 4=2 then writeln((1000-backup)/vc+t:0:2);
    end;
end.
