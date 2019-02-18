use std::io;

fn main() {
	let mut n = String::new();
	let mut r = String::new();

	io::stdin().read_line(&mut n)
		.expect("input error");

	io::stdin().read_line(&mut r)
		.expect("input error");

	let n: i32 = n.trim().parse()
		.expect("Enter a number");

	let mut r: i32 = r.trim().parse()
		.expect("Enter a number");

	let mut n_len = 0;
	let mut k = n;
	while k > 0 {
		n_len += 1;
		k /= 10;
	}

	r = r % n_len;
	if r < 0 {
		r = n_len + r;
	}

	let mut m = 1;
	let mut d = 1;

	for i in 0..n_len {
		if i < r {
			d *= 10;


		} else {
			m *= 10;
		}
	}

	let res = (n % d) * m + (n / d);
	println!("{}", res); 


}