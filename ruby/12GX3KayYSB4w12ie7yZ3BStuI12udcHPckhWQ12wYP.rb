
        
                def set_default_disable_with(value, tag_options)
          return unless ActionView::Base.automatically_disable_submit_tag
          data = tag_options['data']
    
              def render_component(builder)
            builder.radio_button + builder.label
          end
      end
    end
  end
end

    
            def render
          options = @options.stringify_keys
          options['size'] = options['maxlength'] unless options.key?('size')
          options['type'] ||= field_type
          options['value'] = options.fetch('value') { value_before_type_cast } unless field_type == 'file'
          add_default_name_and_id(options)
          tag('input', options)
        end
    
            # If no layout is supplied, look for a template named the return
        # value of this method.
        #
        # ==== Returns
        # * <tt>String</tt> - A template name
        def _implied_layout_name
          controller_path
        end
    end
    
      [name, full_name]
end
    
        root.children.sort.each do |pn|
      if pn.directory?
        dirs << pn
      elsif block_given? && yield(pn)
        puts pn
        other = 'other '
      else
        remaining_root_files << pn unless pn.basename.to_s == '.DS_Store'
      end
    end
    
    # This formula serves as the base class for several very similar
# formulae for Amazon Web Services related tools.
class AmazonWebServicesFormula < Formula
  # Use this method to peform a standard install for Java-based tools,
  # keeping the .jars out of HOMEBREW_PREFIX/lib
  def install
    rm Dir['bin/*.cmd'] # Remove Windows versions
    libexec.install Dir['*']
    bin.install_symlink Dir['#{libexec}/bin/*'] - ['#{libexec}/bin/service']
  end
  alias_method :standard_install, :install
    
        def push(*names)
      @filters.push *filter_const(names)
    end
    
          unless root?
        raise Invalid, 'missing name' if !name || name.empty?
        raise Invalid, 'missing path' if !path || path.empty?
        raise Invalid, 'missing type' if !type || type.empty?
      end
    end
    
            name.prepend '#{breadcrumbs.join('.')}#' if breadcrumbs.present? && breadcrumbs[0] != name
        name << '()' if %w(Function Method Constructor).include?(subtitle)
        name
      end
    
            css('h1').each_with_index do |node, i|
          next if i == 0
          node.name = 'h2'
        end
    
    task :permissions do
  sh %{chmod -R a+rx bin}
  sh %{chmod -R a+r .}
  require 'shellwords'
  Dir.glob('test/**/*_test.rb') do |file|
    next if file =~ %r{^test/haml/spec/}
    sh %{chmod a+rx #{file}}
  end
end
    
          # @see Base#\_store
      def _store(key, version, sha, contents)
        compiled_filename = path_to(key)
        FileUtils.mkdir_p(File.dirname(compiled_filename))
        Sass::Util.atomic_create_and_write_file(compiled_filename) do |f|
          f.puts(version)
          f.puts(sha)
          f.write(contents)
        end
      rescue Errno::EACCES
        # pass
      end
    
        # Parses the CSS template and applies various transformations
    #
    # @return [Tree::Node] The root node of the parsed tree
    def build_tree
      root = Sass::SCSS::CssParser.new(@template, @options[:filename], nil).parse
      parse_selectors(root)
      expand_commas(root)
      nest_seqs(root)
      parent_ref_rules(root)
      flatten_rules(root)
      bubble_subject(root)
      fold_commas(root)
      dump_selectors(root)
      root
    end
    
        # The name of the mixin in which the error occurred.
    # This could be `nil` if the error occurred outside a mixin.
    #
    # @return [String]
    def sass_mixin
      sass_backtrace.first[:mixin]
    end
    
          # Get the publicly-visible URL for an imported file. This URL is used by
      # source maps to link to the source stylesheet. This may return `nil` to
      # indicate that no public URL is available; however, this will cause
      # sourcemap generation to fail if any CSS is generated from files imported
      # from this importer.
      #
      # If an absolute 'file:' URI can be produced for an imported file, that
      # should be preferred to returning `nil`. However, a URL relative to
      # `sourcemap_directory` should be preferred over an absolute 'file:' URI.
      #
      # @param uri [String] A URI known to be valid for this importer.
      # @param sourcemap_directory [String, NilClass] The absolute path to a
      #   directory on disk where the sourcemap will be saved. If uri refers to
      #   a file on disk that's accessible relative to sourcemap_directory, this
      #   may return a relative URL. This may be `nil` if the sourcemap's
      #   eventual location is unknown.
      # @return [String?] The publicly-visible URL for this file, or `nil`
      #   indicating that no publicly-visible URL exists. This should be
      #   appropriately URL-escaped.
      def public_url(uri, sourcemap_directory)
        return if @public_url_warning_issued
        @public_url_warning_issued = true
        Sass::Util.sass_warn <<WARNING
WARNING: #{self.class.name} should define the #public_url method.
WARNING
        nil
      end
    
          # A hash from file extensions to the syntaxes for those extensions.
      # The syntaxes must be `:sass` or `:scss`.
      #
      # This can be overridden by subclasses that want normal filesystem importing
      # with unusual extensions.
      #
      # @return [{String => Symbol}]
      def extensions
        {'sass' => :sass, 'scss' => :scss}
      end
    
      gem.required_ruby_version = '>= 2.0'
  gem.add_dependency 'airbrussh', '>= 1.0.0'
  gem.add_dependency 'i18n'
  gem.add_dependency 'rake', '>= 10.0.0'
  gem.add_dependency 'sshkit', '>= 1.9.0'
    
    module VagrantHelpers
  extend self
    
    http://capistranorb.com/documentation/advanced-features/custom-scm
    
          def set(key, value=nil, &block)
        @trusted_keys << key if trusted? && !@trusted_keys.include?(key)
        remember_location(key)
        values[key] = block || value
        trace_set(key)
        values[key]
      end
    
          rescue_from ActionController::ParameterMissing, with: :error_during_processing
      rescue_from ActiveRecord::RecordInvalid, with: :error_during_processing
      rescue_from ActiveRecord::RecordNotFound, with: :not_found
      rescue_from CanCan::AccessDenied, with: :unauthorized
      rescue_from Spree::Core::GatewayError, with: :gateway_error
    
            def load_order(lock = false)
          @order = Spree::Order.lock(lock).find_by!(number: params[:id])
          raise_insufficient_quantity and return if @order.insufficient_stock_lines.present?
          @order.state = params[:state] if params[:state]
          state_callback(:before)
        end
    
            def show
          @inventory_unit = inventory_unit
          respond_with(@inventory_unit)
        end
    
            def show
          respond_with(@product_property)
        end
    
            def show
          @state = scope.find(params[:id])
          respond_with(@state)
        end
    
    LogStash::Bundler.setup!
    
        signal_error('No plugins found') if filtered_specs.empty?
    
            if Utils::HttpClient.remote_file_exist?(uri)
          PluginManager.ui.debug('Found package at: #{uri}')
          return LogStash::PluginManager::PackInstaller::Remote.new(uri)
        else
          PluginManager.ui.debug('Package not found at: #{uri}')
          return nil
        end
      rescue SocketError, Errno::ECONNREFUSED, Errno::EHOSTUNREACH => e
        # This probably means there is a firewall in place of the proxy is not correctly configured.
        # So lets skip this strategy but log a meaningful errors.
        PluginManager.ui.debug('Network error, skipping Elastic pack, exception: #{e}')
    
      # Make sure we dont build this gem from a non jruby
  # environment.
  if RUBY_PLATFORM == 'java'
    gem.platform = 'java'
  else
    raise 'The logstash-core-api need to be build on jruby'
  end
end

    
          puts user_feedback_string_for('bootstrapping', args[:platform], machines, {'experimental' => experimental})