var walk,bike:extended;
    s:longint;
begin
	readln(s);
	walk:=s/1.2;
	bike:=s/3+27+23;
	if walk<bike then writeln('Walk') else 
	if walk=bike then writeln('All') else writeln('Bike');
end.
	
