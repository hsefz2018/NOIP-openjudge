var k,n1,n2,n3,n4,n5,depth,a,b,c,d,e:longint;
begin
	readln(k,n1,n2,n3,n4,n5);
	k:=k*100;
	for depth:=1 to k do 
		for a:=1 to depth div n1 do begin
			b:=depth-a*n1;
			c:=depth-b*n2;
			d:=depth-c*n3;
			e:=depth-d*n4;
			if (b>0)and(c>0)and(d>0)and(e>0)and
		 	(a<>b)and(a<>c)and(a<>d)and(a<>e)and
			(b<>c)and(b<>d)and(b<>e)and
			(c<>d)and(c<>e)and
			(d<>e)and
			(depth-e*n5=a)	
			then begin
				//Clumsy..
				writeln(depth,' ',a,' ',b,' ',c,' ',d,' ',e);
				exit;
			end;
		end;
	writeln('not found');
end.
