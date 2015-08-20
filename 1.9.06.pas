var a:array[1..26]of longint;
	str:string;
	maxn,minn,i,j,t:longint;
	f:boolean;
begin
	fillchar(a,sizeof(a),0);
	readln(str);
	for i:=1 to length(str) do if ('a'<=str[i])and(str[i]<='z') then inc(a[ord(str[i])-96]);
	maxn:=0;
	minn:=maxlongint;
	for i:=1 to 26 do begin
		if a[i]>maxn then maxn:=a[i];
		if a[i]<minn then minn:=a[i];
	end;
	j:=maxn-minn;
	t:=2;
	f:=true;
	while (t<=trunc(sqrt(j))) do if j mod t=0 then f:=false else inc(t);
	if j=1 then f:=true;
	if f then begin
	  writeln('Lucky Word');
      writeln(j)
	end
    else begin
		writeln('No Answer');
		writeln(0);
	end;
end.
