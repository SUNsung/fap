
        
        # Test https://github.com/jekyll/jekyll/pull/6735#discussion_r165499868
# ------------------------------------------------------------------------
def check_with_regex(content)
  !content.to_s.match?(%r!{[{%]!)
end
    }
    }
    
      p.option 'source', '-s', '--source [DIR]', 'Source directory (defaults to ./)'
  p.option 'destination', '-d', '--destination [DIR]',
    'Destination directory (defaults to ./_site)'
  p.option 'safe', '--safe', 'Safe mode (defaults to false)'
  p.option 'plugins_dir', '-p', '--plugins PLUGINS_DIR1[,PLUGINS_DIR2[,...]]', Array,
    'Plugins directory (defaults to ./_plugins)'
  p.option 'layouts_dir', '--layouts DIR', String,
    'Layouts directory (defaults to ./_layouts)'
  p.option 'profile', '--profile', 'Generate a Liquid rendering profile'
    
              theme.create!
          Jekyll.logger.info 'Your new Jekyll theme, #{theme.name.cyan},' \
                             ' is ready for you in #{theme.path.to_s.cyan}!'
          Jekyll.logger.info 'For help getting started, read #{theme.path}/README.md.'
        end
        # rubocop:enable Metrics/AbcSize
      end
    end
  end
end

    
            def log_error(error)
          Jekyll.logger.error 'LiveReload experienced an error. ' \
            'Run with --trace for more information.'
          raise error
        end
      end
    end
  end
end

    
      def delete_target_file?
    return true if overwrite?
    puts('File #{target_file} exist, do you want to overwrite it? (Y/N)')
    ( 'y' == STDIN.gets.strip.downcase ? true : false)
  end
    
        def load_locale!
      require 'i18n'
      I18n.enforce_available_locales = true
      I18n.load_path << LogStash::Environment.locales_path('en.yml')
      I18n.reload!
      fail 'No locale? This is a bug.' if I18n.available_locales.empty?
    end
    
        class << self
      def elastic_pack_base_uri
        env_url = ENV['LOGSTASH_PACK_URL']
        (env_url.nil? || env_url.empty?) ? DEFAULT_PACK_URL : env_url
      end
    
        it 'allows #via to point to same Redi' do
      conn = MiniTest::Mock.new
      conn.expect(:multi, [0, 1])
      sharded_pool = ConnectionPool.new(size: 1) { conn }
      Sidekiq::Client.via(sharded_pool) do
        Sidekiq::Client.via(sharded_pool) do
          CWorker.perform_async(1,2,3)
        end
      end
      conn.verify
    end
    
        it 'logs the exception to Sidekiq.logger' do
      Component.new.invoke_exception(:a => 1)
      @str_logger.rewind
      log = @str_logger.readlines
      assert_match(/'a':1/, log[0], 'didn't include the context')
      assert_match(/Something didn't work!/, log[1], 'didn't include the exception message')
      assert_match(/test\/test_exception_handler.rb/, log[2], 'didn't include the backtrace')
    end
    
          @retry = Sidekiq::RetrySet.new
      @scheduled = Sidekiq::ScheduledSet.new
      @poller = Sidekiq::Scheduled::Poller.new
    end
    
        it 'disables testing in a block' do
      Sidekiq::Testing.fake!
      assert Sidekiq::Testing.fake?
    
      context 'called with null values' do
    it 'writes rules for other three' do
      ruleset = 'border-top-style: inset; ' +
                'border-right-style: none; ' +
                'border-left-style: double;'
      bad_rule = 'border-bottom-style: null;'
    
      context 'called with arguments (1, $ratio: $golden-ratio)' do
    it 'output the first value from the golden ratio scale' do
      expect('.one-golden-ratio').to have_rule('font-size: 1.618em')
    end
  end
    
      context 'called with two sizes' do
    it 'applies to alternating sides' do
      ruleset = 'position: absolute; ' +
                'top: 2px; ' +
                'right: 3px; ' +
                'bottom: 2px; ' +
                'left: 3px;'
    
      context 'called with multiple prefixes' do
    it 'applies the prefixes to the property' do
      rule = '-moz-appearance: none; ' +
             '-ms-appearance: none; ' +
             'appearance: none;'