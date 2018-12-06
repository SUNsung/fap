
        
            execute 'INSERT INTO share_visibilities (user_id, shareable_id, shareable_type) ' \
            'SELECT post_visibility.user_id, photos.id, 'Photo' FROM photos ' \
            'INNER JOIN posts ON posts.guid = photos.status_message_guid AND posts.type = 'StatusMessage' ' \
            'LEFT OUTER JOIN share_visibilities ON share_visibilities.shareable_id = photos.id ' \
            'INNER JOIN share_visibilities AS post_visibility ON post_visibility.shareable_id = posts.id ' \
            'WHERE photos.public = false AND share_visibilities.shareable_id IS NULL ' \
            'AND post_visibility.shareable_type = 'Post''
  end
    
    When /^I (?:add|remove) the person (?:to|from) my '([^\']*)' aspect(?: within '([^']*)')?$/ do |aspect_name, within_selector| # rubocop:disable Metrics/LineLength
  with_scope(within_selector) do
    toggle_aspect_via_ui(aspect_name)
  end
end
    
      def navigate_to(page_name)
    path = path_to(page_name)
    if path.is_a?(Hash)
      visit(path[:path])
      await_elem = path[:special_elem]
      find(await_elem.delete(:selector), await_elem)
    else
      visit(path)
    end
  end
    
    describe StatusMessagesController, :type => :controller do
  describe '#bookmarklet' do
    before do
      sign_in bob, scope: :user
    end
    
      # The global load paths for Sass files. This is meant for plugins and
  # libraries to register the paths to their Sass stylesheets to that they may
  # be `@imported`. This load path is used by every instance of {Sass::Engine}.
  # They are lower-precedence than any load paths passed in via the
  # {file:SASS_REFERENCE.md#load_paths-option `:load_paths` option}.
  #
  # If the `SASS_PATH` environment variable is set,
  # the initial value of `load_paths` will be initialized based on that.
  # The variable should be a colon-separated list of path names
  # (semicolon-separated on Windows).
  #
  # Note that files on the global load path are never compiled to CSS
  # themselves, even if they aren't partials. They exist only to be imported.
  #
  # @example
  #   Sass.load_paths << File.dirname(__FILE__ + '/sass')
  # @return [Array<String, Pathname, Sass::Importers::Base>]
  def self.load_paths
    @load_paths ||= if ENV['SASS_PATH']
                      ENV['SASS_PATH'].split(Sass::Util.windows? ? ';' : ':')
                    else
                      []
                    end
  end
    
          # Returns the path to a file for the given key.
      #
      # @param key [String]
      # @return [String] The path to the cache file.
      def path_to(key)
        key = key.gsub(/[<>:\\|?*%]/) {|c| '%%%03d' % c.ord}
        File.join(cache_location, key)
      end
    end
  end
end

    
      # The lexical environment for SassScript.
  # This keeps track of variable, mixin, and function definitions.
  #
  # A new environment is created for each level of Sass nesting.
  # This allows variables to be lexically scoped.
  # The new environment refers to the environment in the upper scope,
  # so it has access to variables defined in enclosing scopes,
  # but new variables are defined locally.
  #
  # Environment also keeps track of the {Engine} options
  # so that they can be made available to {Sass::Script::Functions}.
  class Environment < BaseEnvironment
    # The enclosing environment,
    # or nil if this is the global environment.
    #
    # @return [Environment]
    attr_reader :parent
    
          # @see Base#mtime
      def mtime(name, options)
        file, _ = Sass::Util.destructure(find_real_file(@root, name, options))
        File.mtime(file) if file
      rescue Errno::ENOENT
        nil
      end
    
    gens = ARGV[0] ? [eval(ARGV[0]).gen_step] : GenSteps[0..-2]
text = ARGV[1] || 'Hello'
    
      def start(code)
    eval Machine.new(code, InitialEnv, InitialDump)
  end
    
          # A helper that calculates the url to the previous page.
      #
      # ==== Examples
      # Basic usage:
      #
      #   <%= prev_page_url @items %>
      #   #-> http://www.example.org/items
      #
      # It will return `nil` if there is no previous page.
      def prev_page_url(scope, options = {})
        '#{request.base_url}#{prev_page_path(scope, options)}' if scope.prev_page
      end
      alias previous_page_url     prev_page_url
      alias url_to_prev_page      prev_page_url
      alias url_to_previous_page  prev_page_url
    
      spec.summary       = 'Kaminari Active Record adapter'
  spec.description   = 'kaminari-activerecord lets your Active Record models be paginatable'
  spec.homepage      = 'https://github.com/kaminari/kaminari'
  spec.license       = 'MIT'
  spec.required_ruby_version = '>= 2.0.0'
    
    module Kaminari
  module PageScopeMethods
    # Specify the <tt>per_page</tt> value for the preceding <tt>page</tt> scope
    #   Model.page(3).per(10)
    def per(num, max_per_page: nil)
      max_per_page ||= ((defined?(@_max_per_page) && @_max_per_page) || self.max_per_page)
      @_per = (num || default_per_page).to_i
      if (n = num.to_i) < 0 || !(/^\d/ =~ num.to_s)
        self
      elsif n.zero?
        limit(n)
      elsif max_per_page && (max_per_page < n)
        limit(max_per_page).offset(offset_value / limit_value * max_per_page)
      else
        limit(n).offset(offset_value / limit_value * n)
      end
    end