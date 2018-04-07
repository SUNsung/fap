
        
        
if six.PY3:
    for line in open('tests/py3-ignores.txt'):
        file_path = line.strip()
        if file_path and file_path[0] != '#':
            collect_ignore.append(file_path)
    
        def short_desc(self):
        return 'Run quick benchmark test'
    
        def syntax(self):
        return '[options] <spider>'
    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('-l', '--list', dest='list', action='store_true',
            help='List available templates')
        parser.add_option('-e', '--edit', dest='edit', action='store_true',
            help='Edit spider after creating it')
        parser.add_option('-d', '--dump', dest='dump', metavar='TEMPLATE',
            help='Dump template to standard output')
        parser.add_option('-t', '--template', dest='template', default='basic',
            help='Uses a custom template.')
        parser.add_option('--force', dest='force', action='store_true',
            help='If the spider already exists, overwrite it with the template')
    
                with open('htmlout.html', 'w') as out:
                out.write(header)
    
    
def main():
    tornado.options.parse_command_line()
    application = tornado.web.Application([
        (r'/', MainHandler),
    ])
    http_server = tornado.httpserver.HTTPServer(application)
    http_server.listen(options.port)
    tornado.ioloop.IOLoop.current().start()
    
    import tornado.ioloop
import tornado.web
from tornado import options
    
            truncated = False
        for object_name in object_names[start_pos:]:
            if not object_name.startswith(prefix):
                break
            if len(contents) >= max_keys:
                truncated = True
                break
            object_path = self._object_path(bucket_name, object_name)
            c = {'Key': object_name}
            if not terse:
                info = os.stat(object_path)
                c.update({
                    'LastModified': datetime.datetime.utcfromtimestamp(
                        info.st_mtime),
                    'Size': info.st_size,
                })
            contents.append(c)
            marker = object_name
        self.render_xml({'ListBucketResult': {
            'Name': bucket_name,
            'Prefix': prefix,
            'Marker': marker,
            'MaxKeys': max_keys,
            'IsTruncated': truncated,
            'Contents': contents,
        }})