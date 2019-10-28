int tfact(int i){
	if (i==1)return 0;
	else if(i==2)return 1;
	else return tfact(i-1)+tfact(i-2);
}
