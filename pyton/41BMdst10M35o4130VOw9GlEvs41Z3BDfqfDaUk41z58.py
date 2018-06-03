
        
            def __str__(self):
        #return 'MismatchedTokenException('+self.expecting+')'
        return 'MismatchedTokenException(%r!=%r)' % (
            self.getUnexpectedType(), self.expecting
            )
    __repr__ = __str__
    
    from antlr3 import runtime_version, runtime_version_str
from antlr3.constants import DEFAULT_CHANNEL, HIDDEN_CHANNEL, EOF, \
     EOR_TOKEN_TYPE, INVALID_TOKEN_TYPE
from antlr3.exceptions import RecognitionException, MismatchedTokenException, \
     MismatchedRangeException, MismatchedTreeNodeException, \
     NoViableAltException, EarlyExitException, MismatchedSetException, \
     MismatchedNotSetException, FailedPredicateException, \
     BacktrackingFailed, UnwantedTokenException, MissingTokenException
from antlr3.tokens import CommonToken, EOF_TOKEN, SKIP_TOKEN
from antlr3.compat import set, frozenset, reversed
    
        You can insert stuff, replace, and delete chunks.  Note that the
    operations are done lazily--only if you convert the buffer to a
    String.  This is very efficient because you are not moving data around
    all the time.  As the buffer of tokens is converted to strings, the
    toString() method(s) check to see if there is an operation at the
    current index.  If so, the operation is done and then normal String
    rendering continues on the buffer.  This is like having multiple Turing
    machine instruction streams (programs) operating on a single input tape. :)
    
    site_info = 'ehow.com'
download = ehow_download
download_playlist = playlist_not_supported('ehow')

    
        title = match1(html, r'&title=([^&]+)')
    
    def kuwo_download_by_rid(rid, output_dir = '.', merge = True, info_only = False):
    html=get_content('http://player.kuwo.cn/webmusic/st/getNewMuiseByRid?rid=MUSIC_%s'%rid)
    title=match1(html,r'<name>(.*)</name>')
    #to get title
    #format =aac|mp3 ->to get aac format=mp3 ->to get mp3
    url=get_content('http://antiserver.kuwo.cn/anti.s?format=mp3&rid=MUSIC_%s&type=convert_url&response=url'%rid)
    songtype, ext, size = url_info(url)
    print_info(site_info, title, songtype, size)
    if not info_only:
        download_urls([url], title, ext, size, output_dir)
    
    from ..common import *
    
        type_, ext, size = url_info(stream_url)
    print_info(site_info, title, type_, size)
    if not info_only:
        download_url_ffmpeg(url=stream_url, title=title, ext= 'mp4', output_dir=output_dir)