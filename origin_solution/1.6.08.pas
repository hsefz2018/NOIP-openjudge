uses math;
type num=record
	len:longint;
	storage:array[1..500]of integer;
end;

var a,b,ans:num;
    str:string;
    i:longint;
begin
  readln(str);
  fillchar(a.storage,sizeof(a.storage),0);
  fillchar(b.storage,sizeof(b.storage),0);
  fillchar(ans.storage,sizeof(ans.storage),0);
  a.len:=length(str);
  for i:=length(str) downto 1 do a.storage[a.len-i+1]:=ord(str[i])-48;
  readln(str);
  b.len:=length(str);
  for i:=length(str) downto 1 do b.storage[b.len-i+1]:=ord(str[i])-48;
  ans.len:=max(a.len,b.len);
  for i:=1 to ans.len do begin
	  ans.storage[i]:=ans.storage[i]+a.storage[i]+b.storage[i];
	  if ans.storage[i]>=10 then begin
	    inc(ans.storage[i+1],ans.storage[i] div 10);
	    ans.storage[i]:=ans.storage[i] mod 10;
	  end;
  end;
  for i:=500 downto 1 do if ans.storage[i]>0 then begin
	  ans.len:=i;
	  break;
  end;
  for i:=ans.len downto 1 do write(ans.storage[i]);
end.
