
        
            def steps(self):
        '''Run the map and reduce steps.'''
        return [
            self.mr(mapper=self.mapper,
                    reducer=self.reducer)
        ]
    
        def process_query(self, query):
        query = self.parse_query(query)
        results = self.memory_cache.get(query)
        if results is None:
            results = self.reverse_index_cluster.process_search(query)
            self.memory_cache.set(query, results)
        return results
    
    
def process_code(read_filehandle, text_filehandle, line, linenum, sourcefile, codedir, name, index, indent_depth):
    fenced = (line.strip() == '```')
    if fenced:
        try:
            line = read_filehandle.next()
            linenum += 1
            text_filehandle.write('\n')
        except StopIteration:
            return ('', linenum)
    start_linenum = linenum
    has_actual_code = False
    has_question_marks = False
    linebuffer = []
    while ((fenced and line.strip() != '```') or (not fenced and is_inside_code(line, indent_depth))):
        # copy comments to plain text for spell check
        comment_idx = line.find('//')
        no_comment_line = line
        if comment_idx >= 0:
            no_comment_line = line[:comment_idx].strip()
            text_filehandle.write(line[comment_idx + 2:])
        else:
            # write empty line so line numbers stay stable
            text_filehandle.write('\n')