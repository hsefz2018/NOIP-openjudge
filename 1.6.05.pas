var n,i,age,a,b,c,d:longint;
begin
  readln(n);
  a:=0;
  b:=0;
  c:=0;
  d:=0;
  for i:=1 to n do begin
    read(age);
    if (0<=age)and(age<=18) then inc(a);
    if (19<=age)and(age<=35) then inc(b);
    if (36<=age)and(age<=60) then inc(c);
    if (61<=age) then inc(d);
  end;
  writeln(a/n*100:0:2,'%');
  writeln(b/n*100:0:2,'%');
  writeln(c/n*100:0:2,'%');
  writeln(d/n*100:0:2,'%');
end.
