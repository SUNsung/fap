
        
        
class TestAutoContentTypeAndAcceptHeaders:
    '''
    Test that Accept and Content-Type correctly defaults to JSON,
    but can still be overridden. The same with Content-Type when --form
    -f is used.
    
    
@pytest.mark.parametrize('follow_flag', ['--follow', '-F'])
def test_follow_without_all_redirects_hidden(httpbin, follow_flag):
    r = http(follow_flag, httpbin.url + '/redirect/2')
    assert r.count('HTTP/1.1') == 1
    assert HTTP_OK in r
    
        if explicit_json and body and (not lexer or isinstance(lexer, TextLexer)):
        # JSON response with an incorrect Content-Type?
        try:
            json.loads(body)  # FIXME: the body also gets parsed in json.py
        except ValueError:
            pass  # Nope
        else:
            lexer = pygments.lexers.get_lexer_by_name('json')
    
    
class Environment:
    '''
    Information about the execution context
    (standard streams, config directory, etc).
    
        def format_body(self, content, mime):
        if is_valid_mime(mime):
            for p in self.enabled_plugins:
                content = p.format_body(content, mime)
        return content

    
        keywords='wechat itchat api robot weixin personal extend',