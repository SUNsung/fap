
        
            it 'shows the dry run pop up with previous events and allows use previously received event' do
      emitter.events << Event.new(payload: {url: 'http://xkcd.com/'})
      agent.sources << emitter
      agent.options.merge!('url' => '', 'url_from_event' => '{{url}}')
      agent.save!
    
      it 'asks to accept conflicts when the scenario was modified' do
    DefaultScenarioImporter.seed(user)
    agent = user.agents.where(name: 'Rain Notifier').first
    agent.options['expected_receive_period_in_days'] = 9001
    agent.save!
    visit new_scenario_imports_path
    attach_file('Option 2: Upload a Scenario JSON File', File.join(Rails.root, 'data/default_scenario.json'))
    click_on 'Start Import'
    expect(page).to have_text('This Scenario already exists in your system.')
    expect(page).to have_text('9001')
    check('I confirm that I want to import these Agents.')
    click_on 'Finish Import'
    expect(page).to have_text('Import successful!')
  end
    
        it 'respects an environment variable that specifies a path or URL to a different scenario' do
      stub.proxy(ENV).[](anything)
      stub(ENV).[]('DEFAULT_SCENARIO_FILE') { File.join(Rails.root, 'spec', 'fixtures', 'test_default_scenario.json') }
      expect { DefaultScenarioImporter.seed(user) }.to change(user.agents, :count).by(3)
    end
    
              expect(scenario_import.import).to be_falsey
    
        def to_json
      JSON.generate(as_json)
    end
    
        def parse_as_document
      document = Nokogiri::HTML.parse @content, nil, 'UTF-8'
      @title = document.at_css('title').try(:content)
      document
    end
    
        def request(urls, options = {}, &block)
      requests = [urls].flatten.map do |url|
        build_and_queue_request(url, options, &block)
      end
      requests.length == 1 ? requests.first : requests
    end
    
        class << self
      attr_accessor :dir
    
        def log(msg)
      puts '\r' + justify(msg)
    end
    
          if base == dest
        ''
      elsif dest.start_with? File.join(base, '')
        url.path[(path.length)..-1]
      end
    end
    
            css('tr[style]').each do |node|
          node.remove_attribute 'style'
        end
    
        # @param options [{Symbol => Object}] The options hash. See
    #   {file:SASS_REFERENCE.md#Options the Sass options documentation}.
    # @param parent [Environment] See \{#parent}
    def initialize(parent = nil, options = nil)
      @parent = parent
      @options = options || (parent && parent.options) || {}
      @stack = @parent.nil? ? Sass::Stack.new : nil
      @caller = nil
      @content = nil
      @filename = nil
      @functions = nil
      @mixins = nil
      @selector = nil
      @vars = nil
    end
    
        # Same as `Kernel.puts`, but doesn't print anything if the `--quiet` option is set.
    #
    # @param args [Array] Passed on to `Kernel.puts`
    def puts(*args)
      return if @options[:for_engine][:quiet]
      Kernel.puts(*args)
    end
    
          opts.on('--trace', :NONE, 'Show a full Ruby stack trace on error') do
        @options[:trace] = true
      end
    end
    
          # Get the cache key pair for the given Sass URI.
      # The URI need not be checked for validity.
      #
      # The only strict requirement is that the returned pair of strings
      # uniquely identify the file at the given URI.
      # However, the first component generally corresponds roughly to the directory,
      # and the second to the basename, of the URI.
      #
      # Note that keys must be unique *across importers*.
      # Thus it's probably a good idea to include the importer name
      # at the beginning of the first component.
      #
      # @param uri [String] A URI known to be valid for this importer.
      # @param options [{Symbol => Object}] Options for the Sass file
      #   containing the `@import` currently being checked.
      # @return [(String, String)] The key pair which uniquely identifies
      #   the file at the given URI.
      def key(uri, options)
        Sass::Util.abstract(self)
      end
    
          # Returns the body of the `for` loop.
      #
      # @return [Node, nil] The body of the `for` loop.
      def body
        node_parts[2]
      end
    end
  end
end
