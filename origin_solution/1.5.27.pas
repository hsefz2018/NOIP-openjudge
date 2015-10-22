var m,k,count:longint;
    f1,f2:boolean;
begin
  readln(m,k);
  f1:=false;
  f2:=false;
  if m mod 19=0 then f1:=true;
  count:=0;
  while m>0 do begin
	  if m mod 10=3 then inc(count);
	  m:=m div 10;
  end;
  if count=k then f2:=true;
  if f1 and f2 then writeln('YES') else writeln('NO');
end.
