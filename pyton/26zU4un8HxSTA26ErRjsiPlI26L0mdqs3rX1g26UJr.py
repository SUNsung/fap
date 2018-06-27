
        
            parser.add_argument('--job-number',
                        metavar='N',
                        action='append',
                        type=int,
                        help='limit downloads to the given job number')
    
        # This matches an IPv6 address, but also permits range expressions.
    #
    # This expression looks complex, but it really only spells out the various
    # combinations in which the basic unit of an IPv6 address (0..ffff) can be
    # written, from :: to 1:2:3:4:5:6:7:8, plus the IPv4-in-IPv6 variants such
    # as ::ffff:192.0.2.3.
    #
    # Note that we can't just use ipaddress.ip_address() because we also have to
    # accept ranges in place of each component.
    
        terminal_stderr_re = [
        re.compile(r'% ?Error: '),
        re.compile(r'^% \w+', re.M),
        re.compile(r'% ?Bad secret'),
        re.compile(r'invalid input', re.I),
        re.compile(r'(?:incomplete|ambiguous) command', re.I),
        re.compile(r'connection timed out', re.I),
        re.compile(r'[^\r\n]+ not found', re.I),
        re.compile(r''[^']' +returned error code: ?\d+'),
        re.compile(r'syntax error'),
        re.compile(r'unknown command'),
        re.compile(r'Error\[\d+\]: ', re.I),
        re.compile(r'Error:', re.I)
    ]
    
    
class TerminalModule(TerminalBase):
    
    
def sort_groups(groups):
    return sorted(groups, key=lambda g: (g.depth, g.priority, g.name))
    
        def get(self, query):
        '''Get the stored query result from the cache.
    
    
class Budget(object):