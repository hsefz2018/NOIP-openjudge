var n,i,score,maxs:longint;
    name,maxn:string;
    ch:char;
begin
  readln(n);
  maxs:=0;
  for i:=1 to n do begin
    readln(score,ch,name);
    if score>maxs then begin
      maxs:=score;
      maxn:=name;
    end;
  end;
  writeln(maxn);
end.
