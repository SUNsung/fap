
        
                if any([s_line.startswith(s) for s in ['* [', '- [']]):
            if indent == last_indent:
                blocks[-1].append(line)
            else:
                blocks.append([line])
            last_indent = indent
        else:
            blocks.append([line])
            last_indent = None
    
    
def get_setting_name_and_refid(node):
    '''Extract setting name from directive index node'''
    entry_type, info, refid = node['entries'][0][:3]
    return info.replace('; setting', ''), refid
    
    # Declare top-level shortcuts
from scrapy.spiders import Spider
from scrapy.http import Request, FormRequest
from scrapy.selector import Selector
from scrapy.item import Item, Field
    
            if opts.nolog:
            self.settings.set('LOG_ENABLED', False, priority='cmdline')
    
        def long_desc(self):
        return ('Edit a spider using the editor defined in the EDITOR environment'
                ' variable or else the EDITOR setting')
    
            try:
            opts.spargs = arglist_to_dict(opts.spargs)
        except ValueError:
            raise UsageError('Invalid -a value, use -a NAME=VALUE', print_help=False)
    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('--get', dest='get', metavar='SETTING',
            help='print raw setting value')
        parser.add_option('--getbool', dest='getbool', metavar='SETTING',
            help='print setting value, interpreted as a boolean')
        parser.add_option('--getint', dest='getint', metavar='SETTING',
            help='print setting value, interpreted as an integer')
        parser.add_option('--getfloat', dest='getfloat', metavar='SETTING',
            help='print setting value, interpreted as a float')
        parser.add_option('--getlist', dest='getlist', metavar='SETTING',
            help='print setting value, interpreted as a list')
    
    
    class ScrapyClientTLSOptions(ClientTLSOptions):
        '''
        SSL Client connection creator ignoring certificate verification errors
        (for genuinely invalid certificates or bugs in verification code).
    
            self.factory.noPage(\
                defer.TimeoutError('Getting %s took longer than %s seconds.' % \
                (self.factory.url, self.factory.timeout)))
    
    def send_raw_msg(self, msgType, content, toUserName):
    url = '%s/webwxsendmsg' % self.loginInfo['url']
    data = {
        'BaseRequest': self.loginInfo['BaseRequest'],
        'Msg': {
            'Type': msgType,
            'Content': content,
            'FromUserName': self.storageClass.userName,
            'ToUserName': (toUserName if toUserName else self.storageClass.userName),
            'LocalID': int(time.time() * 1e4),
            'ClientMsgId': int(time.time() * 1e4),
            },
        'Scene': 0, }
    headers = { 'ContentType': 'application/json; charset=UTF-8', 'User-Agent' : config.USER_AGENT }
    r = self.s.post(url, headers=headers,
        data=json.dumps(data, ensure_ascii=False).encode('utf8'))
    return ReturnValue(rawResponse=r)