var tot,per,no,i,needs:longint;
begin
  readln(tot);
  readln(per);
  no:=0;
  for i:=1 to per do begin
    read(needs);
	if needs>tot then inc(no)
	else dec(tot,needs);
  end;
  writeln(no);
end.
