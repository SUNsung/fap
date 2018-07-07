
        
              # Returns constant of subscription adapter specified in config/cable.yml.
      # If the adapter cannot be found, this will default to the Redis adapter.
      # Also makes sure proper dependencies are required.
      def pubsub_adapter
        adapter = (cable.fetch('adapter') { 'redis' })
    
            def test_url_host_db
          spec = resolve 'abstract://foo/bar?encoding=utf8'
          assert_equal({
            'adapter'  => 'abstract',
            'database' => 'bar',
            'host'     => 'foo',
            'encoding' => 'utf8' }, spec)
        end
    
        line_item = invoice.line_items.new
    assert_equal invoice.id, line_item.invoice_id
    
        assert @channel.room
    assert_predicate @channel, :subscribed?
    
    require 'test_helper'
require 'stubs/test_connection'
require 'stubs/room'
require 'active_support/time'
    
        def read_messages(expected_size = 0)
      list = []
      loop do
        if @has_messages.try_acquire(1, list.size < expected_size ? WAIT_WHEN_EXPECTING_EVENT : WAIT_WHEN_NOT_EXPECTING_EVENT)
          msg = @messages.pop(true)
          raise msg if msg.is_a?(Exception)
    
          # Run ::process method in a given set of Jekyll::Command subclasses and suggest
      # re-running the associated command with --trace switch to obtain any additional
      # information or backtrace regarding the encountered Exception.
      #
      # cmd     - the Jekyll::Command to be handled
      # options - configuration overrides
      # klass   - an array of Jekyll::Command subclasses associated with the command
      #
      # Note that all exceptions are rescued..
      # rubocop: disable RescueException
      def process_with_graceful_fail(cmd, options, *klass)
        klass.each { |k| k.process(options) if k.respond_to?(:process) }
      rescue Exception => e
        raise e if cmd.trace
    
            # rubocop:disable Metrics/AbcSize
        def process(args, opts)
          if !args || args.empty?
            raise Jekyll::Errors::InvalidThemeName, 'You must specify a theme name.'
          end
    
            def stop
          # There is only one EventMachine instance per Ruby process so stopping
          # it here will stop the reactor thread we have running.
          EM.stop if EM.reactor_running?
          Jekyll.logger.debug 'LiveReload Server:', 'halted'
        end
    
          # Public: Provides you with a list of processors, the ones we
      # support internally and the ones that you have provided to us (if you
      # are not in safe mode.)
    
            # If we're just checking, then just return exit codes
        if options[:check]
          return 0 if cap_host.capability?(name)
          return 1
        end
    
              If you don't give a pod `NAME`, you need to specify the `--all`
          flag (this is to avoid cleaning all the cache by mistake).
        DESC
    
      not_found do
    send_file(File.join(File.dirname(__FILE__), 'public', '404.html'), {:status => 404})
  end
    
      if options.respond_to? 'keys'
    options.each do |k,v|
      unless v.nil?
        v = v.join ',' if v.respond_to? 'join'
        v = v.to_json if v.respond_to? 'keys'
        output += ' data-#{k.sub'_','-'}='#{v}''
      end
    end
  elsif options.respond_to? 'join'
    output += ' data-value='#{config[key].join(',')}''
  else
    output += ' data-value='#{config[key]}''
  end
  output += '></#{tag}>'
end
    
      # Used on the blog index to split posts on the <!--more--> marker
  def excerpt(input)
    if input.index(/<!--\s*more\s*-->/i)
      input.split(/<!--\s*more\s*-->/i)[0]
    else
      input
    end
  end
    
      module NotInExpression0
    def rvalue1
      elements[0]
    end
    
          def deliver(msg)
        if msg.respond_to?(:deliver_now)
          # Rails 4.2/5.0
          msg.deliver_now
        else
          # Rails 3.2/4.0/4.1
          msg.deliver
        end
      end
    end
    
          def insert_before(oldklass, newklass, *args)
        i = entries.index { |entry| entry.klass == newklass }
        new_entry = i.nil? ? Entry.new(newklass, *args) : entries.delete_at(i)
        i = entries.index { |entry| entry.klass == oldklass } || 0
        entries.insert(i, new_entry)
      end
    
        it 'logs the exception to Sidekiq.logger' do
      Component.new.invoke_exception(:a => 1)
      @str_logger.rewind
      log = @str_logger.readlines
      assert_match(/'a':1/, log[0], 'didn't include the context')
      assert_match(/Something didn't work!/, log[1], 'didn't include the exception message')
      assert_match(/test\/test_exception_handler.rb/, log[2], 'didn't include the backtrace')
    end