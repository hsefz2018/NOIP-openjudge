var m,n,sum,i:longint;
begin
  readln(m,n);
  sum:=0;
  for i:=m to n do if (i mod 2=1) then sum:=sum+i;
  writeln(sum);
end.
