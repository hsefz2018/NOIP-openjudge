var str:string;
    max,n,i,j,len,tmp:longint;
	a:array[1..200,0..200]of longint;
	rec:array[0..200]of longint;
	f:boolean;
begin
	fillchar(a,sizeof(a),0);
	fillchar(rec,sizeof(rec),0);
	readln(n);
	for i:=1 to n do begin
		readln(str);
		len:=length(str);
		tmp:=0;
		for j:=1 to len do 
			if ('0'<=str[j])and(str[j]<='9') then tmp:=tmp*10+ord(str[j])-48
		else if (str[j]=',') then begin
		  inc(a[i,0]);
		  a[i,a[i,0]]:=tmp;
		  tmp:=0;
	    end;
		inc(a[i,0]);
		a[i,a[i,0]]:=tmp;
		tmp:=0;
	end;
	max:=0;
	for i:=1 to n do 
		for j:=1 to a[i,0] do if a[i,j]>max then max:=a[i,j];
	writeln(max);
	for i:=1 to n do begin
		f:=false;
		for j:=1 to a[i,0] do if (a[i,j]=max)and not f then begin
		  f:=true;
		  inc(rec[0]);
		  rec[rec[0]]:=i;
		end;
	end;
	for i:=1 to rec[0] do if i=rec[0] then write(rec[i]) else write(rec[i],',');
end.




