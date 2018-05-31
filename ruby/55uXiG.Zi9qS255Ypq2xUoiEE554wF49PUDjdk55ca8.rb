
        
          def fish_completion_caveats
    if keg && keg.completion_installed?(:fish) && which('fish') then <<-EOS.undent
      fish completion has been installed to:
        #{HOMEBREW_PREFIX}/share/fish/vendor_completions.d
      EOS
    end
  end
    
        [@f.bin, @f.sbin, @f.lib].each { |d| clean_dir(d) if d.exist? }
    
          update_disk_cleanup_size(path.disk_usage)
    end
    
      def validate_type
    errors.add(:type, 'cannot be changed once an instance has been created') if type_changed? && !new_record?
    errors.add(:type, 'is not a valid type') unless self.class.valid_type?(type)
  end
    
      def evernote_consumer_secret
    (config = Devise.omniauth_configs[:evernote]) && config.strategy.consumer_secret
  end
    
        def form_configurable_attributes
      form_configurable_fields.keys
    end
  end
end

    
      def destroy
    @event.destroy
    
        version '1' do
      self.release = '1.12.6'
      self.base_url = 'http://coffeescript.org/v1/'
    
        version '1.3' do
      self.release = '1.3.4'
      self.base_urls = [
        'https://hexdocs.pm/elixir/#{release}/',
        'https://hexdocs.pm/eex/#{release}/',
        'https://hexdocs.pm/ex_unit/#{release}/',
        'https://hexdocs.pm/iex/#{release}/',
        'https://hexdocs.pm/logger/#{release}/',
        'https://hexdocs.pm/mix/#{release}/',
        'https://elixir-lang.org/getting-started/'
      ]
    end
  end
end

    
        options[:only] = BOOKS.map { |s| 'book.#{s}.html' }
    
        html_filters.push 'rust/entries', 'rust/clean_html'
    
          options[:skip] = %w(list-of-tutorials.html examples.html changelog.html ideas.html roadmap.html)
    
        def add(path, content)
      @pages[path] = content
    end
    
        export LANG=en_US.UTF-8
    \e[0m
    DOC
  end