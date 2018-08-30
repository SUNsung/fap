
        
                array.flatten.map! { |i| ERB::Util.unwrapped_html_escape(i) }.join(sep).html_safe
      end
    
        option_names.any? do |name|
      if option_defined? 'with-#{name}'
        include? 'with-#{name}'
      elsif option_defined? 'without-#{name}'
        !include? 'without-#{name}'
      else
        false
      end
    end
  end
    
        first_warning = true
    methods.each do |method|
      unless checks.respond_to?(method)
        Homebrew.failed = true
        puts 'No check available by the name: #{method}'
        next
      end
    
      def search_tap(user, repo, rx)
    if (HOMEBREW_LIBRARY/'Taps/#{user.downcase}/homebrew-#{repo.downcase}').directory? && \
       user != 'Caskroom'
      return []
    end
    
      def python(_options = {}, &block)
    opoo 'Formula#python is deprecated and will go away shortly.'
    block.call if block_given?
    PythonRequirement.new
  end
  alias_method :python2, :python
  alias_method :python3, :python
end

    
            def status
          @project.pipelines
            .where(sha: @sha)
            .latest_status(@ref) || 'unknown'
        end
    
      # Sets the flash message with :key, using I18n. By default you are able
  # to set up your messages using specific resource scope, and if no message is
  # found we look to the default scope. Set the 'now' options key to a true
  # value to populate the flash.now hash in lieu of the default flash hash (so
  # the flash message will be available to the current action instead of the
  # next action).
  # Example (i18n locale file):
  #
  #   en:
  #     devise:
  #       passwords:
  #         #default_scope_messages - only if resource_scope is not found
  #         user:
  #           #resource_scope_messages
  #
  # Please refer to README or en.yml locale file to check what messages are
  # available.
  def set_flash_message(key, kind, options = {})
    message = find_message(kind, options)
    if options[:now]
      flash.now[key] = message if message.present?
    else
      flash[key] = message if message.present?
    end
  end
    
        def email_changed(record, opts={})
      devise_mail(record, :email_changed, opts)
    end
    
      def self.activerecord51? # :nodoc:
    defined?(ActiveRecord) && ActiveRecord.gem_version >= Gem::Version.new('5.1.x')
  end
    
          # Sign out all active users or scopes. This helper is useful for signing out all roles
      # in one click. This signs out ALL scopes in warden. Returns true if there was at least one logout
      # and false if there was no user logged in on all scopes.
      def sign_out_all_scopes(lock=true)
        users = Devise.mappings.keys.map { |s| warden.user(scope: s, run_callbacks: false) }
    
            self.description = <<-DESC
          Remove the cache for a given pod, or clear the cache completely.
    
            self.description = <<-DESC
          Shows the content of the pods cache as a YAML tree output, organized by pod.
          If `NAME` is given, only the caches for that pod will be included in the output.
        DESC
    
    module Pod
  class Command
    class Env < Command
      self.summary = 'Display pod environment'
      self.description = 'Display pod environment.'
    
        # Outputs a list of categories as comma-separated <a> links. This is used
    # to output the category list for each post on a category page.
    #
    #  +categories+ is the list of categories to format.
    #
    # Returns string
    #
    def category_links(categories)
      categories.sort.map { |c| category_link c }.join(', ')
    end
    
        def get_web_content(url)
      raw_uri           = URI.parse url
      proxy             = ENV['http_proxy']
      if proxy
        proxy_uri       = URI.parse(proxy)
        https           = Net::HTTP::Proxy(proxy_uri.host, proxy_uri.port).new raw_uri.host, raw_uri.port
      else
        https           = Net::HTTP.new raw_uri.host, raw_uri.port
      end
      https.use_ssl     = true
      https.verify_mode = OpenSSL::SSL::VERIFY_NONE
      request           = Net::HTTP::Get.new raw_uri.request_uri
      data              = https.request request
    end
  end
    
          Dir.chdir(code_path) do
        code = file.read
        @filetype = file.extname.sub('.','') if @filetype.nil?
        title = @title ? '#{@title} (#{file.basename})' : file.basename
        url = '/#{code_dir}/#{@file}'
        source = '<figure class='code'><figcaption><span>#{title}</span> <a href='#{url}'>download</a></figcaption>\n'
        source += '#{HighlightCode::highlight(code, @filetype)}</figure>'
        TemplateWrapper::safe_wrap(source)
      end
    end
  end
    
    Liquid::Template.register_tag('render_partial', Jekyll::RenderPartialTag)

    
      include_examples 'multiline literal brace layout' do
    let(:open) { '{' }
    let(:close) { '}' }
    let(:a) { 'a: 1' }
    let(:b) { 'b: 2' }
    let(:multi_prefix) { 'b: ' }
    let(:multi) do
      <<-RUBY.strip_indent.chomp
        [
        1
        ]
      RUBY
    end
  end
    
        def smart_path(path)
      # Ideally, we calculate this relative to the project root.
      base_dir = PathUtil.pwd
    
            expect(new_source).to eq(<<-RUBY.strip_indent)
          def func
            for (a, b) in {a: 1, b: 2, c: 3} do
              puts a, b
            end
          end
        RUBY
      end
    end
    
      cop_name = args[:cop]
  src_path = args[:srcpath]
  iterations = args[:times] ? Integer(args[:times]) : 1
    
          # Calls the given block for each `when` node in the `case` statement.
      # If no block is given, an `Enumerator` is returned.
      #
      # @return [self] if a block is given
      # @return [Enumerator] if no block is given
      def each_when
        return when_branches.to_enum(__method__) unless block_given?
    
          # Checks whether this node body is a void context.
      # Always `true` for `for`.
      #
      # @return [true] whether the `for` node body is a void context
      def void_context?
        true
      end
    
          # This is used for duck typing with `pair` nodes which also appear as
      # `hash` elements.
      #
      # @return [false]
      def hash_rocket?
        false
      end