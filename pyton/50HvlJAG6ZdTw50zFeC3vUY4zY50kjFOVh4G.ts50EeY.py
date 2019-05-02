
        
                if opts.nolog:
            self.settings.set('LOG_ENABLED', False, priority='cmdline')
    
        def long_desc(self):
        return ('Edit a spider using the editor defined in the EDITOR environment'
                ' variable or else the EDITOR setting')
    
            if not assertion:
            if self.min_bound == self.max_bound:
                expected = self.min_bound
            else:
                expected = '%s..%s' % (self.min_bound, self.max_bound)
    
    from scrapy import twisted_version
    
            # XXX: Google parses at least first 100k bytes; scrapy's redirect
        # middleware parses first 4k. 4k turns out to be insufficient
        # for this middleware, and parsing 100k could be slow.
        # We use something in between (32K) by default.
        self.lookup_bytes = settings.getint('AJAXCRAWL_MAXSIZE', 32768)
    
        Extension is everything from the last dot to the end, ignoring
    leading dots.  Returns '(root, ext)'; ext may be empty.'''
    # NOTE: This code must work for text and bytes strings.
    
    
if __name__ == '__main__':
    main()

    
    # If we want to print a preview of the message content, we can extract whatever
# the least formatted payload is and print the first three lines.  Of course,
# if the message has no plain text part printing the first three lines of html
# is probably useless, but this is just a conceptual example.
simplest = msg.get_body(preferencelist=('plain', 'html'))
print()
print(''.join(simplest.get_content().splitlines(keepends=True)[:3]))
    
            try:
            print(pool.map(f, list(range(10))))
        except ZeroDivisionError:
            print('\tGot ZeroDivisionError as expected from pool.map()')
        else:
            raise AssertionError('expected ZeroDivisionError')
    
            # h_tilde(h~): question to context attended query vectors
        b = tf.reduce_max(S, axis=2)  # [N, T]
        b = softmax(b, axis=-1)  # [N, T]
        b = tf.expand_dims(b, axis=1)  # [N, 1, T]
        h_tilde = tf.matmul(b, h)  # [N, 1, d]
        h_tilde = tf.tile(h_tilde, [1, T, 1])  # [N, T, d]