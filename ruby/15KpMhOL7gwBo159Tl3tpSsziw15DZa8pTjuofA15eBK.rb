      it 'activates an existing user' do
        users(:bob).deactivate!
        visit admin_users_path
        find(:css, 'a[href='/admin/users/#{users(:bob).id}/activate']').click
        expect(page).to have_no_text('inactive')
        users(:bob).reload
        expect(users(:bob)).to be_active
      end
    end
  end
end

    
        context 'running workers' do
      before do
        AgentRunner.class_variable_set(:@@agents, [HuginnScheduler, DelayedJobWorker])
        stub.instance_of(HuginnScheduler).setup
        stub.instance_of(DelayedJobWorker).setup
      end
    
        it 'requires a message' do
      @log.message = ''
      expect(@log).not_to be_valid
      @log.message = nil
      expect(@log).not_to be_valid
      expect(@log).to have(1).error_on(:message)
    end
    
    def mkpieces
  piece(0,[],[0])
  $p.each do |a|
    a0 = a[0]
    a[1] = ud(a0)
    a[2] = rl(a0)
    a[3] = ud(rl(a0))
    a[4] = xy(a0)
    a[5] = ud(xy(a0))
    a[6] = rl(xy(a0))
    a[7] = ud(rl(xy(a0)))
    a.sort!
    a.uniq!
  end
  $p.uniq!.sort! {|x,y| x[0] <=> y[0] }
end
    
          spec['main'] =
          find_files.(File.join(Bootstrap.stylesheets_path, '_bootstrap.scss')) +
          find_files.(Bootstrap.fonts_path) +
          %w(assets/javascripts/bootstrap.js)
    
        def log_http_get_file(url, cached = false)
      s = '  #{'CACHED ' if cached}GET #{url}...'
      if cached
        puts dark green s
      else
        puts dark cyan s
      end
    end
    
          # Returns the else branch of the `case` statement, if any.
      #
      # @return [Node] the else branch node of the `case` statement
      # @return [nil] if the case statement does not have an else branch.
      def else_branch
        node_parts[-1]
      end
    
    module RuboCop
  module AST
    # A node extension for `kwsplat` nodes. This will be used in place of a
    # plain  node when the builder constructs the AST, making its methods
    # available to all `kwsplat` nodes within RuboCop.
    class KeywordSplatNode < Node
      include HashElementNode
    
        def URIEncodeOctets(octets, result, index)
      if (@@hexCharCodeArray == 0)
        @@hexCharCodeArray = [48, 49, 50, 51, 52, 53, 54, 55, 56, 57,
                              65, 66, 67, 68, 69, 70];
      end
      index = URIAddEncodedOctetToBuffer(octets[0], result, index);
      if (octets[1]);
        index = URIAddEncodedOctetToBuffer(octets[1], result, index)
      end
      if (octets[2]);
        index = URIAddEncodedOctetToBuffer(octets[2], result, index)
      end
      if (octets[3]);
        index = URIAddEncodedOctetToBuffer(octets[3], result, index)
      end
      return index;
    end
    
          # http://stackoverflow.com/questions/9445760/bit-shifting-in-ruby
      def left_shift int, shift
        r = ((int & 0xFF) << (shift & 0x1F)) & 0xFFFFFFFF
        # 1>>31, 2**32
        (r & 2147483648) == 0 ? r : r - 4294967296
      end
    
          def string_to_code(string)
        # sha bytes
        b = [Digest::SHA1.hexdigest(string)[0, 20]].pack('H*').bytes.to_a
        # Thanks donpark's IdenticonUtil.java for this.
        # Match the following Java code
        # ((b[0] & 0xFF) << 24) | ((b[1] & 0xFF) << 16) |
        #	 ((b[2] & 0xFF) << 8) | (b[3] & 0xFF)
    
      test 'clean path with leading slash' do
    assert_equal '/Mordor', clean_path('/Mordor')
  end
    
        @wiki = Gollum::Wiki.new(@path)
    page  = @wiki.page('k')
    assert_equal '바뀐 text', utf8(page.raw_data)
    assert_equal 'ghi', page.version.message
  end
    
      File.write('lib/#{name}.rb', old_file)
    
      if base_path.nil?
    Precious::App.run!(options)
  else
    require 'rack'
    
      s.test_files = s.files.select { |path| path =~ /^test\/test_.*\.rb/ }
end
