var eff,tmpeff,compare:extended;
    i,n,a,e,stda,stde:longint;
begin
  readln(n);
  readln(stda,stde);
  eff:=stde/stda;
  for i:=1 to n-1 do begin
	  readln(a,e);
	  tmpeff:=e/a;
	  compare:=tmpeff-eff;
	  if compare<-0.05 then writeln('worse') else
	  if compare>0.05 then writeln('better') else 
	  writeln('same');
  end;
end.
