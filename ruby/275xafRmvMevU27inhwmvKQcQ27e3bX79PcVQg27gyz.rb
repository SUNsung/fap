
        
            def initialize
      @pages = {}
    end
    
        def blank?
      body.blank?
    end
    
            # Remove some <code> elements
        css('h1 > code', 'h2 > code', 'h3 > code', 'h4 > code', 'h6 > code').each do |node|
          node.before(node.content).remove
        end
    
    task :add_template, [:name] do |t, args|
  Dir.glob('README.*') do |file|
    code = File.read(file)
    if code =~ /^===.*#{args.name.capitalize}/
      puts 'Already covered in #{file}'
    else
      template = code[/===[^\n]*Liquid.*index\.liquid<\/tt>[^\n]*/m]
      if !template
        puts 'Liquid not found in #{file}'
      else
        puts 'Adding section to #{file}'
        template = template.gsub(/Liquid/, args.name.capitalize).gsub(/liquid/, args.name.downcase)
        code.gsub! /^(\s*===.*CoffeeScript)/, '\n' << template << '\n\\1'
        File.open(file, 'w') { |f| f << code }
      end
    end
  end
end
    
          DIRECTIVES = %i(base_uri child_src connect_src default_src
                      font_src form_action frame_ancestors frame_src
                      img_src manifest_src media_src object_src
                      plugin_types referrer reflected_xss report_to
                      report_uri require_sri_for sandbox script_src
                      style_src worker_src).freeze
    
    module Rack
  module Protection
    ##
    # Prevented attack::   Cookie Tossing
    # Supported browsers:: all
    # More infos::         https://github.com/blog/1466-yummy-cookies-across-domains
    #
    # Does not accept HTTP requests if the HTTP_COOKIE header contains more than one
    # session cookie. This does not protect against a cookie overflow attack.
    #
    # Options:
    #
    # session_key:: The name of the session cookie (default: 'rack.session')
    class CookieTossing < Base
      default_reaction :deny
    
          def handle(hash)
        was = hash.dup
        hash.replace escape(hash)
        was
      end
    
      it 'allows for a custom authenticity token param' do
    mock_app do
      use Rack::Protection::AuthenticityToken, :authenticity_param => 'csrf_param'
      run proc { |e| [200, {'Content-Type' => 'text/plain'}, ['hi']] }
    end
    
          heap_stats = stats.extract_metrics([:jvm, :memory, :heap],
                      :used_in_bytes, :used_percent, :max_in_bytes)
    
    # when launched as a script, not require'd, (currently from bin/logstash and bin/logstash-plugin) the first
# argument is the path of a Ruby file to require and a LogStash::Runner class is expected to be
# defined and exposing the LogStash::Runner#main instance method which will be called with the current ARGV
# currently lib/logstash/runner.rb and lib/pluginmanager/main.rb are called using this.
if $0 == __FILE__
  LogStash::Bundler.setup!({:without => [:build, :development]})
  require_relative 'patches/jar_dependencies'
    
          packet_gem.pack
    
        it { expect(alias_node.new_identifier.sym_type?).to be(true) }
    it { expect(alias_node.new_identifier.children.first).to eq(:foo) }
  end
    
      describe '#body' do
    context 'with a single expression body' do
      let(:source) do
        'module Foo; bar; end'
      end
    
            def outermost_send_on_same_line(heredoc)
          previous = heredoc
          current = previous.parent
          until send_missing_closing_parens?(current, previous, heredoc)
            previous = current
            current = current.parent
            return unless previous && current
          end
          current
        end
    
    RSpec.describe RuboCop::Cop::Layout::EmptyLinesAroundBlockBody, :config do
  subject(:cop) { described_class.new(config) }
    
          begin
        FileUtils.mkdir_p(dir)
      rescue Errno::EACCES => e
        warn 'Couldn't create cache directory. Continuing without cache.'\
             '\n  #{e.message}'
        return
      end
    
            def correct_style?(node)
          !contains_guard_clause?(node) ||
            next_line_rescue_or_ensure?(node) ||
            next_sibling_parent_empty_or_else?(node) ||
            next_sibling_empty_or_guard_clause?(node)
        end
    
            foobar
      end
    RUBY
  end
    
          q = Sidekiq::Queue.new('foo')
      job = q.first
      assert_equal 'foo', job['queue']
      assert_equal 12, job['retry']
    end
    
          it 'displays the correct output' do
        mock_processes = [{
          'identity' => 'foobar',
          'tag' => 'baz',
          'started_at' => Time.now,
          'concurrency' => 5,
          'busy' => 2,
          'queues' => %w[low medium high]
        }]
        Sidekiq::ProcessSet.stub(:new, mock_processes) do
          assert_includes output, 'foobar [baz]'
          assert_includes output, 'Started: #{mock_processes.first['started_at']} (just now)'
          assert_includes output, 'Threads: 5 (2 busy)'
          assert_includes output, 'Queues: high, low, medium'
        end
      end
    end
    
        it 'can move scheduled job to queue' do
      remain_id = ApiWorker.perform_in(100, 1, 'jason')
      job_id = ApiWorker.perform_in(100, 1, 'jason')
      job = Sidekiq::ScheduledSet.new.find_job(job_id)
      q = Sidekiq::Queue.new
      job.add_to_queue
      queued_job = q.find_job(job_id)
      refute_nil queued_job
      assert_equal queued_job.jid, job_id
      assert_nil Sidekiq::ScheduledSet.new.find_job(job_id)
      refute_nil Sidekiq::ScheduledSet.new.find_job(remain_id)
    end
    
        assert_nil dead_set.find_job('000101')
    assert dead_set.find_job('000102')
    assert dead_set.find_job('000103')
  end
end

    
      it 'allows delayed execution of ActiveRecord class methods' do
    assert_equal [], Sidekiq::Queue.all.map(&:name)
    q = Sidekiq::Queue.new
    assert_equal 0, q.size
    MyModel.delay.long_class_method
    assert_equal ['default'], Sidekiq::Queue.all.map(&:name)
    assert_equal 1, q.size
  end
    
      it 'stubs the push_bulk call when in testing mode' do
    assert Sidekiq::Client.push_bulk({'class' => InlineWorker, 'args' => [[true], [true]]})
    
    get '/' do
  stats = Sidekiq::Stats.new
  @failed = stats.failed
  @processed = stats.processed
  @messages = $redis.lrange('sinkiq-example-messages', 0, -1)
  erb :index
end