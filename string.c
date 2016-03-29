struct result{
	int a[15];
	int quant;
};
struct result strsearch(char *str, char a){
	struct result res; 
	int i, j; char *c;
	for(i=0, j=0, c=str; *c!='\0';i++, c=&(str[i])){
		if(*c == a) res.a[j++] = i;
	}
	res.quant = j;
	return res;
}
int main(){
	char *str = "hello dhgiwegeq";
	char *str2 = "hello moto";
	struct result res = strsearch(str, 'l');
	struct result *lista = malloc(640);

	printf("%d\n", sizeof(2));
	int i;
	
}
