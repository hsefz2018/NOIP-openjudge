var str:string;
    f:boolean;
	count,i:longint;
begin
  readln(str);
  f:=false;
  count:=0;
  for i:=1 to length(str) do begin
	  if str[i]='.' then f:=true;
	  if not f then write(str[i]);
	  if f and (count<12) then begin
		  inc(count);
		  write(str[i]);
	  end;
  end;
  if count<12 then for i:=1 to 12-count do write('0');
end.
