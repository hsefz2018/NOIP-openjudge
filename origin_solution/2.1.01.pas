var n,i,a,min,max,ra,ch:longint;
begin
	readln(n);
	for i:=1 to n do begin
		readln(a);
		if a mod 2=1 then writeln(0,' ',0);
		if a mod 2=0 then begin
		  ra:=a div 4;
		  repeat
			  ch:=(a-ra*4) div 2;
			  dec(ra);
		  until (a-(ra+1)*4) mod 2=0;
		  inc(ra);
		  min:=ra+ch;
		  write(min);
		  ch:=a div 2;
		  repeat
			  ra:=(a-ch*2)div 4;
			  dec(ch);
		  until (a-(ch+1)*2) mod 4=0;
		  inc(ch);
		  max:=ra+ch;
		  writeln(' ',max);
		end;
	end;
end.
