
        
            to remove replace in this file ismount( -> os.path.ismount( and remove this
    function'''
    
            if response.status_code != 200:
            raise Exception(response.content)
    
        args = parser.parse_args()
    
        return results

    
        def on_open_shell(self):
        try:
            self._exec_cli_command(b'environment no more')
        except AnsibleConnectionFailure:
            raise AnsibleConnectionFailure('unable to set terminal parameters')

    
            lines = process.communicate()[0].splitlines()
        ws_root = get_root()
        ws_filepath = os.path.relpath(filepath, ws_root)
        for line in lines:
            line = extract_line_info(line, ws_filepath, toolname)
            if line:
                report.append(line)
    return report
    
        @csrf_exempt
    @json_validate(
        signature=VSigned(),
        user=VThrottledLogin(['user', 'passwd']),
    )
    def POST_login(self, responder, user, **kwargs):
        kwargs.update(dict(
            controller=self,
            form=responder('noop'),
            responder=responder,
            user=user,
        ))
        return handle_login(**kwargs)
    
            def builder_wrapper(thing = None):
            kw = {}
            if not thing:
                kw['url'] = url
                kw['title'] = title
            return ButtonLite(thing,
                              image = 1 if buttonimage is None else buttonimage,
                              target = '_new' if newwindow else '_parent',
                              styled = styled, **kw)
    
    
def handle_awful_failure(fail_text):
    '''
    Makes sure that no errors generated in the error handler percolate
    up to the user unless debug is enabled.
    '''
    if g.debug:
        import sys
        s = sys.exc_info()
        # reraise the original error with the original stack trace
        raise s[1], None, s[2]
    try:
        # log the traceback, and flag the 'path' as the error location
        import traceback
        log.write_error_summary(fail_text)
        for line in traceback.format_exc().splitlines():
            g.log.error(line)
        return redditbroke % (make_failien_url(), websafe(fail_text))
    except:
        # we are doomed.  Admit defeat
        return 'This is an error that should never occur.  You win.'

    
        def GET_health(self):
        if os.path.exists('/var/opt/reddit/quiesce'):
            request.environ['usable_error_content'] = 'No thanks, I'm full.'
            abort(503)