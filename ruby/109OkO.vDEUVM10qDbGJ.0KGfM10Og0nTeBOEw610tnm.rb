
        
        def converted_history(markdown)
  remove_head_from_history(
    custom_release_header_anchors(
      liquid_escape(
        linkify(
          normalize_bullets(markdown)
        )
      )
    )
  )
end
    
    Nullam luctus fermentum est id blandit. Phasellus consectetur ullamcorper
ligula, at finibus eros laoreet id. Etiam sit amet est in libero efficitur
tristique. Ut nec magna augue. Quisque ut fringilla lacus, ac dictum enim.
Aliquam vel ornare mauris. Suspendisse ornare diam tempor nulla facilisis
aliquet. Sed ultrices placerat ultricies.
TEXT
    
    
def pathutil_relative
  Pathutil.new(DOC_PATH).relative_path_from(COL_PATH).to_s
end
    
          #
    
                c.action do |args, opts|
              Jekyll::Commands::NewTheme.process(args, opts)
            end
          end
        end
    
            # config[kramdown][syntax_higlighter] >
        #   config[kramdown][enable_coderay] >
        #   config[highlighter]
        # Where `enable_coderay` is now deprecated because Kramdown
        # supports Rouge now too.
        def highlighter
          return @highlighter if @highlighter
    
        it 'in the future' do
      expect(relative_distance_of_time_in_words(Time.now+5.minutes)).to eq('in 5m')
    end
  end
end

    
        it 'creates a scenario label with the given text' do
      expect(scenario_label(scenario, 'Other')).to eq(
        '<span class='label scenario' style='color:#AAAAAA;background-color:#000000'>Other</span>'
      )
    end
  end
    
      context '#setup_worker' do
    it 'should return an array with an instance of itself' do
      workers = HuginnScheduler.setup_worker
      expect(workers).to be_a(Array)
      expect(workers.first).to be_a(HuginnScheduler)
      expect(workers.first.id).to eq('HuginnScheduler')
    end
  end
end
    
    describe Utils do
  describe '#unindent' do
    it 'unindents to the level of the greatest consistant indention' do
      expect(Utils.unindent(<<-MD)).to eq('Hello World')
        Hello World
      MD
    
        it 'accepts objects as well as strings' do
      log = AgentLog.log_for_agent(agents(:jane_website_agent), events(:bob_website_agent_event).payload)
      expect(log.message).to include(''title'=>'foo'')
    end
  end
    
      # Send deprecation notices to registered listeners.
  config.active_support.deprecation = :notify
    
      # The test environment is used exclusively to run your application's
  # test suite. You never need to work with it otherwise. Remember that
  # your test database is 'scratch space' for the test suite and is wiped
  # and recreated between test runs. Don't rely on the data there!
  config.cache_classes = true
    
          def eql?(other)
        !other.nil? && other.respond_to?(:root) && root.eql?(other.root)
      end
    
      def validate_target_file
    if File.exist?(target_file)
      if  delete_target_file?
        File.delete(target_file)
      else
        signal_error('Package creation cancelled, a previously generated package exist at location: #{target_file}, move this file to safe place and run the command again')
      end
    end
  end
    
        # any errors will be logged to $stderr by invoke!
    # Bundler cannot update and clean gems in one operation so we have to call the CLI twice.
    options = {:update => plugins, :rubygems_source => gemfile.gemset.sources}
    options[:local] = true if local?
    output = LogStash::Bundler.invoke!(options)
    # We currently dont removed unused gems from the logstash installation
    # see: https://github.com/elastic/logstash/issues/6339
    # output = LogStash::Bundler.invoke!(:clean => true)
    display_updated_plugins(previous_gem_specs_map)
  rescue => exception
    gemfile.restore!
    report_exception('Updated Aborted', exception)
  ensure
    display_bundler_output(output)
  end
    
        context 'update a specific plugin' do
      it 'has executed successfully' do
        cmd = logstash.run_command_in_path('bin/logstash-plugin update --no-verify #{plugin_name}')
        expect(cmd.stdout).to match(/Updating #{plugin_name}/)
        expect(logstash).not_to have_installed?(plugin_name, previous_version)
      end
    end
    
          def header
        if @header.nil?
          if page = @page.header
            @header = page.text_data
          else
            @header = false
          end
        end
        @header
      end
    
    # Read command line options into `options` hash
begin
  opts.parse!
rescue OptionParser::InvalidOption
  puts 'gollum: #{$!.message}'
  puts 'gollum: try 'gollum --help' for more information'
  exit
end
    
      s.require_paths = %w[lib]
    
              it_behaves_like 'nested requested resources'
        end
      end
    end
  end
    
        context 'with specified options' do
      before { get '/api/v2/storefront/countries/#{country.iso}?include=states' }
    
            it 'returns proper links data' do
          expect(json_response['links']['self']).to include('/api/v2/storefront/taxons?page=1&per_page=1')
          expect(json_response['links']['next']).to include('/api/v2/storefront/taxons?page=2&per_page=1')
          expect(json_response['links']['prev']).to include('/api/v2/storefront/taxons?page=1&per_page=1')
        end
      end
    
        def label
      Spree.t included_in_price? ? :including_tax : :excluding_tax,
              scope: 'adjustment_labels.tax_rates',
              name: name.presence || tax_category.name,
              amount: amount_for_label
    end
    
    require 'paperclip/railtie' if defined?(Rails::Railtie)
    
        def clear
      @attachments = Hash.new { |h,k| h[k] = {} }
    end