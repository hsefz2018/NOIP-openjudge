uses math;

type num=record
  len:longint;
  storage:array[1..10000]of longint;
end;

function add(a,b:num):num;
var i:longint;
begin
  add.len:=max(a.len,b.len);
  fillchar(add.storage,sizeof(add.storage),0);
  for i:=1 to add.len+2 do begin
	  inc(add.storage[i],a.storage[i]+b.storage[i]);
	  if add.storage[i]>=10 then begin
		  inc(add.storage[i+1],add.storage[i] div 10);
		  add.storage[i]:=add.storage[i] mod 10;
	  end;
  end;
  repeat
    inc(add.len);
  until add.storage[add.len]=0;
  dec(add.len);
end;

function calc(n:longint):num;
var i,j:longint;
begin
  calc.len:=1;
  fillchar(calc.storage,sizeof(calc.storage),0);
  calc.storage[1]:=1;
  for i:=1 to n do begin
	for j:=1 to calc.len+2 do calc.storage[j]:=calc.storage[j]*i;
	for j:=1 to calc.len+2 do if calc.storage[j]>=10 then begin
		inc(calc.storage[j+1],calc.storage[j] div 10);
		calc.storage[j]:=calc.storage[j] mod 10;
	end;
    repeat
	  inc(calc.len);
	until calc.storage[calc.len]=0;
	dec(calc.len);
  end;
end;

var ans:num;
    n,i:longint;
begin
  readln(n);
  ans.len:=1;
  fillchar(ans.storage,sizeof(ans.storage),0);
  for i:=1 to n do begin
	  ans:=add(ans,calc(i));
	  repeat
	    inc(ans.len);
	  until ans.storage[ans.len]=0;
	  dec(ans.len);
  end;
  for i:=ans.len downto 1 do write(ans.storage[i]);
end.
