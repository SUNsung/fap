
        
        def shorten_title(title):
    m1 = re.search('[[0-9]*]', title)
    m2 = re.search(''.*'', title)
    if m1:
        title = m1.group(0)
    if m2:
        title = ' '.join((title, m2.group(0)))   
    return title[:50] + ' [...]'    