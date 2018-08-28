
        
        group :production do
  gem 'uglifier'
  gem 'newrelic_rpm'
end
    
        SCHEME_RGX = /\A[^:\/?#]+:/
    
        def path
      @path ||= url.path
    end
    
        html_filters.push 'apply_base_url', 'container', 'clean_html', 'normalize_urls', 'internal_urls', 'normalize_paths', 'parse_cf_email'
    text_filters.push 'images' # ensure the images filter runs after all html filters
    text_filters.push 'inner_html', 'clean_text', 'attribution'
    
            def with_redirections
          @redirections = new.fetch_redirections
          yield
        ensure
          @redirections = nil
        end
      end
    
          @terminal_width = if !tty?
        nil
      elsif ENV['COLUMNS']
        ENV['COLUMNS'].to_i
      else
        `stty size`.scan(/\d+/).last.to_i
      end
    rescue
      @terminal_width = nil
    end
  end
end

    
            css('.filetree').each do |node|
          node.content = node.css('.file').map(&:inner_html).join('\n')
          node.name = 'pre'
          node.remove_attribute('class')
        end
    
            if mod
          if name == 'Index'
            return slug.split('/')[1..-2].join('/')
          elsif name == 'Angular'
            return slug.split('/').last.split('-').first
          end
        end
    
          # @see Base#\_retrieve
      def _retrieve(key, version, sha)
        return unless File.readable?(path_to(key))
        begin
          File.open(path_to(key), 'rb') do |f|
            if f.readline('\n').strip == version && f.readline('\n').strip == sha
              return f.read
            end
          end
          File.unlink path_to(key)
        rescue Errno::ENOENT
          # Already deleted. Race condition?
        end
        nil
      rescue EOFError, TypeError, ArgumentError => e
        Sass::Util.sass_warn 'Warning. Error encountered while reading cache #{path_to(key)}: #{e}'
      end
    
        def parse_extend_directive(parent, line, root, value, offset)
      raise SyntaxError.new('Invalid extend directive '@extend': expected expression.') unless value
      raise SyntaxError.new('Illegal nesting: Nothing may be nested beneath extend directives.',
        :line => @line + 1) unless line.children.empty?
      optional = !!value.gsub!(/\s+#{Sass::SCSS::RX::OPTIONAL}$/, '')
      offset = line.offset + line.text.index(value).to_i
      interp_parsed = parse_interp(value, offset)
      selector_range = Sass::Source::Range.new(
        Sass::Source::Position.new(@line, to_parser_offset(offset)),
        Sass::Source::Position.new(@line, to_parser_offset(line.offset) + line.text.length),
        @options[:filename], @options[:importer]
      )
      Tree::ExtendNode.new(interp_parsed, optional, selector_range)
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
    
            def advance
          authorize! :update, @order, order_token
          while @order.next; end
          respond_with(@order, default_template: 'spree/api/v1/orders/show', status: 200)
        end
    
              if Cart::Update.call(order: @order, params: order_params).success?
            user_id = params[:order][:user_id]
            if current_api_user.has_spree_role?('admin') && user_id
              @order.associate_user!(Spree.user_class.find(user_id))
            end
            respond_with(@order, default_template: :show)
          else
            invalid_resource!(@order)
          end
        end
    
    module RuboCop
  module Cop
    module Style
      # This cop looks for uses of the *for* keyword, or *each* method. The
      # preferred alternative is set in the EnforcedStyle configuration
      # parameter. An *each* call with a block on a single line is always
      # allowed, however.
      #
      # @example EnforcedStyle: each (default)
      #   # bad
      #   def foo
      #     for n in [1, 2, 3] do
      #       puts n
      #     end
      #   end
      #
      #   # good
      #   def foo
      #     [1, 2, 3].each do |n|
      #       puts n
      #     end
      #   end
      #
      # @example EnforcedStyle: for
      #   # bad
      #   def foo
      #     [1, 2, 3].each do |n|
      #       puts n
      #     end
      #   end
      #
      #   # good
      #   def foo
      #     for n in [1, 2, 3] do
      #       puts n
      #     end
      #   end
      #
      class For < Cop
        include ConfigurableEnforcedStyle
        include RangeHelp
    
          # Returns the iteration variable of the `for` loop.
      #
      # @return [Node] The iteration variable of the `for` loop
      def variable
        node_parts[0]
      end