var n,a,b,c,d:longint;
begin
  readln(n);
  for d:=1 to n do
   for a:=2 to d-2 do
    for b:=a to d-1 do
     for c:=b to d do if (d*d*d=a*a*a+b*b*b+c*c*c) then
       writeln('Cube = ',d,', Triple = (',a,',',b,',',c,')');
end.
