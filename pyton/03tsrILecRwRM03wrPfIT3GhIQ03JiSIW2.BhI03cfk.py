
        
            for category, entries in sections.items():
        if sorted(entries) != entries:
            add_error(section_line_num[category], '{} section is not in alphabetical order'.format(category))