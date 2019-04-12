
        
            def extract_url(self, line):
        '''Extract the generated url from the log line.'''
        pass
    
        def crawl_page(self, page):
        for url in page.child_urls:
            self.data_store.add_link_to_crawl(url)
        self.reverse_index_queue.generate(page)
        self.doc_index_queue.generate(page)
        self.data_store.remove_link_to_crawl(page.url)
        self.data_store.insert_crawled_link(page.url, page.signature)
    
        def __init__(self, handler=None, host='localhost', port=0, requests_to_handle=1, wait_to_close_event=None):
        super(Server, self).__init__()
    
            Literal:                   '#000000',        # class: 'l'
        Literal.Date:              '#000000',        # class: 'ld'
    
                sock.close()
    
            >>> from_key_val_list([('key', 'val')])
        OrderedDict([('key', 'val')])
        >>> from_key_val_list('string')
        ValueError: cannot encode objects that are not 2-tuples
        >>> from_key_val_list({'key': 'val'})
        OrderedDict([('key', 'val')])
    
                if ret[i, 0] != i_label:  # 样本的类别发生了改变
                changed = True
    
        Args:
        x(tf.Tensor):
        n_unit(int): 
        act_fn:
        name(str):
        reuse(bool):
    '''
    # n_input = tf.shape(x)[-1]  # err: need int but tensor
    n_input = int(x.get_shape()[-1])
    with tf.variable_scope(name or 'dense', reuse=reuse):
        W, b = get_wb([n_input, n_unit])
        o = act_fn(tf.matmul(x, W) + b)
    return o