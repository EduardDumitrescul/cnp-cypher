# cnp-cypher
This is an Keyword Cypher.
It is similar to the Ceasar Cypher, with the exception that the substitutions are determined by a keyword.

### Example:
keyword = earth

normal alphabet = a b c d e f g h i j k l m n o p q r s t u v w x y z

cypher alphabet = e a r t h b c d f g i j k l m n o p q s u v w x y z

### Keyword restrictions
- must only contain letters from the english alphabet
- all letters must pe distinct

### Usage
Go to the directory where repository was cloned and run the following command:
- for encoding
  
  > ./encoder.exe <keyword> <normal_message_filename>
  
- for decoding
  
  > ./decoder.exe <keyword> <encoded_message_filename>

You can also redirect the output into a file using:
> ./encoder.exe <keyword> <normal_message_filename> \> \<output-filename>

and

> ./decoder.exe <keyword> <normal_message_filename> \> \<output-filename>
