int main(){
	int a = 127, i;
	float b = 3.1415;
	int *c = &b;

	for(i=31; i>=0; i--){
		printf("%d", (*c>>i)&1);
	}printf("\n");

	for(i=0; i<32; i++){
		printf("%d", (*c>>i)&1);
	}printf("\n");
}

//10.10.134.78
void printBinary(int *){
	for(i=31; i>=0; i--){
		printf("%d", (*n>>i)&1);
	}printf("\n");
}
