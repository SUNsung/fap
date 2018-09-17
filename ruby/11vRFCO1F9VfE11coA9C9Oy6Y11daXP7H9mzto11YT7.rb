
        
        def check_link(uri)
  HTTParty.head(uri, :verify => false).code.to_i.tap do |status|
    if (400..422).include?(status)
      if status != 403 && !uri.exclude?('udemy.com')
        raise 'Request had status #{status}'
      else
        putc('S')
      end
    end
  end
end
    
            def self.normalize_dn(dn)
          ::Gitlab::Auth::LDAP::DN.new(dn).to_normalized_s
        rescue ::Gitlab::Auth::LDAP::DN::FormatError => e
          Rails.logger.info('Returning original DN \'#{dn}\' due to error during normalization attempt: #{e.message}')
    
          def valid_access_token?(scopes: [])
        validate_access_token!(scopes: scopes)
    
          def image_url
        raise NotImplementedError
      end
    
            def metadata
          @metadata ||= Pipeline::Metadata.new(self)
        end
    
    group :test do
  gem 'minitest'
  gem 'rr', require: false
  gem 'rack-test', require: false
end
    
          def store_meta(store)
        json = as_json
        json[:mtime] = Time.now.to_i
        json[:db_size] = store.size(DB_FILENAME)
        store.write(META_FILENAME, json.to_json)
      end
    end
    
        def absolute_url_string?(str)
      str =~ SCHEME_RGX
    end
    
        def mime_type
      headers['Content-Type'] || 'text/plain'
    end
    
        class << self
      attr_accessor :dir
    
            css('img[style]').each do |node|
          node['align'] ||= node['style'][/float:\s*(left|right)/, 1]
          node['style'] = node['style'].split(';').map(&:strip).select { |s| s =~ /\Awidth|height/ }.join(';')
        end
    
          def get_type
        if slug.start_with?('guide/')
          'Guide'
        elsif slug.start_with?('cookbook/')
          'Cookbook'
        elsif slug == 'glossary'
          'Guide'
        else
          type = at_css('.nav-title.is-selected').content.strip
          type.remove! ' Reference'
          type << ': #{mod}' if mod
          type
        end
      end
    
      def internal_developer_commands
    find_internal_commands HOMEBREW_LIBRARY_PATH/'dev-cmd'
  end
    
        first_warning = true
    methods.each do |method|
      $stderr.puts 'Checking #{method}' if ARGV.debug?
      unless checks.respond_to?(method)
        Homebrew.failed = true
        puts 'No check available by the name: #{method}'
        next
      end
    
      def framework_version
    @framework_version ||= `rails -v`[/^Rails (.+)$/, 1]
  end