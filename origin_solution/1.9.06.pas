var maxn,minn:longint;
	a:array[1..26]of longint;
	i,j,t:longint;
	str:string;
	len:longint;
	f:boolean;
begin
	readln(str);
	fillchar(a,sizeof(a),0);
	len:=length(str);
	for i:=1 to len do inc(a[ord(str[i])-96]);
	maxn:=0;
	minn:=maxlongint;
	for i:=1 to 26 do begin
		if a[i]>maxn then maxn:=a[i];
		if (a[i]<minn)and(a[i]<>0) then minn:=a[i];
	end;
	j:=maxn-minn;
	f:=true;
	if j<=1 then f:=false;
	t:=2;
	while (t<=trunc(sqrt(j))) do if j mod t=0 then begin
	  f:=false;
	  break;
	end else inc(t);
	if f then begin
	   writeln('Lucky Word');
	   write(j);
	end else begin
		writeln('No Answer');
		write(0);
	end;
end.
