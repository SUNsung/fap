
        
            # Returns an array of addresses ranges
    #
    # @return [Array<String>]
    def addresses
      (boundary || '').split('\n')
    end
    
        inp.attributes.keys.each do |ikey|
      if (ikey.downcase == 'value')
        inp[ikey] = ''
        next
      end
    
        # We want to return immediatly if we do not have a packet which is handled by us
    return unless pkt.is_tcp?
    return if (pkt.tcp_sport != 143 and pkt.tcp_dport != 143)
    s = find_session((pkt.tcp_sport == 143) ? get_session_src(pkt) : get_session_dst(pkt))
    s[:sname] ||= 'imap4'
    
    
jarsignerOpts	= ['-keystore', 'msfkeystore', '-storepass', 'msfstorepass',
		   '-keypass', 'msfkeypass', '-signedJar', 's#{outputJar}',
		   outputJar, 'signFiles']
    
    		elsif line =~ /\w+:\t/
			block_do(line)
    
    post '/' do
  connections.each { |out| out << 'data: #{params[:msg]}\n\n' }
  204 # response without entity body
end
    
      context 'escaping' do
    it 'escapes html entities' do
      mock_app do |env|
        request = Rack::Request.new(env)
        [200, {'Content-Type' => 'text/plain'}, [request.params['foo']]]
      end
      get '/', :foo => '<bar>'
      expect(body).to eq('&lt;bar&gt;')
    end
    
      %w(GET HEAD POST PUT DELETE).each do |method|
    it 'accepts #{method} requests with no Origin' do
      expect(send(method.downcase, '/')).to be_ok
    end
  end
    
      context 'escaping' do
    before do
      mock_app { |e| [200, {'Content-Type' => 'text/plain'}, [e['PATH_INFO']]] }
    end
    
      # rspec-mocks config goes here. You can use an alternate test double
  # library (such as bogus or mocha) by changing the `mock_with` option here.
  config.mock_with :rspec do |mocks|
    # Enable only the newer, non-monkey-patching expect syntax.
    # For more details, see:
    #   - http://teaisaweso.me/blog/2013/05/27/rspecs-new-message-expectation-syntax/
    mocks.syntax = :expect
    
    When /^(?:|I )press '([^']*)'$/ do |button|
  click_button(button)
end
    
        def add_active_record_callbacks
      name = @name
      @klass.send(:after_save) { send(name).send(:save) }
      @klass.send(:before_destroy) { send(name).send(:queue_all_for_delete) }
      if @klass.respond_to?(:after_commit)
        @klass.send(:after_commit, on: :destroy) do
          send(name).send(:flush_deletes)
        end
      else
        @klass.send(:after_destroy) { send(name).send(:flush_deletes) }
      end
    end
    
        def load_processor(name)
      if defined?(Rails.root) && Rails.root
        filename = '#{name.to_s.underscore}.rb'
        directories = %w(lib/paperclip lib/paperclip_processors)
    
      # GET /books/new
  def new
    @book = Book.new
  end
    
            def on_case(case_node)
          case_node.when_branches.each_with_object([]) do |when_node, previous|
            when_node.each_condition do |condition|
              next unless repeated_condition?(previous, condition)
    
            private