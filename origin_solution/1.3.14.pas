var t:longint;
    h,r,v,d:extended;
begin
  readln(h,r);
  v:=h*r*r*pi/1000;
  d:=0;
  t:=0;
  repeat
    d:=d+v;
    t:=t+1;
  until d>20;
  writeln(t);
end.
