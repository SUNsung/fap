After do
  ORIGINAL_BUNDLE_VARS.each_pair do |key, value|
    ENV[key] = value
  end
end
    
      def migration_version
    if Rails.version.start_with? '5'
      '[#{Rails::VERSION::MAJOR}.#{Rails::VERSION::MINOR}]'
    end
  end
end

    
        def add_paperclip_callbacks
      @klass.send(
        :define_paperclip_callbacks,
        :post_process, :'#{@name}_post_process')
    end