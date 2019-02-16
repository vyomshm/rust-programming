fn main() {
    // loop {
    // 	println!("Stuck in an infinite loop...");
    // }

    let mut counter = 0;

    let result = loop {
    	if counter == 10 {
    		break counter * 10;
    	}
    	counter += 1;
    };

    assert_eq!(result, 100);

    until_lift_off(100);

    let mut number = 1_000;

    while number != 0{
    	println!("{} !", number);
    	number -= 1;
    }

    println!("LIFTOFF!!!!");
}

fn until_lift_off(count: u32){
	for number in 1..count {
		println!("preparing for lifoff: {}/{}", number, count);
	}

	println!("Starting LIFTOFF count....");
}
