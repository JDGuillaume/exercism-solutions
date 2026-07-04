pub fn is_armstrong_number(num: u32) -> bool {
    let number_string = num.to_string();
    let number_of_digits: u32 = num.to_string().len().try_into().unwrap();

    num == number_string
        .chars()
        .map(|digit| digit.to_digit(10).unwrap().pow(number_of_digits))
        .sum()
}
