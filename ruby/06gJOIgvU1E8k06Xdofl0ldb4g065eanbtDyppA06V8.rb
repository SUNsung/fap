
        
          def tumblr_consumer_key
    ENV['TUMBLR_OAUTH_KEY']
  end
    
      def set_table_sort(sort_options)
    valid_sorts = sort_options[:sorts] or raise ArgumentError.new('You must specify :sorts as an array of valid sort attributes.')
    default = sort_options[:default] || { valid_sorts.first.to_sym => :desc }
    
      def text_url
    object.local? ? medium_url(object) : nil
  end
    
        existence_maps = grouped_codes.map { |c| c.map { |cc| [cc, File.exist?(Rails.root.join('public', 'emoji', codepoints_to_filename(cc) + '.svg'))] }.to_h }
    map = {}
    
        # Description formatted to work well as page title when viewing gist
    if f.core_formula?
      descr = '#{f.name} on #{OS_VERSION} - Homebrew build logs'
    else
      descr = '#{f.name} (#{f.full_name}) on #{OS_VERSION} - Homebrew build logs'
    end
    url = create_gist(files, descr)
    
    require 'formula'
    
              # Check for git:// GitHub repo urls, https:// is preferred.
          git_gh_pattern = %r{^git://[^/]*github\.com/}
          audit_urls(urls, git_gh_pattern) do |_, url|
            problem 'Please use https:// for #{url}'
          end
    
        def define_setter
      name = @name
      @klass.send :define_method, '#{@name}=' do |file|
        send(name).assign(file)
      end
    end
    
            def rejected_types_rejected?
          @missing_rejected_types ||= @rejected_types.select { |type| type_allowed?(type) }
          @missing_rejected_types.none?
        end
      end
    end
  end
end

    
            def matches? subject
          @subject = subject
          @subject = subject.new if subject.class == Class
          error_when_not_valid? && no_error_when_valid?
        end
    
          def mark_invalid(record, attribute, types)
        record.errors.add attribute, :invalid, options.merge(:types => types.join(', '))
      end