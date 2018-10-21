
        
        # Just a slash
Benchmark.ips do |x|
  path = '/'
  x.report('pre_pr:#{path}')    { pre_pr(path) }
  x.report('pr:#{path}')        { pr(path) }
  x.report('envygeeks:#{path}') { pr(path) }
  x.compare!
end
    
      dest.ascend do |f|
    break if f == source
    paths.unshift f.to_s
  end
    
    Gem::Specification.new do |s|
  s.specification_version = 2 if s.respond_to? :specification_version=
  s.required_rubygems_version = Gem::Requirement.new('>= 0') if s.respond_to? :required_rubygems_version=
  s.rubygems_version = '2.2.2'
  s.required_ruby_version = '>= 2.3.0'
    
            # config[kramdown][syntax_higlighter] >
        #   config[kramdown][enable_coderay] >
        #   config[highlighter]
        # Where `enable_coderay` is now deprecated because Kramdown
        # supports Rouge now too.
        def highlighter
          return @highlighter if @highlighter
    
        select_agent_type('Trigger Agent')
    fill_in(:agent_name, with: 'Test Trigger Agent')
    click_on('Toggle View')
    
      describe '#style_colors' do
    it 'returns a css style-formated version of the scenario foreground and background colors' do
      expect(style_colors(scenario)).to eq('color:#AAAAAA;background-color:#000000')
    end
    
    describe HuginnScheduler do
  before(:each) do
    @rufus_scheduler = Rufus::Scheduler.new
    @scheduler = HuginnScheduler.new
    stub(@scheduler).setup {}
    @scheduler.setup!(@rufus_scheduler, Mutex.new)
  end
    
      it 'is droppable' do
    {
      '{{location.lat}}' => '2.0',
      '{{location.latitude}}' => '2.0',
      '{{location.lng}}' => '3.0',
      '{{location.longitude}}' => '3.0',
      '{{location.latlng}}' => '2.0,3.0',
    }.each { |template, result|
      expect(Liquid::Template.parse(template).render('location' => location.to_liquid)).to eq(result),
        'expected #{template.inspect} to expand to #{result.inspect}'
    }
  end
end

    
        it 'interpolates jsonpath expressions between matching <>'s' do
      expect(Utils.interpolate_jsonpaths('hello <$.there.world> this <escape works>', payload)).to eq('hello WORLD this should+work')
    end
    
      describe 'up' do
    it 'should update extract and template options for an existing WebsiteAgent' do
      expect(agent.options).to include('extract' => old_extract,
                                       'template' => old_template)
      ConvertWebsiteAgentTemplateForMerge.new.up
      agent.reload
      expect(agent.options).to include('extract' => new_extract,
                                       'template' => new_template)
    end
  end
    
          doc.css('#filecontents').css('h1, h2, h3, h4, h5, h6').each do |h|
        next if h.inner_text.empty?
        h['id'] =
          case h.inner_text
          when 'Referencing Parent Selectors: &'; 'parent-selector'
          when /^Comments:/; 'comments'
          when 'Strings'; 'sass-script-strings'
          when 'Division and /'; 'division-and-slash'
          when /^Subtraction,/; 'subtraction'
          when '& in SassScript'; 'parent-script'
          when '@-Rules and Directives'; 'directives'
          when '@extend-Only Selectors'; 'placeholders'
          when '@extend-Only Selectors'; 'placeholders'
          when '@each'; 'each-directive'
          when 'Multiple Assignment'; 'each-multi-assign'
          when 'Mixin Directives'; 'mixins'
          when /^Defining a Mixin:/; 'defining_a_mixin'
          when /^Including a Mixin:/; 'including_a_mixin'
          when 'Arguments'; 'mixin-arguments'
          when 'Passing Content Blocks to a Mixin'; 'mixin-content'
          else
            h.inner_text.downcase.gsub(/[^a-z _-]/, '').gsub(' ', '_')
          end
      end
    
        def parse_mixin_directive(parent, line, root, value, offset)
      parse_mixin_definition(line)
    end
    
          # Find a Sass file, if it exists.
      #
      # This is the primary entry point of the Importer.
      # It corresponds directly to an `@import` statement in Sass.
      # It should do three basic things:
      #
      # * Determine if the URI is in this importer's format.
      #   If not, return nil.
      # * Determine if the file indicated by the URI actually exists and is readable.
      #   If not, return nil.
      # * Read the file and place the contents in a {Sass::Engine}.
      #   Return that engine.
      #
      # If this importer's format allows for file extensions,
      # it should treat them the same way as the default {Filesystem} importer.
      # If the URI explicitly has a `.sass` or `.scss` filename,
      # the importer should look for that exact file
      # and import it as the syntax indicated.
      # If it doesn't exist, the importer should return nil.
      #
      # If the URI doesn't have either of these extensions,
      # the importer should look for files with the extensions.
      # If no such files exist, it should return nil.
      #
      # The {Sass::Engine} to be returned should be passed `options`,
      # with a few modifications. `:syntax` should be set appropriately,
      # `:filename` should be set to `uri`,
      # and `:importer` should be set to this importer.
      #
      # @param uri [String] The URI to import.
      # @param options [{Symbol => Object}] Options for the Sass file
      #   containing the `@import` that's currently being resolved.
      #   This is safe for subclasses to modify destructively.
      #   Callers should only pass in a value they don't mind being destructively modified.
      # @return [Sass::Engine, nil] An Engine containing the imported file,
      #   or nil if it couldn't be found or was in the wrong format.
      def find(uri, options)
        Sass::Util.abstract(self)
      end