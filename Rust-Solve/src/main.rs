mod solutions;

fn main() {
    let emails = vec![
        "test.email+alex@leetcode.com".to_string(),
        "test.e.mail+bob.cathy@leetcode.com".to_string(),
        "testemail+david@lee.tcode.com".to_string(),
    ];

    let result = solutions::unique_email_address_929::Solution::num_unique_emails(emails);
    println!("Number of unique emails: {}", result);
}
