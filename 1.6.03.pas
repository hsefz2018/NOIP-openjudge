var i:longint;
    a:array[1..10]of longint;
    total:extended;
begin
  for i:=1 to 10 do read(a[i]);
  total:=a[1]*28.9+a[2]*32.7+a[3]*45.6+a[4]*78+a[5]*35+a[6]*86.2+a[7]*27.8+a[8]*43+a[9]*56+a[10]*65;
  writeln(total:0:1);
end.
