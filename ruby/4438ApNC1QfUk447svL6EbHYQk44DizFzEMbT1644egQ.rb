
        
                def initialize(object_name, method_name, template_object, checked_value, unchecked_value, options)
          @checked_value   = checked_value
          @unchecked_value = unchecked_value
          super(object_name, method_name, template_object, options)
        end
    
        initializer 'action_view.default_enforce_utf8' do |app|
      ActiveSupport.on_load(:action_view) do
        default_enforce_utf8 = app.config.action_view.delete(:default_enforce_utf8)
        unless default_enforce_utf8.nil?
          ActionView::Helpers::FormTagHelper.default_enforce_utf8 = default_enforce_utf8
        end
      end
    end
    
        s = nil
    homebrew_site_packages = Language::Python.homebrew_site_packages
    user_site_packages = Language::Python.user_site_packages 'python'
    pth_file = user_site_packages/'homebrew.pth'
    instructions = <<-EOS.undent.gsub(/^/, '  ')
      mkdir -p #{user_site_packages}
      echo 'import site; site.addsitedir('#{homebrew_site_packages}')' >> #{pth_file}
    EOS
    
      def dump_verbose_config(f = $stdout)
    f.puts 'HOMEBREW_VERSION: #{HOMEBREW_VERSION}'
    f.puts 'ORIGIN: #{origin}'
    f.puts 'HEAD: #{head}'
    f.puts 'Last commit: #{last_commit}'
    if CoreTap.instance.installed?
      f.puts 'Core tap ORIGIN: #{core_tap_origin}'
      f.puts 'Core tap HEAD: #{core_tap_head}'
      f.puts 'Core tap last commit: #{core_tap_last_commit}'
    else
      f.puts 'Core tap: N/A'
    end
    f.puts 'HOMEBREW_PREFIX: #{HOMEBREW_PREFIX}'
    f.puts 'HOMEBREW_REPOSITORY: #{HOMEBREW_REPOSITORY}'
    f.puts 'HOMEBREW_CELLAR: #{HOMEBREW_CELLAR}'
    f.puts 'HOMEBREW_BOTTLE_DOMAIN: #{BottleSpecification::DEFAULT_DOMAIN}'
    f.puts hardware
    f.puts 'OS X: #{MacOS.full_version}-#{kernel}'
    f.puts 'Xcode: #{xcode ? xcode : 'N/A'}'
    f.puts 'CLT: #{clt ? clt : 'N/A'}'
    f.puts 'GCC-4.0: build #{gcc_40}' if gcc_40
    f.puts 'GCC-4.2: build #{gcc_42}' if gcc_42
    f.puts 'LLVM-GCC: build #{llvm}'  if llvm
    f.puts 'Clang: #{clang ? '#{clang} build #{clang_build}' : 'N/A'}'
    f.puts 'MacPorts/Fink: #{macports_or_fink}' if macports_or_fink
    f.puts 'X11: #{describe_x11}'
    f.puts 'System Ruby: #{describe_system_ruby}'
    f.puts 'Perl: #{describe_perl}'
    f.puts 'Python: #{describe_python}'
    f.puts 'Ruby: #{describe_ruby}'
    f.puts 'Java: #{describe_java}'
  end
end

    
        cd HOMEBREW_PREFIX
    exec 'find', *args
  end
    
      def search_tap(user, repo, rx)
    if (HOMEBREW_LIBRARY/'Taps/#{user.downcase}/homebrew-#{repo.downcase}').directory? && \
       user != 'Caskroom'
      return []
    end
    
          renamed_formulae << [old_full_name, new_full_name] if @report[:A].include? new_full_name
    end
    
          export JAVA_HOME='$(/usr/libexec/java_home)'
      export AWS_ACCESS_KEY='<Your AWS Access ID>'
      export AWS_SECRET_KEY='<Your AWS Secret Key>'
      export #{home_name}='#{home_value}'
    EOS
  end
end

    
          def as_json
        json = { name: name, slug: slug, type: type }
        json[:links] = links if links.present?
        json[:version] = version if version.present? || defined?(@version)
        json[:release] = release if release.present?
        json
      end
    
        def to_a
      @filters.dup
    end
    
        def build_and_queue_request(url, options, &block)
      request = Request.new(url, request_options.merge(options))
      request.on_complete(&block) if block
      queue(request)
      request
    end
    
        def request_all(urls, &block)
      if options[:rate_limit]
        if @@rate_limiter
          @@rate_limiter.limit = options[:rate_limit]
        else
          @@rate_limiter = RateLimiter.new(options[:rate_limit])
          Typhoeus.before(&@@rate_limiter.to_proc)
        end
      end
    
        def origin
      if scheme && host
        origin = '#{scheme}://#{host}'
        origin.downcase!
        origin << ':#{port}' if port
        origin
      else
        nil
      end
    end
    
          def include_default_entry?
        INDEX.add?([name, type].join(';')) ? true : false # ¯\_(ツ)_/¯
      end
    
      # Loaded immediately after dependencies to ensure proper override of their
  # UI methods.
  #
  require 'cocoapods/user_interface'
    
      if options.respond_to? 'keys'
    options.each do |k,v|
      unless v.nil?
        v = v.join ',' if v.respond_to? 'join'
        v = v.to_json if v.respond_to? 'keys'
        output += ' data-#{k.sub'_','-'}='#{v}''
      end
    end
  elsif options.respond_to? 'join'
    output += ' data-value='#{config[key].join(',')}''
  else
    output += ' data-value='#{config[key]}''
  end
  output += '></#{tag}>'
end
    
        def get_gist_url_for(gist, file)
      'https://gist.githubusercontent.com/raw/#{gist}/#{file}'
    end
    
      class IncludeArrayTag < Liquid::Tag
    Syntax = /(#{Liquid::QuotedFragment}+)/
    def initialize(tag_name, markup, tokens)
      if markup =~ Syntax
        @array_name = $1
      else
        raise SyntaxError.new('Error in tag 'include_array' - Valid syntax: include_array [array from _config.yml]')
      end
    
          # Custom destructuring method. This can be used to normalize
      # destructuring for different variations of the node.
      #
      # In this case, the `def` node destructures into:
      #
      #   `method_name, arguments, body`
      #
      # while the `defs` node destructures into:
      #
      #   `receiver, method_name, arguments, body`
      #
      # so we reverse the destructured array to get the optional receiver
      # at the end, where it can be discarded.
      #
      # @return [Array] the different parts of the `def` or `defs` node
      def node_parts
        to_a.reverse
      end
    end
  end
end

    
          # Calls the given block for each `value` node in the `hash` literal.
      # If no block is given, an `Enumerator` is returned.
      #
      # @return [self] if a block is given
      # @return [Enumerator] if no block is given
      def each_value
        return pairs.map(&:value).to_enum unless block_given?
    
    module RuboCop
  module AST
    # Common functionality for nodes that can be used as hash elements:
    # `pair`, `kwsplat`
    module HashElementNode
      # Returns the key of this `hash` element.
      #
      # @note For keyword splats, this returns the whole node
      #
      # @return [Node] the key of the hash element
      def key
        node_parts[0]
      end
    
          # A shorthand for getting the first argument of the node.
      # Equivalent to `arguments.first`.
      #
      # @return [Node, nil] the first argument of the node,
      #                     or `nil` if there are no arguments
      def first_argument
        arguments[0]
      end