type num=record
	len:longint;
	storage:array[1..1000]of integer;
end;

var ans:num;
    n,i,j:longint;
begin
  readln(n);
  ans.len:=1;
  fillchar(ans.storage,sizeof(ans.storage),0);
  ans.storage[1]:=1;
  for i:=1 to n do begin
	  for j:=1 to ans.len do ans.storage[j]:=ans.storage[j]*2;
	  for j:=1 to ans.len do if ans.storage[j]>=10 then begin
		  inc(ans.storage[j+1],ans.storage[j] div 10);
		  ans.storage[j]:=ans.storage[j] mod 10;
	  end;
	  if ans.storage[ans.len+1]>0 then inc(ans.len);
  end;
  for i:=ans.len downto 1 do write(ans.storage[i]);
end.
