
        
            alias_method :blank?, :empty?
    
        def effective_url
      @effective_url ||= URL.parse super
    end
    
          def fetch_internal_urls
        result = []
        build_pages do |page|
          result << page[:subpath] if page[:entries].present?
        end
        result
      end
    
            css('.row-margin', '.ng-cloak').each do |node|
          node.before(node.children).remove
        end
    
      PLUGIN_REGISTRY = Plugins::Registry.new
end

    
        def self.transform_pattern_into_re(pattern)
      Regexp.new('^#{pattern.gsub(WILDCARD, WILDCARD_INTO_RE)}$')
    end
  end
    
      # create list of plugins to update
  def plugins_to_update(previous_gem_specs_map)
    if update_all?
      previous_gem_specs_map.values.map{|spec| spec.name}
    else
      # If the plugins isn't available in the gemspec or in 
      # the gemfile defined with a local path, we assume the plugins is not
      # installed.
      not_installed = plugins_arg.select{|plugin| !previous_gem_specs_map.has_key?(plugin.downcase) && !gemfile.find(plugin) }
      signal_error('Plugin #{not_installed.join(', ')} is not installed so it cannot be updated, aborting') unless not_installed.empty?
      plugins_arg
    end
  end
    
          context 'when the plugin doesnt exist' do
        it 'fails to install and report an error' do
          command = logstash.run_command_in_path('bin/logstash-plugin install --no-verify logstash-output-impossible-plugin')
          expect(command.stderr).to match(/Plugin not found, aborting/)
        end
      end
    end
  end
end

    
          context 'where one branch contains a method call' do
        let(:src) { 'if $DEBUG then puts 'hello' else nil end' }
    
            def correct_for_blockarg_type(node)
          lambda do |corrector|
            range = range_with_surrounding_space(range: node.source_range,
                                                 side: :left)
            range = range_with_surrounding_comma(range, :left)
            corrector.remove(range)
          end
        end
      end
    end
  end
end

    
          def process_args(args)
        # If there is a trailing hash arg without explicit braces, like this:
        #
        #    method(1, 'key1' => value1, 'key2' => value2)
        #
        # ...then each key/value pair is treated as a method 'argument'
        # when determining where line breaks should appear.
        if (last_arg = args.last)
          if last_arg.hash_type? && !last_arg.braces?
            args = args.concat(args.pop.children)
          end
        end
        args
      end
    
            it_behaves_like 'nonmatching'
      end
    
      describe 'inspection' do
    context 'when a method takes multiple arguments' do
      context 'and an argument is unused' do
        it 'registers an offense' do
          message = 'Unused method argument - `foo`. ' \
                      'If it's necessary, use `_` or `_foo` ' \
                      'as an argument name to indicate that it won't be used.'
    
          def on_send(node)
        rhs = extract_rhs(node)
    
            def last_argument_is_heredoc?(node)
          last_children = node.if_branch
    
      def send_sinatra_file(path, &missing_file_block)
    file_path = File.join(File.dirname(__FILE__), 'public',  path)
    file_path = File.join(file_path, 'index.html') unless file_path =~ /\.[a-z]+$/i
    File.exist?(file_path) ? send_file(file_path) : missing_file_block.call
  end
    
        # Outputs a single category as an <a> link.
    #
    #  +category+ is a category string to format as an <a> link
    #
    # Returns string
    #
    def category_link(category)
      dir = @context.registers[:site].config['category_dir']
      '<a class='category' href='/#{dir}/#{category.to_url}/'>#{category}</a>'
    end
    
    class ConfigTag < Liquid::Tag
  def initialize(tag_name, options, tokens)
    super
    options = options.split(' ').map {|i| i.strip }
    @key = options.slice!(0)
    @tag = nil
    @classname = nil
    options.each do |option|
      @tag = $1 if option =~ /tag:(\S+)/ 
      @classname = $1 if option =~ /classname:(\S+)/
    end
  end
    
        def get_cached_gist(gist, file)
      return nil if @cache_disabled
      cache_file = get_cache_file_for gist, file
      File.read cache_file if File.exist? cache_file
    end
    
          if markup =~ /(?<class>\S.*\s+)?(?<src>(?:https?:\/\/|\/|\S+\/)\S+)(?:\s+(?<width>\d+))?(?:\s+(?<height>\d+))?(?<title>\s+.+)?/i
        @img = attributes.reduce({}) { |img, attr| img[attr] = $~[attr].strip if $~[attr]; img }
        if /(?:'|')(?<title>[^'']+)?(?:'|')\s+(?:'|')(?<alt>[^'']+)?(?:'|')/ =~ @img['title']
          @img['title']  = title
          @img['alt']    = alt
        else
          @img['alt']    = @img['title'].gsub!(/'/, '&#34;') if @img['title']
        end
        @img['class'].gsub!(/'/, '') if @img['class']
      end
      super
    end
    
    Liquid::Template.register_tag('include_array', Jekyll::IncludeArrayTag)

    
    module Jekyll
    
      # Extracts raw content DIV from template, used for page description as {{ content }}
  # contains complete sub-template code on main page level
  def raw_content(input)
    /<div class='entry-content'>(?<content>[\s\S]*?)<\/div>\s*<(footer|\/article)>/ =~ input
    return (content.nil?) ? input : content
  end
    
    module Jekyll
    
        # Disable testing because we don't really need to run the cpan tests. The
    # goal is to see the parsed result (name, module description, etc)
    # Additionally, it fails on my workstation when cpan_test? is enabled due
    # to not finding `Test.pm`, and it seems like a flakey test if we keep this
    # enabled.
    subject.attributes[:cpan_test?] = false
    subject.input('Digest::MD5')
    insist { subject.name } == 'perl-Digest-MD5'
    insist { subject.description } == 'Perl interface to the MD-5 algorithm'
    insist { subject.vendor } == 'Gisle Aas <gisle@activestate.com>'
    # TODO(sissel): Check dependencies
  end
    
        it 'should permit asterisks in filenames (issue #202)' do
      File.write(subject.staging_path('file*asterisk'), 'Hello')
    
        self.description = info['description']
    # Supposedly you can upload a package for npm with no author/author email
    # so I'm being safer with this. Author can also be a hash or a string
    self.vendor = 'Unknown <unknown@unknown.unknown>'
    if info.include?('author')
      author_info = info['author']
      # If a hash, assemble into a string
      if author_info.respond_to? :fetch
        self.vendor = sprintf('%s <%s>', author_info.fetch('name', 'unknown'),
                              author_info.fetch('email', 'unknown@unknown.unknown'))
      else
        # Probably will need a better check for validity here
        self.vendor = author_info unless author_info == ''
      end
    end
    
        scripts[:after_install] = template(File.join('pleaserun', 'scripts', 'after-install.sh')).result(binding)
    scripts[:before_remove] = template(File.join('pleaserun', 'scripts', 'before-remove.sh')).result(binding)
  end # def input
    
        if File.exists?(params[:output])
      # TODO(sissel): Allow folks to choose output?
      logger.error('Puppet module directory '#{params[:output]}' already ' \
                    'exists. Delete it or choose another output (-p flag)')
    end
    
        if !File.exist?(setup_py)
      logger.error('Could not find 'setup.py'', :path => setup_py)
      raise 'Unable to find python package; tried #{setup_py}'
    end