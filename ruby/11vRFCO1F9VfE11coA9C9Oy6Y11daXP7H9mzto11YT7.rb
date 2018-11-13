
        
                    DateTimeSelector.new(datetime, options, html_options)
          end
    
        def find_file(path, prefixes = [], *args)
      _find_all(path, prefixes, args, true).first || raise(MissingTemplate.new(self, path, prefixes, *args))
    end
    
        initializer 'action_view.default_enforce_utf8' do |app|
      ActiveSupport.on_load(:action_view) do
        default_enforce_utf8 = app.config.action_view.delete(:default_enforce_utf8)
        unless default_enforce_utf8.nil?
          ActionView::Helpers::FormTagHelper.default_enforce_utf8 = default_enforce_utf8
        end
      end
    end
    
      it_behaves_like :kernel_system, :system, KernelSpecs::Method.new
end
    
    ::Bundler.with_friendly_errors do
  ::Bundler::CLI.start(ARGV, :debug => true)
end

    
      end
end
    
        class << self
      def elastic_pack_base_uri
        env_url = ENV['LOGSTASH_PACK_URL']
        (env_url.nil? || env_url.empty?) ? DEFAULT_PACK_URL : env_url
      end