var n,x,y,eat:longint;
begin
  readln(n,x,y);
  if (y>x) then eat:=y div x else eat:=0;
  if y mod x>0 then inc(eat);
  if n-eat>0 then writeln(n-eat) else writeln(0);
end.
