var n,tmp,i:longint;
    sum:int64;
    avg:extended;
begin
  read(n);
  sum:=0;
  for i:=1 to n do begin
	  read(tmp);
	  sum:=sum+tmp;
  end;
  avg:=sum/n;
  writeln(sum,' ',avg:0:5);
end.
