// solution.rs
use std::collections::HashSet;

pub struct Solution;

impl Solution {
    pub fn num_unique_emails(emails: Vec<String>) -> i32 {
        let mut unique_emails = HashSet::new();

        for email in emails {
            let at_pos = email.find('@').unwrap(); // Find position of '@'
            let local = &email[..at_pos]; // Extract the local part
            let domain = &email[at_pos..]; // Extract the domain part

            // Process the local part to ignore dots and everything after '+'
            let local = local.split('+').next().unwrap().replace('.', "");

            // Combine the processed local part with the domain part and insert it
            unique_emails.insert(local + domain);
        }

        // Return the count of unique email addresses
        unique_emails.len() as i32
    }
}
