
        
            # Separating the 'table of contents' from the contents (blocks)
    table_of_contents = ''.join(read_me.split('- - -')[0])
    blocks = ''.join(read_me.split('- - -')[1]).split('\n# ')
    for i in range(len(blocks)):
        if i == 0:
            blocks[i] = blocks[i] + '\n'
        else:
            blocks[i] = '# ' + blocks[i] + '\n'
    
        self.path_embeddings = path_embeddings
    self.relata_embeddings = relata_embeddings
    self.nc_embeddings = nc_embeddings
    
    if S < N:
  # Note that this isn't necessary for this synthetic example, but
  # it's useful to see how the input factor matrices were initialized
  # for actual neurophysiology data.
  datasets = add_alignment_projections(datasets, npcs=FLAGS.npcs)
    
      if not FLAGS.dis_share_embedding:
    decoder_embedding = [
        v for v in tf.trainable_variables()
        if v.op.name == 'dis/decoder/rnn/embedding'
    ][0]
    
            if not any(os.path.isfile('%s/certutil' % x) for x in os.environ['PATH'].split(os.pathsep)):
            xlog.warn('please install *libnss3-tools* package to import GoAgent root ca')
            return False
    
    log_file = os.path.join(data_path, 'ipv6_tunnel.log')
    
        def nat_type_probe(self):
        print('Starting probe NAT type...')
        self.nat_type = 'probing'
        server_ip_list = self.server_ip_list.copy()
        self.rs_cone_flag = 1
        for server_ip in server_ip_list:
            qualified = self.qualify_loop(server_ip)
            if qualified:
                break
        if qualified is None:
            self.rs_cone_flag = 0
            while server_ip_list:
                server_ip = server_ip_list.pop()
                qualified = self.qualify_loop(server_ip)
                if qualified:
                    break
        if qualified is None:
            self.qualified = False
            return 'offline'
        ra_cone_flag, first_indicate = qualified
        if ra_cone_flag:
            self.qualified = True
            return 'cone'
        qualified = None
        for server_ip in  server_ip_list:
            qualified = self.qualify_loop(server_ip)
            if qualified:
                break
        if qualified is None:
            self.last_server_ip = server_ip
            self.qualified = True
            return 'unknown'
        ra_cone_flag, second_indicate = qualified
        if first_indicate == second_indicate:
            self.qualified = True
            return 'restricted'
        else:
            self.qualified = False
            return 'symmetric'
    
    \note Please be warned that the line numbers in the API documentation do not
match the real locations in the source code of the package. This is an
unintended artifact of doxygen, which I could only convince to use the
correct module names by concatenating all files from the package into a single
module file...
    
    EOF = -1
    
    
    def __str__(self):
        if self.inserted is not None and self.token is not None:
            return 'MissingTokenException(inserted %r at %r)' % (
                self.inserted, self.token.text)