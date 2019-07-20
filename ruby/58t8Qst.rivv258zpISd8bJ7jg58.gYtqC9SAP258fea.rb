
        
                path = @site.in_source_dir(File.join(dir, magic_dir, entry))
        Document.new(path,
                     :site       => @site,
                     :collection => @site.posts)
      end.reject(&:nil?)
    end
    
        def placeholders
      {
        :collection => @collection.label,
        :path       => cleaned_relative_path,
        :output_ext => '',
        :name       => '',
        :title      => '',
      }
    end
    
            should 'create index URL based on filename' do
          @page = setup_page('/contacts', 'index.html')
          assert_equal '/contacts/', @page.url
        end
      end
    
        should 'not break kramdown' do
      kramdown_doc = Kramdown::Document.new('# Some Header #', @config['kramdown'])
      assert_equal :class, kramdown_doc.options[:syntax_highlighter_opts][:css]
      assert_equal 'lipsum', kramdown_doc.options[:syntax_highlighter_opts][:foobar]
    end
    
        require 'memory_profiler'
    
          def before_step(step)
        @current_step = step
      end
    
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

    
          def use_identicon
        @page.wiki.user_icons == 'identicon'
      end
    
          def base_url
        @base_url
      end
    
    context 'Precious::Views::Editing' do
  include Rack::Test::Methods
  setup do
    examples = testpath 'examples'
    @path    = File.join(examples, 'test.git')
    Precious::App.set(:gollum_path, @path)
    FileUtils.cp_r File.join(examples, 'revert.git'), @path, :remove_destination => true
    @wiki = Gollum::Wiki.new(@path)
  end
    
        class Mgr
      attr_reader :latest_error
      attr_reader :mutex
      attr_reader :cond
      def initialize
        @mutex = ::Mutex.new
        @cond = ::ConditionVariable.new
      end
      def processor_died(inst, err)
        @latest_error = err
        @mutex.synchronize do
          @cond.signal
        end
      end
      def processor_stopped(inst)
        @mutex.synchronize do
          @cond.signal
        end
      end
      def options
        { :concurrency => 3, :queues => ['default'] }
      end
    end
    
        describe 'failed' do
      it 'returns number of failed jobs' do
        Sidekiq.redis { |conn| conn.set('stat:failed', 5) }
        s = Sidekiq::Stats.new
        assert_equal 5, s.failed
      end
    end
    
        it 'calculates an average poll interval based on the number of known Sidekiq processes' do
      with_sidekiq_option(:average_scheduled_poll_interval, 10) do
        3.times do |i|
          Sidekiq.redis do |conn|
            conn.sadd('processes', 'process-#{i}')
            conn.hset('process-#{i}', 'info', nil)
          end
        end
    
    describe Sidekiq do
  describe 'json processing' do
    it 'handles json' do
      assert_equal({'foo' => 'bar'}, Sidekiq.load_json('{\'foo\':\'bar\'}'))
      assert_equal '{\'foo\':\'bar\'}', Sidekiq.dump_json({ 'foo' => 'bar' })
    end
  end
    
    self_read, self_write = IO.pipe
%w(INT TERM TSTP TTIN).each do |sig|
  begin
    trap sig do
      self_write.puts(sig)
    end
  rescue ArgumentError
    puts 'Signal #{sig} not supported'
  end
end
    
    Sidekiq::Extensions.enable_delay!

    
        initialize_with { Tmuxinator::Project.new(file, force_attach: true) }
  end
    
        it 'lists only projects in $TMUXINATOR_CONFIG when set' do
      allow(ENV).to receive(:[]).with('TMUXINATOR_CONFIG').
        and_return '#{fixtures_dir}/TMUXINATOR_CONFIG'
      expect(described_class.configs).to eq ['TMUXINATOR_CONFIG']
    end
  end