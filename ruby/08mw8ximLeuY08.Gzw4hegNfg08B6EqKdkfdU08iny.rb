
        
                line_num = e.sass_line + 1 - line_offset
        min = [line_num - 6, 0].max
        section = e.sass_template.rstrip.split('\n')[min...line_num + 5]
        return e.sass_backtrace_str if section.nil? || section.empty?