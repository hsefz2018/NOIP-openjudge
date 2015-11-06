const max=100000;

type tree=^node;
	node=record
	next:tree;
	a,b,s:longint;
end;

var i,j,n:longint;
	a:array[1..1000]of longint;
	head:array[-max..max]of tree;
	f:boolean;

procedure add_node(a,b:longint);
var p:tree;
begin
	p:=head[(a+b)mod max];
	while p^.next<>nil do p:=p^.next;
	p^.s:=a+b; 
	p^.a:=a; 
	p^.b:=b;
	new(p^.next); 
	p^.next^.next:=nil; 
end;


procedure sort(l,r:longint);
var i,j,m,t:longint;
begin
	i:=l;
	j:=r;
	m:=a[(l+r)shr 1];
	repeat 
		while a[i]>m do inc(i);
		while a[j]<m do dec(j);
		if i<=j then begin
			t:=a[i];
			a[i]:=a[j];
			a[j]:=t;
			inc(i);
			dec(j);
		end;
	until i>j;
	if i<r then sort(i,r);
	if l<j then sort(l,j);
end;
	

function judge(a,b:longint):boolean;
var s:longint; 
	p:tree;
begin
	if a=b then exit(false);
	s:=a-b;
	p:=head[s mod max];
	while p^.next<>nil do begin
		if (p^.s=s)and(a<>p^.a)and(a<>p^.b)and(b<>p^.a)and(b<>p^.b)then exit(true);
		p:=p^.next;
	end;
	exit(false);
end;

begin
    readln(n);
	while n>0 do begin
		for i:=1 to n do readln(a[i]);
		for i:=-max to max do begin 
			new(head[i]); 
			head[i]^.next:=nil; 
		end;
	sort(1,n); 
	for i:=n downto 1 do 
		for j:=i-1 downto 1 do add_node(a[i],a[j]);
	f:=false;
	f:=false;
	for i:=1 to n do begin
		for j:=1 to n do
			if judge(a[i],a[j]) then begin 
				writeln(a[i]); 
				f:=true; 
				break; 
			end;
		if f then break;
	end;
	if not(f) then writeln('no solution');
	readln(n);
	end;
end.