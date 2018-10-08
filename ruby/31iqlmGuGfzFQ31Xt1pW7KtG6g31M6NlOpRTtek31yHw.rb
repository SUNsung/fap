
        
                  def instantiate_builder(builder_class, item, value, text, html_options)
            builder_class.new(@template_object, @object_name, @method_name, item,
                              sanitize_attribute_name(value), text, value, html_options)
          end
    
                  Time.utc(
                default[:year], default[:month], default[:day],
                default[:hour], default[:min], default[:sec]
              )
            end
          end
      end
    end
  end
end

    
              def initialize(template_object, object_name, method_name, object, tag_value)
            @template_object = template_object
            @object_name = object_name
            @method_name = method_name
            @object = object
            @tag_value = tag_value
          end
    
        initializer 'action_view.finalize_compiled_template_methods' do |app|
      ActiveSupport.on_load(:action_view) do
        ActionView::Template.finalize_compiled_template_methods =
          app.config.action_view.delete(:finalize_compiled_template_methods)
      end
    end
    
          def valid_access_token?(scopes: [])
        validate_access_token!(scopes: scopes)
    
        def puts(*args)
      STDERR.puts *args unless @silence
    end
    
      # Do not eager load code on boot. This avoids loading your whole application
  # just for the purpose of running a single test. If you are using a tool that
  # preloads Rails for running tests, you may have to set it to true.
  config.eager_load = false
    
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
    
            DIRECTIVES.each do |d|
          if options.key?(d)
            directives << '#{d.to_s.sub(/_/, '-')} #{options[d]}'
          end
        end