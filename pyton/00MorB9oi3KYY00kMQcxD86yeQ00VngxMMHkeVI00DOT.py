
        
          Args:
    filename: The name of the current file.
    clean_lines: A CleansedLines instance containing the file.
    linenum: The number of the line to check.
    error: The function to call with any errors found.
  '''
  line = clean_lines.elided[linenum]
    
        Each code snipped should get additional C++ code around it to help compile the line in context, with
    some heuristic guessing of what is needed around. The wrapping code should have a token in each line allowing
    other tools to filter out these lines