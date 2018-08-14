
        
        # No trailing slash
Benchmark.ips do |x|
  x.report('with body include?') { CONTENT_CONTAINING.include?('<body') }
  x.report('with body regexp')   { CONTENT_CONTAINING =~ /<\s*body/ }
  x.compare!
end

    
        # Override of method_missing to check in @data for the key.
    def method_missing(method, *args, &blck)
      if docs.respond_to?(method.to_sym)
        Jekyll.logger.warn 'Deprecation:',
                           '#{label}.#{method} should be changed to #{label}.docs.#{method}.'
        Jekyll.logger.warn '', 'Called by #{caller(0..0)}.'
        docs.public_send(method.to_sym, *args, &blck)
      else
        super
      end
    end
    
            # Build your jekyll site
        # Continuously watch if `watch` is set to true in the config.
        def process(options)
          # Adjust verbosity quickly
          Jekyll.logger.adjust_verbosity(options)
    
            def case_insensitive_urls(things, destination)
          things.each_with_object({}) do |thing, memo|
            dest = thing.destination(destination)
            (memo[dest.downcase] ||= []) << dest
          end
        end
    
            def initialize
          @websockets = []
          @connections_count = 0
          @started_event = Utils::ThreadEvent.new
          @stopped_event = Utils::ThreadEvent.new
        end
    
    module Kramdown
  module Parser
    class SmartyPants < Kramdown::Parser::Kramdown
      def initialize(source, options)
        super
        @block_parsers = [:block_html, :content]
        @span_parsers =  [:smart_quotes, :html_entity, :typographic_syms, :span_html]
      end
    
        # --
    # Check if an entry matches a specific pattern and return true,false.
    # Returns true if path matches against any glob pattern.
    # --
    def glob_include?(enum, entry)
      entry_path = Pathutil.new(site.in_source_dir).join(entry)
      enum.any? do |exp|
        # Users who send a Regexp knows what they want to
        # exclude, so let them send a Regexp to exclude files,
        # we will not bother caring if it works or not, it's
        # on them at this point.
    
      # Creates a delayed logger wrapping `inner`.
  #
  # @param inner [Sass::Logger::Base] The wrapped logger.
  def initialize(inner)
    self.log_level = inner.log_level
    @inner = inner
    @messages = []
  end
    
        # Starts the read-eval-print loop.
    def run
      environment = Environment.new
      @line = 0
      loop do
        @line += 1
        unless (text = Readline.readline('>> '))
          puts
          return
        end
    
            raise t('error.invalid_stage_name', name: invalid, path: stage_config_path.join('#{invalid}.rb'))
      end
    end
  end
end

    
        # @abstract
    #
    # Identify the SHA of the commit that will be deployed.  This will most likely involve SshKit's capture method.
    #
    # @return void
    #
    def fetch_revision
      raise NotImplementedError, 'Your SCM strategy module should provide a #fetch_revision method'
    end
  end
end

    
      entries.each do |entry|
    if File.exist?(entry[:file])
      warn '[skip] #{entry[:file]} already exists'
    else
      File.open(entry[:file], 'w+') do |f|
        f.write(ERB.new(File.read(entry[:template])).result(binding))
        puts I18n.t(:written_file, scope: :capistrano, file: entry[:file])
      end
    end
  end
    
          describe 'setting an internal host filter' do
        subject { dsl.roles(:app) }
        it 'is ignored' do
          dsl.set :filter, host: 'example3.com'
          expect(subject.map(&:hostname)).to eq(['example3.com', 'example4.com'])
        end
      end
    
      it 'overrides the rake method, but still prints the rake version' do
    out, _err = capture_io do
      flags '--version', '-V'
    end
    expect(out).to match(/\bCapistrano Version\b/)
    expect(out).to match(/\b#{Capistrano::VERSION}\b/)
    expect(out).to match(/\bRake Version\b/)
    expect(out).to match(/\b#{Rake::VERSION}\b/)
  end
    
        def initialize(tag_name, markup, tokens)
      @by = nil
      @source = nil
      @title = nil
      if markup =~ FullCiteWithTitle
        @by = $1
        @source = $2 + $3
        @title = $4.titlecase.strip
      elsif markup =~ FullCite
        @by = $1
        @source = $2 + $3
      elsif markup =~ AuthorTitle
        @by = $1
        @title = $2.titlecase.strip
      elsif markup =~ Author
        @by = $1
      end
      super
    end
    
        def script_url_for(gist_id, filename)
      url = 'https://gist.github.com/#{gist_id}.js'
      url = '#{url}?file=#{filename}' unless filename.nil? or filename.empty?
      url
    end
    
        def initialize(tag_name, markup, tokens)
      attributes = ['class', 'src', 'width', 'height', 'title']
    
      # Summary is used on the Archive pages to return the first block of content from a post.
  def summary(input)
    if input.index(/\n\n/)
      input.split(/\n\n/)[0]
    else
      input
    end
  end