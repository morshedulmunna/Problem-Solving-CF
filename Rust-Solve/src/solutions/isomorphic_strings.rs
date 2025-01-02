use std::collections::HashMap;

struct Solution;

impl Solution {
    pub fn is_isomorphic(source: String, target: String) -> bool {
        if source.len() != target.len() {
            return false;
        }

        let mut source_to_target_map = HashMap::new();
        let mut target_to_source_map = HashMap::new();

        for (source_char, target_char) in source.chars().zip(target.chars()) {
            if let Some(&mapped_char) = source_to_target_map.get(&source_char) {
                if mapped_char != target_char {
                    return false;
                }
            } else {
                source_to_target_map.insert(source_char, target_char);
            }

            if let Some(&mapped_char) = target_to_source_map.get(&target_char) {
                if mapped_char != source_char {
                    return false;
                }
            } else {
                target_to_source_map.insert(target_char, source_char);
            }
        }

        true
    }
}
