package main 

import "fmt"

func main(){
	var x int 
	var temp, y float32
	fmt.Scanf("%d %f", &x, &y) 
	temp = float32(x) + 0.5
	if x % 5 == 0 && temp <= y {
		fmt.Printf("%0.2f", y - temp)
	}else{
		fmt.Printf("%0.2f", y)
	}
}
