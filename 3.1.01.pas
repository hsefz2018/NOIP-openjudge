var name:array [1..1000] of string;
    count,i,j,k,n,m,l:longint;
	ch:char;
	f:boolean;
	tmpstr:string;
	month:array[1..1000]of longint;
	date:array[1..1000]of longint;
	mark:array[1..12,1..31]of boolean;
	temp:array[1..1000]of string;
begin
	fillchar(mark,sizeof(mark),false);
	for i:=1 to 100 do name[i]:=' ';
	readln(n);
	for i:=1 to n do begin
		repeat 
			read(ch);
			if ch<>' ' then insert(ch,name[i],length(name[i]));
		until ch=' ';
		read(month[i]);
		readln(date[i]);
	end;
	for i:=1 to n-1 do 
		for j:=i+1 to n do if (month[i]=month[j])and(date[i]=date[j]) then mark[month[i],date[j]]:=true;
	for i:=1 to 12 do
		for j:=1 to 31 do if mark[i,j]=true then begin
		  write(i,' ',j,' ');
		  count:=0;
		  for k:=1 to n do if (month[k]=i)and(date[k]=j) then begin
		    inc(count);
			temp[count]:=name[k];
		  end;
		  for k:=1 to count-1 do
			  for l:=k+1 to count do if length(temp[k])>length(temp[l]) then begin
			    tmpstr:=temp[k];
				temp[k]:=temp[l];
				temp[l]:=tmpstr;
		  end
	      else if length(temp[k])=length(temp[l]) then 
		     for m:=1 to length(temp[k]) do if temp[k,m]>temp[l,m] then begin
			   tmpstr:=temp[k];
			   temp[k]:=temp[l];
			   temp[l]:=tmpstr;
			end;
		  for k:=1 to count do if k=count then begin
		   delete(temp[k],length(temp[k]),1);
	       write(temp[k]);
		  end
	      else write(temp[k]);
		  writeln;
	  end;
	f:=false;
	for i:=1 to 12 do
		for j:=1 to 31 do if mark[i,j]=true then f:=true;
	if not f then writeln('None');
end.
