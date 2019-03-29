
        
            def test_lru_hash_only_once(self):
        # To protect against weird reentrancy bugs and to improve
        # efficiency when faced with slow __hash__ methods, the
        # LRU cache guarantees that it will only call __hash__
        # only once per use as an argument to the cached function.
    
            if xdev:
            args = (sys.executable, '-X', 'dev', *args)
        else:
            args = (sys.executable, *args)
        proc = subprocess.run(args,
                              stdout=subprocess.PIPE,
                              stderr=subprocess.STDOUT,
                              universal_newlines=True,
                              env=env)
        if check_exitcode:
            self.assertEqual(proc.returncode, 0, proc)
        return proc.stdout.rstrip()
    
    # An imaginary module that would make this work and be safe.
from imaginary import magic_html_parser
    
    import os
import email
import mimetypes
    
    while True:
    line = input()
    if line == '':
        break
    buffer += line
    if sqlite3.complete_statement(buffer):
        try:
            buffer = buffer.strip()
            cur.execute(buffer)