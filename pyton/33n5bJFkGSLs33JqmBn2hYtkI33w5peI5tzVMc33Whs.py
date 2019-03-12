
        
            See :class:`Packer` for options.
    '''
    packer = Packer(**kwargs)
    stream.write(packer.pack(o))
    
            exp = pd.DatetimeIndex(['2011-01-01 09:00', '2011-01-01 10:00',
                                '2011-01-01 11:00'], tz=tz)
        tm.assert_index_equal(
            idx.fillna(pd.Timestamp('2011-01-01 10:00', tz=tz)), exp)
    
            self.reloadtask = None
        if reload:
            self.reloadtask = asyncio.ensure_future(self.watcher())
        else:
            self.loadscript()
    
        def run(self, f, is_request):
        if self.max_size:
            r = f.request if is_request else f.response
            try:
                expected_size = http1.expected_http_body_size(
                    f.request, f.response if not is_request else None
                )
            except exceptions.HttpException:
                f.reply.kill()
                return
            if expected_size and not r.raw_content and not (0 <= expected_size <= self.max_size):
                # r.stream may already be a callable, which we want to preserve.
                r.stream = r.stream or True
                ctx.log.info('Streaming {} {}'.format('response from' if not is_request else 'request to', f.request.host))
    
            if log.log_tier(ctx.options.termlog_verbosity) >= log.log_tier(e.level):
            click.secho(
                e.msg,
                file=outfile,
                fg=dict(error='red', warn='yellow',
                        alert='magenta').get(e.level),
                dim=(e.level == 'debug'),
                err=(e.level == 'error')
            )

    
    
    class TextChunk(KaitaiStruct):
        def __init__(self, _io, _parent=None, _root=None):
            self._io = _io
            self._parent = _parent
            self._root = _root if _root else self
            self.keyword = (self._io.read_bytes_term(0, False, True, True)).decode(u'iso8859-1')
            self.text = (self._io.read_bytes_full()).decode(u'iso8859-1')
    
    		page.addToken(0x05, 'UmCallerID')
		page.addToken(0x06, 'UmUserNotes')
		page.addToken(0x07, 'UmAttDuration')
		page.addToken(0x08, 'UmAttOrder')
		page.addToken(0x09, 'ConversationId')
		page.addToken(0x0A, 'ConversationIndex')
		page.addToken(0x0B, 'LastVerbExecuted')
		page.addToken(0x0C, 'LastVerbExecutionTime')
		page.addToken(0x0D, 'ReceivedAsBcc')
		page.addToken(0x0E, 'Sender')
		page.addToken(0x0F, 'CalendarType')
		page.addToken(0x10, 'IsLeapMonth')
		page.addToken(0x11, 'AccountId')
		page.addToken(0x12, 'FirstDayOfWeek')
		page.addToken(0x13, 'MeetingMessageType')
		self.codePages.append(page)
		# endregion
    
    @pytest.mark.usefixtures('resetSettings')
@pytest.mark.usefixtures('resetTempSettings')
class TestAnnounce:
    def testSenderInfo(self, announcer):
        sender_info = announcer.sender_info
        assert sender_info['port'] > 0
        assert len(sender_info['peer_id']) == 20
        assert sender_info['rev'] > 0
    
    
def toOpensslPublickey(publickey):
    publickey_bin = btctools.encode_pubkey(publickey, 'bin')
    publickey_bin = publickey_bin[1:]
    publickey_openssl = '\x02\xca\x00 ' + publickey_bin[:32] + '\x00 ' + publickey_bin[32:]
    return publickey_openssl

    
        def tell(self):
        return self.pos