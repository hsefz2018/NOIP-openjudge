var n,i:longint;
    x:extended;
begin
  readln(x,n);
  for i:=1 to n do x:=x*1.001;
  writeln(x:0:4);
end.
