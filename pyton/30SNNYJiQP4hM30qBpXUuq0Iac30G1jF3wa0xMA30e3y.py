
        
                return view(**kwargs)
    
    
@pytest.mark.parametrize('path', ('/create', '/1/update'))
def test_create_update_validate(client, auth, path):
    auth.login()
    response = client.post(path, data={'title': '', 'body': ''})
    assert b'Title is required.' in response.data
    
            def to_url(self, value):
            base_to_url = super(ListConverter, self).to_url
            return ','.join(base_to_url(x) for x in value)
    
            idx = 0
        while True:
            url = urls[idx % len(urls)]
            yield Request(url, dont_filter=True)
            idx += 1
    
    # Check minimum required Python version
import sys
if sys.version_info < (2, 7):
    print('Scrapy %s requires Python 2.7' % __version__)
    sys.exit(1)
    
        default_settings = {
        'LOG_LEVEL': 'INFO',
        'LOGSTATS_INTERVAL': 1,
        'CLOSESPIDER_TIMEOUT': 10,
    }
    
        def short_desc(self):
        return 'Edit spider'
    
        requires_project = False
    default_settings = {'SPIDER_LOADER_WARN_ONLY': True}
    
        def load(self, loader):
        loader.add_option(
            'rfile', typing.Optional[str], None,
            'Read flows from file.'
        )
        loader.add_option(
            'readfile_filter', typing.Optional[str], None,
            'Read only matching flows.'
        )
    
        @command.command('replay.server.file')
    def load_file(self, path: mitmproxy.types.Path) -> None:
        try:
            flows = io.read_flows_from_paths([path])
        except exceptions.FlowReadException as e:
            raise exceptions.CommandError(str(e))
        self.load_flows(flows)
    
        def configure(self, updated):
        if 'stickycookie' in updated:
            if ctx.options.stickycookie:
                flt = flowfilter.parse(ctx.options.stickycookie)
                if not flt:
                    raise exceptions.OptionsError(
                        'stickycookie: invalid filter expression: %s' % ctx.options.stickycookie
                    )
                self.flt = flt
            else:
                self.flt = None
    
            if log.log_tier(ctx.options.termlog_verbosity) >= log.log_tier(e.level):
            click.secho(
                e.msg,
                file=outfile,
                fg=dict(error='red', warn='yellow',
                        alert='magenta').get(e.level),
                dim=(e.level == 'debug'),
                err=(e.level == 'error')
            )

    
        def push(self, item, priority=None):
        '''Push the item in the priority queue.
        if priority is not given, priority is set to the value of item.
        '''
        priority = item if priority is None else priority
        node = PriorityQueueNode(item, priority)
        for index, current in enumerate(self.priority_queue_list):
            if current.priority < node.priority:
                self.priority_queue_list.insert(index, node)
                return
        # when traversed complete queue
        self.priority_queue_list.append(node)