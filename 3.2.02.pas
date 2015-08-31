var i,j:longint;
	str:array[1..10000]of ansistring;
begin
	i:=0;
	repeat
		inc(i);
		readln(str[i]);
	until str[i]='end';
	for j:=i-1 downto 1 do writeln(str[j]);
end.
