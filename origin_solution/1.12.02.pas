var n,ans,tmp,i:longint;
begin
  read(n);
  ans:=0;
  for i:=1 to n do begin
    read(tmp);
	if tmp mod 70>0 then inc(ans,tmp div 70+1)
	else inc(ans,tmp div 70);
  end;
  writeln(ans*0.1:0:1);
end.
