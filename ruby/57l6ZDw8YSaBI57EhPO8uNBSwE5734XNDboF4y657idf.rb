
        
                  # Check if invalid uppercase words are at the start of a
          # formula's desc
          if !VALID_LOWERCASE_WORDS.include?(string_content(desc).split.first) &&
             regex_match_group(desc, /^[a-z]/)
            problem 'Description should start with a capital letter'
          end
    
        export LANG=en_US.UTF-8
    DOC
  else
    STDERR.puts <<-DOC
    \e[33mWARNING: CocoaPods requires your terminal to be using UTF-8 encoding.
    Consider adding the following to ~/.profile:
    
              If you don't give a pod `NAME`, you need to specify the `--all`
          flag (this is to avoid cleaning all the cache by mistake).
        DESC
    
            self.description = <<-DESC
          Shows the content of the pods cache as a YAML tree output, organized by pod.
          If `NAME` is given, only the caches for that pod will be included in the output.
        DESC
    
    ```
#{plugins_string}
```
#{markdown_podfile}
EOS
      end