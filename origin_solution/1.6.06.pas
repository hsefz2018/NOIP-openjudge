var a:array[0..10000]of boolean;
    i,j,s,e,count,l,m:longint;
begin
  readln(l,m);
  fillchar(a,sizeof(a),true);
  for i:=1 to m do begin
    readln(s,e);
    for j:=s to e do a[j]:=false;
  end;
  count:=0;
  for i:=0 to l do if a[i] then inc(count);
  writeln(count);
end.
