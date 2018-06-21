
        
                adapter = adapter.camelize
        adapter = 'PostgreSQL' if adapter == 'Postgresql'
        'ActionCable::SubscriptionAdapter::#{adapter}'.constantize
      end
    end
  end
end

    
        test 'merging a hash with unknown keys raises' do
      assert_raises(ArgumentError) { Relation::HashMerger.new(nil, omg: 'lol') }
    end
    
      private
    def log_before_remove(record)
      log << 'before_remove#{record.id}'
    end
    
    class Reply < Topic
  belongs_to :topic, foreign_key: 'parent_id', counter_cache: true
  belongs_to :topic_with_primary_key, class_name: 'Topic', primary_key: 'title', foreign_key: 'parent_title', counter_cache: 'replies_count', touch: true
  has_many :replies, class_name: 'SillyReply', dependent: :destroy, foreign_key: 'parent_id'
  has_many :silly_unique_replies, dependent: :destroy, foreign_key: 'parent_id'
end
    
      before_create  :default_written_on
  before_destroy :destroy_children
    
        @connection.stub(:subscriptions, subscriptions) do
      @channel = SecretChannel.new @connection, '{id: 1}', id: 1
      @channel.subscribe_to_channel
    
      def with_puma_server(rack_app = ActionCable.server, port = 3099)
    server = ::Puma::Server.new(rack_app, ::Puma::Events.strings)
    server.add_tcp_listener '127.0.0.1', port
    server.min_threads = 1
    server.max_threads = 4
    
          wait_for_async
      assert_predicate connection.websocket, :alive?
    end
  end
    
          # Find commands in the path
      unless (exts = external_commands).empty?
        puts
        puts 'External commands'
        puts_columns exts
      end
    end
  end
    
        # Exclude cache, logs, and repository, if they are located under the prefix.
    [HOMEBREW_CACHE, HOMEBREW_LOGS, HOMEBREW_REPOSITORY].each do |dir|
      dirs.delete dir.relative_path_from(HOMEBREW_PREFIX).to_s
    end
    dirs.delete 'etc'
    dirs.delete 'var'
    
          puts_columns Array(result)
    else
      query = ARGV.first
      rx = query_regexp(query)
      local_results = search_formulae(rx)
      puts_columns(local_results)
      tap_results = search_taps(rx)
      puts_columns(tap_results)
    
        if !updated
      puts 'Already up-to-date.'
    elsif hub.empty?
      puts 'No changes to formulae.'
    else
      hub.dump
      hub.reporters.each(&:migrate_tap_migration)
      hub.reporters.each(&:migrate_formula_rename)
      Descriptions.update_cache(hub)
    end
    
      # Use this method to generate standard caveats.
  def standard_instructions(home_name, home_value = libexec)
    <<-EOS.undent
      Before you can use these tools you must export some variables to your $SHELL.
    
    def check_ruby
  if RUBY_VERSION.to_f < 2.0
    print 'You are currently using Ruby ', RUBY_VERSION, ', but version 2.0 or above is required.'
    exit 1
  end
end
    
          def initialize(pairs = {})
        @pairs = pairs
        pairs.each do |key, value|
          raise 'invalid container key: '#{key.inspect}'' unless VALID_KEYS.include?(key)
          send(:'#{key}=', value)
        end
    
        # Remove directories opposite from traversal, so that a subtree with no
    # actual files gets removed correctly.
    dirs.reverse_each do |d|
      if d.children.empty?
        puts 'rmdir: #{d} (empty)' if ARGV.verbose?
        d.rmdir
      end
    end
    
      def tag?(tag)
    checksum_for(tag) ? true : false
  end
    
    module Jekyll