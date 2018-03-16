
        
        from __future__ import print_function
    
        try:
        return json.dumps(result, sort_keys=True, indent=indent, ensure_ascii=False)
    except UnicodeDecodeError:
        return json.dumps(result, sort_keys=True, indent=indent)

    
    from ansible.plugins.terminal import TerminalBase
from ansible.errors import AnsibleConnectionFailure
    
    
def get_group_vars(groups):
    
        Each code snipped should get additional C++ code around it to help compile the line in context, with
    some heuristic guessing of what is needed around. The wrapping code should have a token in each line allowing
    other tools to filter out these lines
    
    
def CheckBracesSpacing(filename, clean_lines, linenum, nesting_state, error):
  '''Checks for horizontal spacing near commas.
    
        def path_ok(self):
        'Simple validity check for menu file path'
        path = self.path.get().strip()
        if not path: #no path specified
            self.showerror('no help file path specified.', self.path_error)
            return None
        elif not path.startswith(('www.', 'http')):
            if path[:5] == 'file:':
                path = path[5:]
            if not os.path.exists(path):
                self.showerror('help file path does not exist.',
                               self.path_error)
                return None
            if platform == 'darwin':  # for Mac Safari
                path =  'file://' + path
        return path
    
    
Calculating variability or spread
---------------------------------
    
            type_indices = array('B')
        type_indices.fromfile(fileobj, tzh_timecnt)
    
        msg: The unformatted error message
    doc: The JSON document being parsed
    pos: The start index of doc where parsing failed
    lineno: The line corresponding to pos
    colno: The column corresponding to pos
    
            return source
    
    int WINAPI WinMain(
    HINSTANCE hInstance,      // handle to current instance
    HINSTANCE hPrevInstance,  // handle to previous instance
    LPSTR lpCmdLine,          // pointer to command line
    int nCmdShow              // show state of window
    )
{
    extern int Py_FrozenMain(int, char **);
    PyImport_FrozenModules = _PyImport_FrozenModules;
    return Py_FrozenMain(__argc, __argv);
}
'''
    
        def nearest(self, red, green, blue):
        '''Return the name of color nearest (red, green, blue)'''
        # BAW: should we use Voronoi diagrams, Delaunay triangulation, or
        # octree for speeding up the locating of nearest point?  Exhaustive
        # search is inefficient, but seems fast enough.
        nearest = -1
        nearest_name = ''
        for name, aliases in self.__byrgb.values():
            r, g, b = self.__byname[name.lower()]
            rdelta = red - r
            gdelta = green - g
            bdelta = blue - b
            distance = rdelta * rdelta + gdelta * gdelta + bdelta * bdelta
            if nearest == -1 or distance < nearest:
                nearest = distance
                nearest_name = name
        return nearest_name
    
            Only one instance can be installed at a time.
    
            self.assertEqual(3j ** 0j, 1)
        self.assertEqual(3j ** 0, 1)
    
    
def main():
    tornado.options.parse_command_line()
    application = tornado.web.Application([
        (r'/', MainHandler),
    ])
    http_server = tornado.httpserver.HTTPServer(application)
    http_server.listen(options.port)
    tornado.ioloop.IOLoop.current().start()
    
    import socket
    
    
globals().update(wrap_web_tests_application())
    
            'ExceptionBenchmark().enter_exit(50)',
        'ExceptionBenchmark().call_wrapped(50)',
        'ExceptionBenchmark().enter_exit(500)',
        'ExceptionBenchmark().call_wrapped(500)',
    ]
    for cmd in cmds:
        print(cmd)
        subprocess.check_call(base_cmd + [cmd])
    
            self.maybe_create_tables()
    
    import logging
import tornado.escape
import tornado.ioloop
import tornado.options
import tornado.web
import tornado.websocket
import os.path
import uuid