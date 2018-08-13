
        
        require 'abstract_unit'
    
      def test_redirect_with_null_bytes
    get :redirect_with_null_bytes
    assert_response :redirect
    assert_equal 'http://test.host/lolwat', redirect_to_url
  end
    
            adapter = adapter.camelize
        adapter = 'PostgreSQL' if adapter == 'Postgresql'
        'ActionCable::SubscriptionAdapter::#{adapter}'.constantize
      end
    end
  end
end

    
      def test_assert_called_with_returns
    assert_called_with(@object, :increment, returns: 1) do
      @object.increment
    end
  end
    
    class ActionCable::Channel::BroadcastingTest < ActionCable::TestCase
  class ChatChannel < ActionCable::Channel::Base
  end
    
        timers.each_with_index do |timer, i|
      assert_kind_of Proc, timer[0]
      assert_equal i + 1, timer[1][:every]
    end
  end
    
            # Internal hax = :(
        client = connection.websocket.send(:websocket)
        rack_hijack_io = client.instance_variable_get('@stream').instance_variable_get('@rack_hijack_io')
        rack_hijack_io.stub(:write, proc { raise(closed_exception, 'foo') }) do
          assert_called(client, :client_gone) do
            client.write('boo')
          end
        end
        assert_equal [], connection.errors
      end
    end
  end
    
      test 'broadcaster from broadcaster_for generates notification' do
    begin
      server = TestServer.new
    
          if valid_type?(type)
        type.constantize.new(attributes).tap do |instance|
          instance.user = user if instance.respond_to?(:user=)
        end
      else
        const_get(:BASE_CLASS_NAME).constantize.new(attributes).tap do |instance|
          instance.type = type
          instance.user = user if instance.respond_to?(:user=)
        end
      end
    end
  end
end
    
      def evernote_consumer_key
    (config = Devise.omniauth_configs[:evernote]) && config.strategy.consumer_key
  end
    
        if params[:sort].present?
      attribute, direction = params[:sort].downcase.split('.')
      unless valid_sorts.include?(attribute)
        attribute, direction = default.to_a.first
      end
    else
      attribute, direction = default.to_a.first
    end
    
        respond_to do |format|
      if @user_credential.save
        format.html { redirect_to user_credentials_path, notice: 'Your credential was successfully created.' }
        format.json { render json: @user_credential, status: :created, location: @user_credential }
      else
        format.html { render action: 'new' }
        format.json { render json: @user_credential.errors, status: :unprocessable_entity }
      end
    end
  end
    
          def key?(key)
        super(convert_key(key))
      end
    
                  # Read!
              data << io.readpartial(READ_CHUNK_SIZE).encode('UTF-8', Encoding.default_external)
            else
              # Do a simple non-blocking read on the IO object
              data << io.read_nonblock(READ_CHUNK_SIZE)
            end
          rescue Exception => e
            # The catch-all rescue here is to support multiple Ruby versions,
            # since we use some Ruby 1.9 specific exceptions.
    
          # This returns the keys (or ids) that are in the string.
      #
      # @return [<Array<String>]
      def keys
        regexp = /^#\s*VAGRANT-BEGIN:\s*(.+?)$\r?\n?(.*)$\r?\n?^#\s*VAGRANT-END:\s(\1)$/m
        @value.scan(regexp).map do |match|
          match[0]
        end
      end
    
            # Parse the options
        argv = parse_options(opts)
        return if !argv
        if argv.length < 2
          raise Vagrant::Errors::CLIInvalidUsage,
            help: opts.help.chomp
        end
    
      it 'makes the receiver metaclass the scoped class when used with a string' do
    obj = Object.new
    obj.instance_eval %{
      class B; end
      B
    }
    obj.singleton_class.const_get(:B).should be_an_instance_of(Class)
  end
    
      ruby_version_is '2.4' do
    describe 'full Unicode case mapping' do
      it 'modifies self in place for all of Unicode with no option' do
        a = 'äÖü'
        a.swapcase!
        a.should == 'ÄöÜ'
      end
    
        describe 'as the last parameter' do
      it 'passes without curly braces' do
        specs.fooM3('abc', 123, rbx: 'cool', specs: :fail_sometimes, non_sym: 1234).should ==
          ['abc', 123, { rbx: 'cool', specs: :fail_sometimes, non_sym: 1234 }]
      end
    
        class B
    end
  end
end

    
        @save_to.each { |_, v| FileUtils.mkdir_p(v) }
    
    namespace :bower do
    
    @@ login
<form action='/'>
  <label for='user'>User Name:</label>
  <input name='user' value='' />
  <input type='submit' value='GO!' />
</form>
    
        expect(get('/', {}, 'wants' => 'text/html').headers['X-Frame-Options']).to eq('ALLOW-FROM foo')
  end
    
      it 'accepts a session without changes to tracked parameters' do
    session = {:foo => :bar}
    get '/', {}, 'rack.session' => session
    get '/', {}, 'rack.session' => session
    expect(session[:foo]).to eq(:bar)
  end
    
      # GET /books/1/edit
  def edit
  end
    
              new_source =
            node.receiver.source + ' =~ ' + node.first_argument.source
    
              add_offense(node)
        end
    
            def on_block(node)
          on_body_of_reduce(node) do |body|
            void_next = body.each_node(:next).find do |n|
              n.children.empty? && parent_block_node(n) == node
            end
    
            # Annotate the source code with the RuboCop offenses provided
        #
        # @param offenses [Array<RuboCop::Cop::Offense>]
        #
        # @return [self]
        def with_offense_annotations(offenses)
          offense_annotations =
            offenses.map do |offense|
              indent     = ' ' * offense.column
              carets     = '^' * offense.column_length
    
          # Returns the keyword of the `if` statement as a string. Returns an empty
      # string for ternary operators.
      #
      # @return [String] the keyword of the `if` statement
      def keyword
        ternary? ? '' : loc.keyword.source
      end