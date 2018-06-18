
        
          def test_javascript_tag_with_options
    assert_dom_equal '<script id=\'the_js_tag\'>\n//<![CDATA[\nalert('hello')\n//]]>\n</script>',
      javascript_tag('alert('hello')', id: 'the_js_tag')
  end
    
          # Returns constant of subscription adapter specified in config/cable.yml.
      # If the adapter cannot be found, this will default to the Redis adapter.
      # Also makes sure proper dependencies are required.
      def pubsub_adapter
        adapter = (cable.fetch('adapter') { 'redis' })
    
          def redis_connection_for_subscriptions
        redis_connection
      end
    
        # Find the last record (or last N records if a parameter is supplied).
    # If no order is defined it will order by primary key.
    #
    #   Person.last # returns the last object fetched by SELECT * FROM people
    #   Person.where(['user_name = ?', user_name]).last
    #   Person.order('created_on DESC').offset(5).last
    #   Person.last(3) # returns the last three objects fetched by SELECT * FROM people.
    #
    # Take note that in that last case, the results are sorted in ascending order:
    #
    #   [#<Person id:2>, #<Person id:3>, #<Person id:4>]
    #
    # and not:
    #
    #   [#<Person id:4>, #<Person id:3>, #<Person id:2>]
    def last(limit = nil)
      return find_last(limit) if loaded? || has_limit_or_offset?
    
      def test_should_not_perform_joined_include_by_default
    assert_equal Account.count, Account.includes(:firm).count
    queries = assert_sql { Account.includes(:firm).count }
    assert_no_match(/join/i, queries.last)
  end
    
    class RestrictedWithExceptionFirm < Company
  has_one :account, -> { order('id') }, foreign_key: 'firm_id', dependent: :restrict_with_exception
  has_many :companies, -> { order('id') }, foreign_key: 'client_of', dependent: :restrict_with_exception
end
    
        def change_approved_callback
      self.approved = change_approved_before_save unless change_approved_before_save.nil?
    end
end
    
          assert_equal 1, events.length
      assert_equal 'transmit.action_cable', events[0].name
      assert_equal 'ActionCable::Channel::BaseTest::ChatChannel', events[0].payload[:channel_class]
      assert_equal expected_data, events[0].payload[:data]
      assert_nil events[0].payload[:via]
    ensure
      ActiveSupport::Notifications.unsubscribe 'transmit.action_cable'
    end
  end
    
        assert mock.verify
  end
end

    
        ensure
      server.stop
    
      test 'rejecting a connection causes a 404' do
    run_in_eventmachine do
      class CallMeMaybe
        def call(*)
          raise 'Do not call me!'
        end
      end
    
        A binary installer is available:
      https://www.haskell.org/platform/mac.html
    EOS
  when 'mysqldump-secure' then <<-EOS.undent
    The creator of mysqldump-secure tried to game our popularity metrics.
    EOS
  when 'ngrok' then <<-EOS.undent
    Upstream sunsetted 1.x in March 2016 and 2.x is not open-source.
    
      # True if a {Formula} is being built with {Formula.head} instead of {Formula.stable}.
  # <pre>args << '--some-new-stuff' if build.head?</pre>
  # <pre># If there are multiple conditional arguments use a block instead of lines.
  #  if build.head?
  #    args << '--i-want-pizza'
  #    args << '--and-a-cold-beer' if build.with? 'cold-beer'
  #  end</pre>
  def head?
    include? 'HEAD'
  end
    
        first_warning = true
    methods.each do |method|
      unless checks.respond_to?(method)
        Homebrew.failed = true
        puts 'No check available by the name: #{method}'
        next
      end
    
        if ARGV.include?('--pinned') || ARGV.include?('--versions')
      filtered_list
    elsif ARGV.named.empty?
      if ARGV.include? '--full-name'
        full_names = Formula.installed.map(&:full_name).sort do |a, b|
          if a.include?('/') && !b.include?('/')
            1
          elsif !a.include?('/') && b.include?('/')
            -1
          else
            a <=> b
          end
        end
        puts_columns full_names
      else
        ENV['CLICOLOR'] = nil
        exec 'ls', *ARGV.options_only << HOMEBREW_CELLAR
      end
    elsif ARGV.verbose? || !$stdout.tty?
      exec 'find', *ARGV.kegs.map(&:to_s) + %w[-not -type d -print]
    else
      ARGV.kegs.each { |keg| PrettyListing.new keg }
    end
  end
    
      SEARCHABLE_TAPS = OFFICIAL_TAPS.map { |tap| ['Homebrew', tap] } + [
    %w[Caskroom cask],
    %w[Caskroom versions]
  ]
    
        @report = Hash.new { |h, k| h[k] = [] }
    return @report unless updated?
    
    ###
### globals
###
    
            modes       = Array options[:escape]
        @escaper    = options[:escaper]
        @html       = modes.include? :html
        @javascript = modes.include? :javascript
        @url        = modes.include? :url
    
        expect(get('/', {}, 'wants' => 'text/html').headers['X-Frame-Options']).to eq('DENY')
  end
    
      %w(GET HEAD POST PUT DELETE).each do |method|
    it 'accepts #{method} requests when allow_if is true' do
      mock_app do
        use Rack::Protection::HttpOrigin, :allow_if => lambda{|env| env.has_key?('HTTP_ORIGIN') }
        run DummyApp
      end
      expect(send(method.downcase, '/', {}, 'HTTP_ORIGIN' => 'http://any.domain.com')).to be_ok
    end
  end
    
      <h3>Messages</h3>
  <% @messages.each do |msg| %>
    <p><%= msg %></p>
  <% end %>
