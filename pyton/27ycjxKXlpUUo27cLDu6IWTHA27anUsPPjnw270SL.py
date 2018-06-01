        if now - self.lastmark >= 3:
            self.lastmark = now
            qps = len(self.tail) / sum(self.tail)
            print('samplesize={0} concurrent={1} qps={2:0.2f}'.format(len(self.tail), self.concurrent, qps))
    
            This method has a side-effect: if we have seen this input for
        this rule and successfully parsed before, then seek ahead to
        1 past the stop token matched for this rule last time.
        '''
    
            if isinstance(first, Token):
            # first is a Token, grap the stream index from it
            first = first.index
    
    

    
        def date(self):
        '''Process the DATE command.
        Returns:
        - resp: server response if successful
        - date: datetime object
        '''
        resp = self._shortcmd('DATE')
        if not resp.startswith('111'):
            raise NNTPReplyError(resp)
        elem = resp.split()
        if len(elem) != 2:
            raise NNTPDataError(resp)
        date = elem[1]
        if len(date) != 14:
            raise NNTPDataError(resp)
        return resp, _parse_datetime(date, None)
    
    def ISTERMINAL(x):
    return x < NT_OFFSET
    
        def checkFlags(self, flags, eor=None, checkset=0, checkunset=0, ignore=0):
        # Method to check the value of msg_flags returned by recvmsg[_into]().
        #
        # Checks that all bits in msg_flags_common_set attribute are
        # set in 'flags' and all bits in msg_flags_common_unset are
        # unset.
        #
        # The 'eor' argument specifies whether the flags should
        # indicate that a full record (or datagram) has been received.
        # If 'eor' is None, no checks are done; otherwise, checks
        # that:
        #
        #  * if 'eor' is true, all bits in msg_flags_eor_indicator are
        #    set and all bits in msg_flags_non_eor_indicator are unset
        #
        #  * if 'eor' is false, all bits in msg_flags_non_eor_indicator
        #    are set and all bits in msg_flags_eor_indicator are unset
        #
        # If 'checkset' and/or 'checkunset' are supplied, they require
        # the given bits to be set or unset respectively, overriding
        # what the attributes require for those bits.
        #
        # If any bits are set in 'ignore', they will not be checked,
        # regardless of the other inputs.
        #
        # Will raise Exception if the inputs require a bit to be both
        # set and unset, and it is not ignored.
    
        forbidden_extensions = ['html', 'htm'] if results.nohtml else []