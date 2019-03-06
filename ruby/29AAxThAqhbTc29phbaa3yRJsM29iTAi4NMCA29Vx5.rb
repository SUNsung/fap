
        
                  def hidden_field_for_checkbox(options)
            @unchecked_value ? tag('input', options.slice('name', 'disabled', 'form').merge!('type' => 'hidden', 'value' => @unchecked_value)) : ''.html_safe
          end
      end
    end
  end
end

    
                # Prepend a hidden field to make sure something will be sent back to the
            # server if all radio buttons are unchecked.
            if options.fetch('include_hidden', true)
              hidden_field + rendered_collection
            else
              rendered_collection
            end
          end
    
              builder = LabelBuilder.new(@template_object, @object_name, @method_name, @object, tag_value)
    
        def find_file(path, prefixes = [], *args)
      _find_all(path, prefixes, args, true).first || raise(MissingTemplate.new(self, path, prefixes, *args))
    end
    
    class Api::OEmbedController < Api::BaseController
  respond_to :json
    
    class Api::Web::PushSubscriptionsController < Api::Web::BaseController
  respond_to :json
    
      def set_rate_limit_headers
    apply_header_limit
    apply_header_remaining
    apply_header_reset
  end
    
      # This class is raised when a file already exists when trying to write.
  class FileAlreadyExists < StandardError
    # Get a human-readable error message
    def to_s
      return 'File already exists, refusing to continue: #{super}'
    end # def to_s
  end # class FileAlreadyExists
    
        return @name
  end
    
        # npm installs dependencies in the module itself, so if you do
    # 'npm install express' it installs dependencies (like 'connect')
    # to: node_modules/express/node_modules/connect/...
    #
    # To that end, I don't think we necessarily need to include
    # any automatic dependency information since every 'npm install'
    # is fully self-contained. That's why you don't see any bother, yet,
    # to include the package's dependencies in here.
    #
    # It's possible someone will want to decouple that in the future,
    # but I will wait for that feature request.
  end
    
        ::Dir.mkdir(File.join(builddir, 'manifests'))
    manifests.each do |manifest|
      dir = File.join(builddir, 'manifests', File.dirname(manifest))
      logger.info('manifests targeting: #{dir}')
      ::Dir.mkdir(dir) if !File.directory?(dir)
    
      # Sanitize package name.
  # Some PyPI packages can be named 'python-foo', so we don't want to end up
  # with a package named 'python-python-foo'.
  # But we want packages named like 'pythonweb' to be suffixed
  # 'python-pythonweb'.
  def fix_name(name)
    if name.start_with?('python')
      # If the python package is called 'python-foo' strip the 'python-' part while
      # prepending the package name prefix.
      return [attributes[:python_package_name_prefix], name.gsub(/^python-/, '')].join('-')
    else
      return [attributes[:python_package_name_prefix], name].join('-')
    end
  end # def fix_name
    
        # FIXME: don't assume current directory writeable
    FileUtils.touch(['fpm-dummy.tmp'])