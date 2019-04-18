
        
                When updating an entry, updates its position to the front of the LRU list.
        If the entry is new and the cache is at capacity, removes the oldest entry
        before the new entry is added.
        '''
        node = self.lookup.get(query)
        if node is not None:
            # Key exists in cache, update the value
            node.results = results
            self.linked_list.move_to_front(node)
        else:
            # Key does not exist in cache
            if self.size == self.MAX_SIZE:
                # Remove the oldest entry from the linked list and lookup
                self.lookup.pop(self.linked_list.tail.query, None)
                self.linked_list.remove_from_tail()
            else:
                self.size += 1
            # Add the new key and value
            new_node = Node(results)
            self.linked_list.append_to_front(new_node)
            self.lookup[query] = new_node

    
        def _park_starting_at_spot(self, spot, vehicle):
        '''Occupy starting at spot.spot_number to vehicle.spot_size.'''
        pass
    
        def steps(self):
        '''Run the map and reduce steps.'''
        return [
            self.mr(mapper=self.mapper,
                    reducer=self.reducer),
            self.mr(mapper=self.mapper_sort,
                    reducer=self.reducer_identity),
        ]
    
            When updating an entry, updates its position to the front of the LRU list.
        If the entry is new and the cache is at capacity, removes the oldest entry
        before the new entry is added.
        '''
        node = self.map[query]
        if node is not None:
            # Key exists in cache, update the value
            node.results = results
            self.linked_list.move_to_front(node)
        else:
            # Key does not exist in cache
            if self.size == self.MAX_SIZE:
                # Remove the oldest entry from the linked list and lookup
                self.lookup.pop(self.linked_list.tail.query, None)
                self.linked_list.remove_from_tail()
            else:
                self.size += 1
            # Add the new key and value
            new_node = Node(query, results)
            self.linked_list.append_to_front(new_node)
            self.lookup[query] = new_node

    
        def crawl(self):
        while True:
            page = self.data_store.extract_max_priority_page()
            if page is None:
                break
            if self.data_store.crawled_similar(page.signature):
                self.data_store.reduce_priority_link_to_crawl(page.url)
            else:
                self.crawl_page(page)
            page = self.data_store.extract_max_priority_page()

    
    Provides utility functions that are consumed internally by Requests
which depend on extremely few external helpers (such as compat)
'''
    
            self.handler = handler or consume_socket_content
        self.handler_results = []
    
    if is_py2:
    from urllib import (
        quote, unquote, quote_plus, unquote_plus, urlencode, getproxies,
        proxy_bypass, proxy_bypass_environment, getproxies_environment)
    from urlparse import urlparse, urlunparse, urljoin, urlsplit, urldefrag
    from urllib2 import parse_http_list
    import cookielib
    from Cookie import Morsel
    from StringIO import StringIO
    from collections import Callable, Mapping, MutableMapping, OrderedDict
    
            .. warning:: operation is O(n), not O(1).
        '''
        return self._find_no_duplicates(name)
    
    
def test_idna_with_version_attribute(mocker):
    '''Verify we're actually setting idna version when it should be available.'''
    mocker.patch('requests.help.idna', new=VersionedPackage('2.6'))
    assert info()['idna'] == {'version': '2.6'}

    
        :param method: method for the new :class:`Request` object.
    :param url: URL for the new :class:`Request` object.
    :param params: (optional) Dictionary, list of tuples or bytes to send
        in the query string for the :class:`Request`.
    :param data: (optional) Dictionary, list of tuples, bytes, or file-like
        object to send in the body of the :class:`Request`.
    :param json: (optional) A JSON serializable Python object to send in the body of the :class:`Request`.
    :param headers: (optional) Dictionary of HTTP Headers to send with the :class:`Request`.
    :param cookies: (optional) Dict or CookieJar object to send with the :class:`Request`.
    :param files: (optional) Dictionary of ``'name': file-like-objects`` (or ``{'name': file-tuple}``) for multipart encoding upload.
        ``file-tuple`` can be a 2-tuple ``('filename', fileobj)``, 3-tuple ``('filename', fileobj, 'content_type')``
        or a 4-tuple ``('filename', fileobj, 'content_type', custom_headers)``, where ``'content-type'`` is a string
        defining the content type of the given file and ``custom_headers`` a dict-like object containing additional headers
        to add for the file.
    :param auth: (optional) Auth tuple to enable Basic/Digest/Custom HTTP Auth.
    :param timeout: (optional) How many seconds to wait for the server to send data
        before giving up, as a float, or a :ref:`(connect timeout, read
        timeout) <timeouts>` tuple.
    :type timeout: float or tuple
    :param allow_redirects: (optional) Boolean. Enable/disable GET/OPTIONS/POST/PUT/PATCH/DELETE/HEAD redirection. Defaults to ``True``.
    :type allow_redirects: bool
    :param proxies: (optional) Dictionary mapping protocol to the URL of the proxy.
    :param verify: (optional) Either a boolean, in which case it controls whether we verify
            the server's TLS certificate, or a string, in which case it must be a path
            to a CA bundle to use. Defaults to ``True``.
    :param stream: (optional) if ``False``, the response content will be immediately downloaded.
    :param cert: (optional) if String, path to ssl client cert file (.pem). If Tuple, ('cert', 'key') pair.
    :return: :class:`Response <Response>` object
    :rtype: requests.Response
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
                def raising_fn(callback_future):
                raising_was_called[0] = True
                raise Exception('doh!')
    
    
def main():
    test = TestSelectionSort()
    selection_sort = SelectionSort()
    test.test_selection_sort(selection_sort.sort)
    try:
        test.test_selection_sort(selection_sort.sort_recursive)
        test.test_selection_sort(selection_sort.sor_iterative_alt)
    except NameError:
        # Alternate solutions are only defined
        # in the solutions file
        pass
    
            print('Test: Enqueue on empty stack')
        print('Test: Enqueue on non-empty stack')
        print('Test: Multiple enqueue in a row')
        num_items = 3
        for i in range(0, num_items):
            queue.enqueue(i)
    
    		print('Test: delete')
		myTree.delete(5)
		assert_equal(myTree.treeIsEmpty(), True)
		
		print('Test: more complex deletions')
		[myTree.insert(x) for x in range(1, 5)]
		myTree.delete(2)
		assert_equal(myTree.root.rightChild.data, 3)
		print('Test: delete invalid value')
		assert_equal(myTree.delete(100), False)
    
    
if __name__ == '__main__':
    rs = RandomizedSet()
    print('insert 1: ', rs.insert(1))
    print('insert 2: ', rs.insert(2))
    print('insert 3: ', rs.insert(3))
    print('insert 4: ', rs.insert(4))
    print('remove 3: ', rs.remove(3))
    print('remove 3: ', rs.remove(3))
    print('remove 1: ', rs.remove(1))
    print('random: ', rs.get_random())
    print('random: ', rs.get_random())
    print('random: ', rs.get_random())
    print('random: ', rs.get_random())

    
        for _ in range(k):
        if valid_witness(random.randrange(2, n - 2)):
            return False
    
    return True

    
                for a in self.addons[:]:
                if a.path not in ctx.options.scripts:
                    ctx.log.info('Un-loading script: %s' % a.path)
                    ctx.master.addons.remove(a)
                    self.addons.remove(a)
    
    
def ckey(attrs: Dict[str, str], f: http.HTTPFlow) -> TOrigin:
    '''
        Returns a (domain, port, path) tuple.
    '''
    domain = f.request.host
    path = '/'
    if 'domain' in attrs:
        domain = attrs['domain']
    if 'path' in attrs:
        path = attrs['path']
    return (domain, f.request.port, path)
    
        _stateobject_attributes = dict(
        id=str,
        address=tuple,
        tls_established=bool,
        clientcert=certs.Cert,
        mitmcert=certs.Cert,
        timestamp_start=float,
        timestamp_tls_setup=float,
        timestamp_end=float,
        sni=str,
        cipher_name=str,
        alpn_proto_negotiated=bytes,
        tls_version=str,
        tls_extensions=typing.List[typing.Tuple[int, bytes]],
    )
    
    
    class Chunk(KaitaiStruct):
        def __init__(self, _io, _parent=None, _root=None):
            self._io = _io
            self._parent = _parent
            self._root = _root if _root else self
            self.len = self._io.read_u4be()
            self.type = (self._io.read_bytes(4)).decode(u'UTF-8')
            _on = self.type
            if _on == u'iTXt':
                self._raw_body = self._io.read_bytes(self.len)
                io = KaitaiStream(BytesIO(self._raw_body))
                self.body = self._root.InternationalTextChunk(io, self, self._root)
            elif _on == u'gAMA':
                self._raw_body = self._io.read_bytes(self.len)
                io = KaitaiStream(BytesIO(self._raw_body))
                self.body = self._root.GamaChunk(io, self, self._root)
            elif _on == u'tIME':
                self._raw_body = self._io.read_bytes(self.len)
                io = KaitaiStream(BytesIO(self._raw_body))
                self.body = self._root.TimeChunk(io, self, self._root)
            elif _on == u'PLTE':
                self._raw_body = self._io.read_bytes(self.len)
                io = KaitaiStream(BytesIO(self._raw_body))
                self.body = self._root.PlteChunk(io, self, self._root)
            elif _on == u'bKGD':
                self._raw_body = self._io.read_bytes(self.len)
                io = KaitaiStream(BytesIO(self._raw_body))
                self.body = self._root.BkgdChunk(io, self, self._root)
            elif _on == u'pHYs':
                self._raw_body = self._io.read_bytes(self.len)
                io = KaitaiStream(BytesIO(self._raw_body))
                self.body = self._root.PhysChunk(io, self, self._root)
            elif _on == u'tEXt':
                self._raw_body = self._io.read_bytes(self.len)
                io = KaitaiStream(BytesIO(self._raw_body))
                self.body = self._root.TextChunk(io, self, self._root)
            elif _on == u'cHRM':
                self._raw_body = self._io.read_bytes(self.len)
                io = KaitaiStream(BytesIO(self._raw_body))
                self.body = self._root.ChrmChunk(io, self, self._root)
            elif _on == u'sRGB':
                self._raw_body = self._io.read_bytes(self.len)
                io = KaitaiStream(BytesIO(self._raw_body))
                self.body = self._root.SrgbChunk(io, self, self._root)
            elif _on == u'zTXt':
                self._raw_body = self._io.read_bytes(self.len)
                io = KaitaiStream(BytesIO(self._raw_body))
                self.body = self._root.CompressedTextChunk(io, self, self._root)
            else:
                self.body = self._io.read_bytes(self.len)
            self.crc = self._io.read_bytes(4)