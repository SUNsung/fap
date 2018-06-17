
        
                # Require the adapter itself and give useful feedback about
        #   1. Missing adapter gems and
        #   2. Adapter gems' missing dependencies.
        path_to_adapter = 'action_cable/subscription_adapter/#{adapter}'
        begin
          require path_to_adapter
        rescue LoadError => e
          # We couldn't require the adapter itself. Raise an exception that
          # points out config typos and missing gems.
          if e.path == path_to_adapter
            # We can assume that a non-builtin adapter was specified, so it's
            # either misspelled or missing from Gemfile.
            raise e.class, 'Could not load the '#{adapter}' Action Cable pubsub adapter. Ensure that the adapter is spelled correctly in config/cable.yml and that you've added the necessary adapter gem to your Gemfile.', e.backtrace
    
          def shutdown
        @listener.shutdown if @listener
      end
    
            def test_url_sub_key_merges_correctly
          hash = { 'url' => 'abstract://foo?encoding=utf8&', 'adapter' => 'sqlite3', 'host' => 'bar', 'pool' => '3' }
          spec = resolve :production, 'production' => hash
          assert_equal({
            'adapter'  => 'abstract',
            'host'     => 'foo',
            'encoding' => 'utf8',
            'pool'     => '3',
            'name'     => 'production' }, spec)
        end
    
              def listen
            @adapter.with_subscriptions_connection do |pg_conn|
              catch :shutdown do
                loop do
                  until @queue.empty?
                    action, channel, callback = @queue.pop(true)
    
    require 'action_view'
    
        @channel.unsubscribe_from_channel
    
        public :process_internal_message
    
          assert_called(channel1, :unsubscribe_from_channel) do
        assert_called(channel2, :unsubscribe_from_channel) do
          @subscriptions.unsubscribe_from_all
        end
      end
    end
  end
    
          buffer = '12345'
      n.pack('ccc', buffer: buffer).should == '12345ABC'
    end
    
      class InitializeException < StandardError
    attr_reader :ivar
    
      it 'returns 1 if the first argument is a point in time after the second argument (down to a millisecond)' do
    (Time.at(0, 1000) <=> Time.at(0, 0)).should == 1
    (Time.at(1202778512, 1000) <=> Time.at(1202778512, 999)).should == 1
  end
    
      describe 'with mandatory and optional arguments' do
    it 'uses the passed values in left to right order' do
      specs.fooM1O1(2).should == [2,1]
    end
    
          ret = @s.RSTRING_PTR_after_funcall(str, lamb)
    
          opts.on('-T', '--to FORMAT',
        'The format to convert to. Can be scss or sass.',
        'By default, this is inferred from the output filename.',
        'If there is none, defaults to sass.') do |name|
        @options[:to] = name.downcase.to_sym
        unless [:scss, :sass].include?(@options[:to])
          raise 'Unknown format for sass-convert --to: #{name}'
        end
      end
    
            def define_logger(name, options = {})
          class_eval <<-RUBY, __FILE__, __LINE__ + 1
            def #{name}(message)
              #{options.fetch(:to, :log)}(#{name.inspect}, message)
            end
          RUBY
        end
      end
    end
  end
end

    
        # @see \{MediaQuery#to\_a}
    def to_a
      res = []
      res += modifier
      res << ' ' unless modifier.empty?
      res += type
      res << ' and ' unless type.empty? || expressions.empty?
      res += Sass::Util.intersperse(expressions, ' and ').flatten
      res
    end
    
          context 'when the variables is undefined' do
        it 'calls the block' do
          expect(dsl.fetch(:source_control) { :svn }).to eq :svn
        end
      end
    end
  end
    
        def names_for(klass)
      @attachments[klass].keys
    end
    
        EMPTY_TYPE = 'inode/x-empty'
    SENSIBLE_DEFAULT = 'application/octet-stream'
    
            def allowing *types
          @allowed_types = types.flatten
          self
        end
    
    
    {  # Returns hash with styles missing from recent run of rake paperclip:refresh:missing_styles
  #   {
  #     :User => {:avatar => [:big]},
  #     :Book => {
  #       :cover => [:croppable]},
  #     }
  #   }
  def self.missing_attachments_styles
    current_styles = current_attachments_styles
    registered_styles = get_registered_attachments_styles
    
    module Paperclip
  # Provides helper methods that can be used in migrations.
  module Schema
    COLUMNS = {:file_name    => :string,
               :content_type => :string,
               :file_size    => :integer,
               :updated_at   => :datetime}
    
          def validate_whitelist(record, attribute, value)
        if allowed_types.present? && allowed_types.none? { |type| type === value }
          mark_invalid record, attribute, allowed_types
        end
      end