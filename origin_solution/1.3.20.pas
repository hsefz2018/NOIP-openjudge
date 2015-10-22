var ans:qword;
    n,i:longint;
begin
  readln(n);
  ans:=1;
  for i:=1 to n do ans:=ans*2;
  writeln(ans);
end.
