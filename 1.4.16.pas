var a,b,c:longint;
begin
  readln(a,b,c);
  if (a+b>c)and(b+c>a)and(a+c>b) then writeln('yes') else writeln('no');
end.
