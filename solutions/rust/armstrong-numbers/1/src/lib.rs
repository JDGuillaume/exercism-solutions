pub fn is_armstrong_number(num: u32) -> bool {
    let number_collection: Vec<u32> = num
        .to_string()
        .split("")
        .collect::<Vec<&str>>()
        .into_iter()
        .filter(|num| !num.is_empty())
        .map(|string_number| string_number.parse::<u32>().unwrap())
        .collect();

    let number_of_digits = number_collection.len();

    num == number_collection
        .iter()
        .map(|num| num.pow(number_of_digits.try_into().unwrap()))
        .sum()
}
