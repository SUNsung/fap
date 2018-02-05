
        
          private
    def processed?
      image.attached?
    end
    
          def scope(association)
        klass = association.klass
        reflection = association.reflection
        scope = klass.unscoped
        owner = association.owner
        chain = get_chain(reflection, association, scope.alias_tracker)
    
              def method_missing(called, *args, &block)
            tag_string(called, *args, &block)
          end
      end
    
          # Need to experiment if this priority is the best one: rendered => output_buffer
      def document_root_element
        Nokogiri::HTML::Document.parse(@rendered.blank? ? @output_buffer : @rendered).root
      end
    
      def test_redirect_to_with_block
    get :redirect_to_with_block
    assert_response :redirect
    assert_redirected_to 'http://www.rubyonrails.org/'
  end
    
          private
        def listener
          @listener || @server.mutex.synchronize { @listener ||= Listener.new(self, @server.event_loop) }
        end
    
    class TestResponseTest < ActiveSupport::TestCase
  def assert_response_code_range(range, predicate)
    response = ActionDispatch::TestResponse.new
    (0..599).each do |status|
      response.status = status
      assert_equal range.include?(status), response.send(predicate),
                   'ActionDispatch::TestResponse.new(#{status}).#{predicate}'
    end
  end
    
          def reset_all # :nodoc:
        current_instances.each_value(&:reset)
      end
    
        def dump_params_keys(hash = params)
      hash.keys.sort.inject('') do |s, k|
        value = hash[k]
    
        rescue_from StandardError, with: :handle_exception_with_mailer_class
    
        def process(args)
      arg_is_present? args, '--server', 'The --server command has been replaced by the \
                          'serve' subcommand.'
      arg_is_present? args, '--serve', 'The --serve command has been replaced by the \
                          'serve' subcommand.'
      arg_is_present? args, '--no-server', 'To build Jekyll without launching a server, \
                          use the 'build' subcommand.'
      arg_is_present? args, '--auto', 'The switch '--auto' has been replaced with \
                          '--watch'.'
      arg_is_present? args, '--no-auto', 'To disable auto-replication, simply leave off \
                          the '--watch' switch.'
      arg_is_present? args, '--pygments', 'The 'pygments'settings has been removed in \
                          favour of 'highlighter'.'
      arg_is_present? args, '--paginate', 'The 'paginate' setting can only be set in \
                          your config files.'
      arg_is_present? args, '--url', 'The 'url' setting can only be set in your \
                          config files.'
      no_subcommand(args)
    end
    
          # Group an array of items by an expression
      #
      # input - the object array
      # variable - the variable to assign each item to in the expression
      # expression -a Liquid comparison expression passed in as a string
      #
      # Returns the filtered array of objects
      def group_by_exp(input, variable, expression)
        return input unless groupable?(input)
    
      private
    
      # Finds the groups of the source user, optionally limited to those visible to
  # the current user.
  def execute(current_user = nil)
    segments = all_groups(current_user)
    
            # Initialize the provider to represent the given machine.
        #
        # @param [Vagrant::Machine] machine The machine that this provider
        #   is responsible for.
        def initialize(machine)
        end
    
            # Helper method to get access to the class variable. This is mostly
        # exposed for tests. This shouldn't be mucked with directly, since it's
        # structure may change at any time.
        def registered; @@registered; end
      end
    end
  end
end

    
        name_width ||= @results.map {|v, result|
      v.size + (case v; when /^vm1_/; @loop_wl1; when /^vm2_/; @loop_wl2; end ? 1 : 0)
    }.max
    minwidth ||= 7
    width = @execs.map{|(_, v)| [v.size, minwidth].max}
    
        # convert grid mixins LESS when => Sass @if
    def convert_grid_mixins(file)
      file = replace_rules file, /@mixin make-grid-columns/, comments: false do |css, pos|
        mixin_all_grid_columns css, selector: '.col-xs-#{$i}, .col-sm-#{$i}, .col-md-#{$i}, .col-lg-#{$i}', to: '$grid-columns'
      end
      file = replace_rules file, /@mixin float-grid-columns/, comments: false do |css, pos|
        mixin_all_grid_columns css, selector: '.col-#{$class}-#{$i}', to: '$grid-columns'
      end
      file = replace_rules file, /@mixin calc-grid-column/ do |css|
        css = indent css.gsub(/.*when (.*?) {/, '@if \1 {').gsub(/(\$[\w-]+)\s+=\s+(\w+)/, '\1 == \2').gsub(/(?<=-)(\$[a-z]+)/, '#{\1}')
        if css =~ /== width/
          css = '@mixin calc-grid-column($index, $class, $type) {\n#{css}'
        elsif css =~ /== offset/
          css += '\n}'
        end
        css
      end
      file = replace_rules file, /@mixin loop-grid-columns/ do |css|
        unindent <<-SASS, 8
        // [converter] This is defined recursively in LESS, but Sass supports real loops
        @mixin loop-grid-columns($columns, $class, $type) {
          @for $i from 0 through $columns {
            @include calc-grid-column($i, $class, $type);
          }
        }
        SASS
      end
      file
    end
    }
    }
    
        def metadata_subdir(leaf, version: self.version, timestamp: :latest, create: false)
      if create && timestamp == :latest
        raise CaskError, 'Cannot create metadata subdir when timestamp is :latest.'
      end
    
          attr_accessor(*VALID_KEYS)
      attr_accessor :pairs
    
          def installed_gem_version(gem_name)
        Gem.loaded_specs[gem_name].version
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
