
        
        def sort_blocks():
    # First, we load the current README into memory
    with open('README.md', 'r') as read_me_file:
        read_me = read_me_file.read()
    
        description = proj_info['description'],
    keywords = proj_info['keywords'],
    
    def kugou_download_playlist(url, output_dir = '.', merge = True, info_only = False, **kwargs):
    html=get_html(url)
    pattern=re.compile('title='(.*?)'.* data='(\w*)\|.*?'')
    pairs=pattern.findall(html)
    for title,hash_val in pairs:
        kugou_download_by_hash(title,hash_val,output_dir,merge,info_only)
    
    
    
    from ..common import *
    
    from xml.dom.minidom import parseString
    
                    for line in text:
                    if re.match(r'^>', line):
                        line = line[:0] + '####' + line[1:]
                    html = markdown.markdown(line)
                    out.write(html)
                out.write(footer)