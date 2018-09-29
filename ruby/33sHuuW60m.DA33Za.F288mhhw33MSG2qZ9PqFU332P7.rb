
        
        gemspec
    
      def passthru
    render status: 404, plain: 'Not found. Authentication passthru.'
  end
    
      end
end
    
        def skip_format?
      %w(html */*).include? request_format.to_s
    end
    
      it 'no raises a RuntimeError on symbols' do
    v = :sym
    lambda { v.taint }.should_not raise_error(RuntimeError)
    v.tainted?.should == false
  end
    
    describe 'Kernel.throw' do
  it 'transfers control to the end of the active catch block waiting for symbol' do
    catch(:blah) do
      :value
      throw :blah
      fail('throw didn't transfer the control')
    end.should be_nil
  end
    
      it 'creates a public method in TOPLEVEL_BINDING' do
    eval @code, TOPLEVEL_BINDING
    Object.should have_method :boom
  end
    
        mode = OpenStruct.new
    mode.dry_run = true if ARGV.dry_run?
    
        def assets_path
      @assets_path ||= File.join gem_path, 'assets'
    end
    
      def initialize(repo: 'twbs/bootstrap', branch: 'master', save_to: {}, cache_path: 'tmp/converter-cache-bootstrap')
    @logger     = Logger.new
    @repo       = repo
    @branch     = branch || 'master'
    @branch_sha = get_branch_sha
    @cache_path = cache_path
    @repo_url   = 'https://github.com/#@repo'
    @save_to    = {
        js:    'assets/javascripts/bootstrap',
        scss:  'assets/stylesheets/bootstrap',
        fonts: 'assets/fonts/bootstrap'}.merge(save_to)
  end
    
          less = less.gsub(mixin_pattern) do |_|
        scope, name, args = $1, $2, $3
        scope = scope.scan(/[\w-]+/).join('-') + '-' unless scope.empty?
        args = '(#{args.tr(';', ',')})' unless args.empty?
        if name && mixin_names.include?('#{scope}#{name}')
          '@include #{scope}#{name}#{args}'
        else
          '@extend .#{scope}#{name}'
        end
      end
    
    require 'capybara/rails'
require 'capybara/cucumber'
require 'capybara/session'
require 'capybara/poltergeist'
    
    describe ContactsController, :type => :controller do
  describe '#index' do
    before do
      AppConfig.chat.enabled = true
      @aspect = bob.aspects.create(:name => 'another aspect')
      bob.share_with alice.person, @aspect
      bob.share_with eve.person, @aspect
      sign_in bob, scope: :user
    end
    
      describe '#new' do
    before do
      sign_in alice, scope: :user
    end
    
        it 'returns likes for a public post without login' do
      post = alice.post(:status_message, text: 'hey', public: true)
      bob.like!(post)
      sign_out :user
      get :index, params: {post_id: post.id}, format: :json
      expect(JSON.parse(response.body).map {|h| h['id'] }).to match_array(post.likes.map(&:id))
    end
    
          rendered, sourcemap = _to_tree.render_with_sourcemap
      compressed = @options[:style] == :compressed
      rendered << '\n' if rendered[-1] != ?\n
      rendered << '\n' unless compressed
      rendered << '/*# sourceMappingURL='
      rendered << URI::DEFAULT_PARSER.escape(sourcemap_uri)
      rendered << ' */\n'
      return rendered, sourcemap
    end
    
        # The options passed to the Sass Engine.
    attr_reader :options
    
          opts.on('--unix-newlines', 'Use Unix-style newlines in written files.',
                                 ('Always true on Unix.' unless Sass::Util.windows?)) do
        @options[:unix_newlines] = true if Sass::Util.windows?
      end
    
          # @see Base#mtime
      def mtime(name, options)
        file, _ = Sass::Util.destructure(find_real_file(@root, name, options))
        File.mtime(file) if file
      rescue Errno::ENOENT
        nil
      end
    
          def call(env)
        status, headers, body = @app.call(env)
        header = options[:report_only] ? 'Content-Security-Policy-Report-Only' : 'Content-Security-Policy'
        headers[header] ||= csp_policy if html? headers
        [status, headers, body]
      end
    end
  end
end

    
          def escape(object)
        case object
        when Hash   then escape_hash(object)
        when Array  then object.map { |o| escape(o) }
        when String then escape_string(object)
        when Tempfile then object
        else nil
        end
      end
    
          def call(env)
        request               = Request.new(env)
        status, headers, body = app.call(env)
    
        # Initializes a new CategoryFeed.
    #
    #  +base+         is the String path to the <source>.
    #  +category_dir+ is the String path between <source> and the category folder.
    #  +category+     is the category currently being processed.
    def initialize(site, base, category_dir, category)
      @site = site
      @base = base
      @dir  = category_dir
      @name = 'atom.xml'
      self.process(@name)
      # Read the YAML data from the layout page.
      self.read_yaml(File.join(base, '_includes/custom'), 'category_feed.xml')
      self.data['category']    = category
      # Set the title for this page.
      title_prefix             = site.config['category_title_prefix'] || 'Category: '
      self.data['title']       = '#{title_prefix}#{category}'
      # Set the meta-description for this page.
      meta_description_prefix  = site.config['category_meta_description_prefix'] || 'Category: '
      self.data['description'] = '#{meta_description_prefix}#{category}'
    
      class IncludeArrayTag < Liquid::Tag
    Syntax = /(#{Liquid::QuotedFragment}+)/
    def initialize(tag_name, markup, tokens)
      if markup =~ Syntax
        @array_name = $1
      else
        raise SyntaxError.new('Error in tag 'include_array' - Valid syntax: include_array [array from _config.yml]')
      end
    
            def extra_left_space?(hash_node)
          @extra_left_space ||= begin
            top_line = hash_node.source_range.source_line
            top_line.delete(' ') == '{'
          end
        end
    }
    
          # Returns the else branch of the `case` statement, if any.
      #
      # @return [Node] the else branch node of the `case` statement
      # @return [nil] if the case statement does not have an else branch.
      def else_branch
        node_parts[-1]
      end